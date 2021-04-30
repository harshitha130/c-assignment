<?php
session_start();
?>

<!DOCTYPE html>
<html>
<head>
	<title> RTM MINI PROJ </title>
	<link rel="shortcut icon" href="https://images.hdqwalls.com/download/new-day-4k-be-1920x1080.jpg"></link>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="">
    <meta name="author" content="">
	<link href="css/bootstrap.min.css" rel="stylesheet" ></link>
	<link href="css/bootstrap.css" rel="stylesheet" ></link>
	<link href="css/Default.css" rel="stylesheet" >	</link>
	<script type="text/javascript" src="js/jquery.js"></script>
	<script>
		$(document).ready(function()
		{
			var x=(($(window).width())-1024)/2;
			$('.wrap').css("left",x+"px");
		});
	</script>
	
	<script type="text/javascript" src="js/bootstrap.min.js"></script>
	<script type="text/javascript" src="js/bootstrap.js"></script>
	<script type="text/javascript" src="js/man.js"></script>
	
	
</head>
<body>

	<div class="wrap">
		<!-- Header -->
		<div class="header">
			<div style="float:left;width:150px;">
				<img src="https://thecottagemarket.com/glitterandglam/TCM-Glam-Mongram-Gold-5x7-S.jpg" style="width:150px;height:150px;"//>
			</div>		
			<div>
			<div style="float:right; font-size:20px;margin-top:20px;">
			<?php
			 if(isset($_SESSION['name']))	
			 {
			 echo "Welcome,".$_SESSION['name']."&nbsp;&nbsp;&nbsp;<a href=\"logout.php\" class=\"btn btn-info\">Logout</a>";
			 }
			 else
			 {
			 ?>
				<a href="login1.php" class="btn btn-info">Login</a>&nbsp;&nbsp;&nbsp;&nbsp;
				<a href="signup.php?value=0" class="btn btn-info">Signup</a>
			<?php } ?>
			
			
			</div>
			<div id="heading">
				<a href="index.php"> SERENITY TRACKS </a>
			</div>
			</div>
		</div>
		
		<!-- Navigation bar -->
		<div class="navbar navbar-inverse">
			<div class="navbar-inner">
				<div class="container" >
				<a class="brand" href="index.php" >HOME</a>
				<a class="brand" href="train.php" >FIND TRAIN</a>
				<a class="brand" href="reservation.php">RESERVATION</a>
				<a class="brand" href="profile.php">PROFILE</a>
		                </div>
			</div>
		</div>
		<div class="span12 well">
			<!-- Photos slider -->
			<div id="myCarousel" class="carousel slide" style="width:600px; float:left;margin-bottom:3px;">		
				<div class="carousel-inner">
				<div class="active item"><img src="https://images.hdqwalls.com/download/train-anime-art-4k-yp-1920x1080.jpg"/></div>
				<div class="item"><img src="https://images.hdqwalls.com/download/power-lines-train-anime-4k-3y-1920x1080.jpg"/> </div>
				<div class="item"><img src="https://images.hdqwalls.com/download/cyberpunk-2077-metro-train-4k-ti-1920x1080.jpg"/></div>
				<div class="item"><img src="https://images.hdqwalls.com/download/rainy-night-artistic-painting-1920x1080.jpg"/></div>
				
				
				</div>
				<a class="carousel-control left" href="#myCarousel" data-slide="prev">&lsaquo;</a>
				<a class="carousel-control right" href="#myCarousel" data-slide="next">&rsaquo;</a>
			</div>
			<!-- News and Alert-->
			<div class="news" Style="float:right;">
			<marquee behavior="scroll" id="marq"  scrollamount=3 direction="up" height="294px" onmouseover="nestop()" onmouseout="nestrt()">
				<div>
				<p><b>This is serenity tracks, It is private railway network which was approved by the government to make the traveling more convenient at an affordable price range.
                                </b></p>
				</br>
				<p><b>This is serenity tracks, It is private railway network which was approved by the government to make the traveling more convenient at an affordable price range.</b></p></br>
				<p><b>Railway issues new catering policy for better food.</b></p></br>
				<p><b>Passengers will now be involved in judging cleanliness level of our trains.</b><p></br>
			
				
				</div>
			</marquee>
			</div>
		</div>
		
		
<footer >
		<div style="width:100%;">
			<div style="float:left;">
			<p class="text-right text-info">   SERENITY PVT LIMITED</p>	
			</div>
			<div style="float:right;">
			<p class="text-right text-info">	EXCLUSIVE FOR PEOPLE</p>
			</div>
		</div>
		</footer>	</div>
	
</body>
</html>

<?php

if(isset($_SESSION['error']))
{
session_destroy();
}

?>