#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Tree.h"

Tree newNode(int value,Tree left,Tree right){
  Tree newTree=malloc(sizeof(struct TreeNode));
  assert(newTree!=NULL);
  newTree->value=value;
  newTree->left=NULL;
  newTree->right=NULL;
  return newTree;
}
int numberOfLeaves(Tree tr,int n){
  if(n<0 || tr==NULL){
    return 0;
  }
  if(tr->left==NULL && tr->right==NULL){
    return 1;
  }
  return numberOfLeaves(tr->left,n-1)+numberOfLeaves(tr->right,n-1);
}
bool isHeap(Tree tr){
  if(tr==NULL){
    return true;
  }
  if(tr->left->value > tr->value || tr->right->value > tr->value){
    return false;
  }
  return (isHeap(tr->left) && isHeap(tr->right));
}
