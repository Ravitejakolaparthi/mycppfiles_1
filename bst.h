#ifndef MY_BST_H
#define MY_BST_H
#include<iostream>
using namespace std;

struct tree{
int data;
tree * left;
tree * right;

  tree(int val)
  {
     data = val;
     left = right = NULL;
  }
};

struct Binarysearchtree
{
    tree *root  = nullptr;

    tree * add(int val,tree*root)
{
    if(root == NULL)
    {
       return new tree(val);
    }
    if(val < root -> data)
    {
       root -> left = add(val,root -> left);
    }
    else
    {
       root -> right = add(val,root -> right);
    }
    return root;
 }
void insert(int val)
    {
      root = add(val,root);
    }
void printinorder(tree*root)
{
    if(root == NULL)
    return ;
    printinorder(root -> left);
    cout << root -> data << " ";
    printinorder(root -> right);
    
}

void inorder()
printinorder(root);

};



#endif
