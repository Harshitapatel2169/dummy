#include<stdio.h>
#include<stdlib.h>
int main(){
   int n;
printf("Enter size");
scanf("%d",&n);
// int*arr=(int*)malloc(n*sizeof(int));
int*arr=(int*)calloc(n,sizeof(int));
printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++)
scanf("%d",&n);
// printf("\nNow enter new size:");
// int newSize;
// scanf("%d",&newSize);
// arr=(int *)realloc(arr,newSize* sizeof(int));
// printf("Enter %d new elements:\n",newSize);
// for(int i=0;i<newSize;i++)
// scanf("%d",&arr[i]);
}