#include<stdio.h>
// int main(){
//     int arr[6]={7,1,5,3,6,4};
//     int minbuy=arr[0];
//     int maxp=0;
//     for(int i=1;i<6;i++){
//         if(arr[i]<minbuy){
//             minbuy=arr[i];
//         }else{
//             int profit=arr[i]-minbuy;
//             if(profit>maxp){
//                 maxp=profit;
//             }
//         }
//     }printf("%d",maxp);
int main(){
    int n=4;
    if(n&1){
        printf("odd");
    }else{
        printf("even");
    }
}