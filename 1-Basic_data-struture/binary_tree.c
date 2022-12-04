#include "stdio.h"
#include "stdlib.h"

// A node has two leaves, left * right
struct node
{
    int key;
    struct node* left;
    struct node* right;
};

// t is the current root
struct node *t;

struct node* newNode(int v)
{
    t = (struct node *) malloc (sizeof *t);
    t->key = v;
    t ->right = NULL;
    t->left = NULL;

    return t;
};

struct node* insertLeft(struct node* t, int v){
    t->left = newNode(v);
    return t->left;
}

struct node* insertRight(struct node* t, int v){
    t->right = newNode(v);
    return t->right;
}

// Inorder: left --> root --> right
void inorderTraversal(struct node* t) {
  if (t == NULL) return;
  inorderTraversal(t->left);
  printf("%d ->", t->key);
  inorderTraversal(t->right);
}

// Preorder: root --> left --> right
void preorderTraversal(struct node* t) {
  if (t == NULL) return;
  printf("%d ->", t->key);
  preorderTraversal(t->left);
  preorderTraversal(t->right);
}

// Postorder: left --> right --> root
void postorderTraversal(struct node* t) {
  if (t == NULL) return;
  postorderTraversal(t->left);
  postorderTraversal(t->right);
  printf("%d ->", t->key);
}



int main() {
  struct node* root = newNode(1);
  insertLeft(root, 7);
  insertRight(root, 4);
  insertLeft(root->left, 0);
  insertRight(root->left, 5);

  /*
          1
        /   \
      7       4
    /   \
  0       5
  */

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);

  printf("\n");
}