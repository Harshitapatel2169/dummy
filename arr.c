#include<stdio.h>
int main(){
    int arr[5]={1,2,4,3};
    int min=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    printf("%d",min);
}
//    int arr[5]={1,2,4,3};
//     int sum=0;
//     for(int i=0;i<4;i++){
//         sum=sum+arr[i