#ifndef TREE_H
#define TREE_H

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include<stdbool.h>
typedef struct TreeNode *Tree;
struct TreeNode{
  int value;
  Tree left;
  Tree right;
};
Tree newNode(int,Tree left,Tree right);
int numberOfLeaves(Tree tr,int n);
bool isHeap(Tree tr);
#endif
