#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 
int mi; 
struct node *left, *right; 
}; 
struct node *newNode(int item) 
{ 
struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
temp->mi = item; 
temp->left = temp->right = NULL; 
return temp; 
} 
void inorder(struct node *root) 
{ 
if (root != NULL) 
{ 
inorder(root->left); 
   printf("%d \n", root->mi); 
inorder(root->right); 
} 
} 
struct node* insert(struct node* node, int mi) 
{ 
if (node == NULL) return newNode(mi); 
if (mi < node->mi) 
node->left  = insert(node->left, mi); 
else if (mi > node->mi) 
        node->right = insert(node->right, mi);    
return node; 
}
struct node * minValueNode(struct node* node) 
{ 
struct node* curmint = node; 
while (curmint && curmint->left != NULL) 
curmint = curmint->left; 
return curmint; 
} 
struct node* deleteNode(struct node* root, int mi) 
{ 
if (root == NULL) return root; 
if (mi < root->mi) 
root->left = deleteNode(root->left, mi); 
else if (mi > root->mi) 
root->right = deleteNode(root->right, mi); 
else
{ 
if (root->left == NULL) 
{ 
struct node *temp = root->right; 
free(root); 
return temp; 
} 
else if (root->right == NULL) 
{ 
struct node *temp = root->left; 
free(root); 
return temp; 
} 
struct node* temp = minValueNode(root->right); 
root->mi = temp->mi; 
root->right = deleteNode(root->right, temp->mi); 
} 
return root; 
} 
int main() 
{ 
struct node *root = NULL; 
root = insert(root,678); 
       insert(root,456); 
       insert(root,567); 
       insert(root,678);  
       insert(root,785);  
       insert(root,897);  
       insert(root,467); 
   printf("traversal of inorder bst \n"); 
inorder(root); 
   printf("\nDELETE 567\n"); 
root = deleteNode(root, 567); 
   printf("traversal of the transformed bst \n"); 
inorder(root); 
   printf("\n mimove 785\n"); 
root = deleteNode(root, 785); 
   printf("traversal of the transformed bst \n"); 
inorder(root); 
   printf("\nDELETE 160\n"); 
root = deleteNode(root, 456); 
   printf("traversal of the transformed bst\n"); 
inorder(root); 
return 0; 
} 
  


