#include<stdio.h>
// int main(){
//     int arr[5]={0,1,2,32,0};
//     int j=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]!=0){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             j++;
//         }
//     }
//     for(int i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
//     printf("%d\n",arr[j]);
int main(){
    int letmax[6];
    int height[6]={5,6,0,3,5,2};
    int rightmax[6];
    int water=0;
    letmax[0]=height[0];
    for(int i=1;i<6;i++){
        if(height[i]>letmax[i-1]){
            letmax[i]=height[i];
        }else{
            letmax[i]=letmax[i-1];
        }
    }
    rightmax[5]=height[5];
    for(int i=4;i>=0;i--){
        if(height[i]>rightmax[i+1]){
            rightmax[i]=height[i];
        }else{
            rightmax[i]=rightmax[i+1];
        }
    }
    for(int i=0;i<6;i++){
        int minheight;
        if(letmax[i]<rightmax[i]){
            minheight=letmax[i];
        }else{
            minheight=rightmax[i];
        }
        water=water+(minheight-height[i]);
    }
    printf("%d",water);
}