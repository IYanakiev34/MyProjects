#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "List.h"
List strictOrder(List li){
  List sub=NULL;
  addItem(li->item,&sub);
  while(li->next!=NULL){
    if(sub->item < li->next->item){
      printf("we here!");
      addItem(li->item,&sub);
      visitListRec(sub);
    }
    li=li->next;
  }
  return sub;
}
void addItem(int n, List *li) {
  List newList = malloc(sizeof(struct ListNode));
  assert(newList!=NULL);
  newList->item = n;
  newList->next= NULL;
  if((*li)==NULL){
    (*li)=newList;
  }else{
    List la=*li;
    while(la->next!=NULL){
      la=la->next;
    }
    la->next=newList;
  }
}

void freeList(List li) {
  List li1;
  while ( li != NULL ) {
    li1 = li->next;
    free(li);
    li = li1;
  }
  return;
}

void visit(List li) {
  printf("%d ",li->item);
}

void visitListRec(List li) {
  if (li == NULL) {
    return;
  }
  visit(li);
  visitListRec(li->next);
}
