#include<stdio.h>
int main()
{
int num=2456;
int sum=0;
while (num>0)
{
    int lastDigit=num%10;
    sum=sum+lastDigit;
    num=num/10;
}
printf("%d",sum);
};
//     int arr[5]={1,4,5,3,2};
//     int k=3;
//     int wSum=0;
// for(int i=0;i<k;i++){
//     wSum+=arr[i];
// }
// int maxSum=wSum;
// for(int i=k;i<5;i++){
// wSum=wSum+arr[i]-arr[i-k];
//     if(wSum>maxSum){
//     maxSum=wSum;
//     }
// }printf("%d",maxSum);


    // int arr[5][5]={{1,2,4,5,2},{5,5,1,7,6}};
    // int arr1[10];
    // int k=0;
    //     for(int i=0;i<5;i++){
    //         for(int j=0;j<5;j++){
    //             arr1[k]=arr[i][j];
    //             k++;
    //         }
    //     }
    //     for(int i=0;i<10;i++){
    //         printf("%d",arr1[i]);
    //     }

