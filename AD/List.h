#ifndef LIBLIST_H
#define LIBLIST_H

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct ListNode* List;

struct ListNode {
  int item;
  List next;
};
void addItem(int n, List* li);
void freeList(List li);
void visit(List li);
void visitListRec(List li);
List strictOrder(List li);
#endif
