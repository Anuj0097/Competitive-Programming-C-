#include<iostream.h>
#include<stdio.h>
int main(){
    int i=5;
    int *j;
    int **k;
    j=&i;
    k=&j;
    printf("%d %d %d ",k,*k,**k);
    return 0;
}