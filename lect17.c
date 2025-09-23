#include<stdio.h>
int main(){
    // int arr[4]={1,2,3,4};
    // int *p=arr;
    // for(int i=0;i<4;i++){
    //     printf("%d",*(p+i));
    // }
       int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }printf(" ");
     
    }


}