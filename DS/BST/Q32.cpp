//Recursive
#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int data;
  Node* left;
  Node* right;
};
Node* newNode(int data)
{
  Node* newNode = new Node();
  newNode->data=data;
  newNode->left=newNode->right=NULL;
  return newNode;
}
Node* findLCA(Node* root,int n1, int n2)
{
  if(root == NULL)
    return NULL;
  if(root->data > n1 && root->data>n2)
    return findLCA(root->left,n1,n2);
  else if(root->data < n1 && root->data < n2)
    return findLCA(root->right,n1,n2);
  return root;
}
int main()
{
  Node* root=NULL;
  root=newNode(20);
  root->left=newNode(8);
  root->left->left=newNode(4);
  root->left->right=newNode(12);
  root->left->right->left=newNode(10);
  root->left->right->right=newNode(14);
  root->right=newNode(22);
  Node* lca=findLCA(root,10,14);
  cout<<"LCA -->"<<lca->data;
}

//Iterative
#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int data;
  Node *left,*right;
};
Node* newNode(int data)
{
  Node* newNode = new Node();
  newNode->data = data;
  newNode->left=newNode->right=NULL;
  return newNode;
}
Node* findLCA(Node* root, int n1,int n2)
{
  while (root!=NULL)
  {
    if(root->data>n1 && root->data>n2)
      root=root->left;
    else if(root->data<n1 && root->data<n2)
      root=root->right;
    else
      break;
  }
  return root;
}
int main()
{
  Node* root=NULL;
  root=newNode(20);
  root->left=newNode(8);
  root->left->left=newNode(4);
  root->left->right=newNode(12);
  root->left->right->left=newNode(10);
  root->left->right->right=newNode(14);
  root->right=newNode(22);
  Node* lca=findLCA(root,10,14);
  cout<<"LCA -->"<<lca->data;  
}
