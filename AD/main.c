#include<stdio.h>
#include<stdlib.h>
#include "List.c"
int main(int argc,char*argv[]){
  int n;
  List list=NULL;
  for(int i=0;i<7;i++){
    printf("add item: ");
    scanf("\n%d",&n);
    addItem(n,&list);
  }
  list=strictOrder(list);
  return 0;
}
