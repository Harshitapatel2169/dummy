#include<stdio.h>
// int palindrom(int arr[],int i,int j){
//     if(i>=j){
//     return 1;
//     }
//     if(arr[i]!=arr[j]){
//         return 0;
//     }
//     return palindrom(arr,i+1,j-1);
// }
// int main(){
//     int arr[3]={1,2,1};
//     int startindex=0;
//     int endindex=2;
//     int data =palindrom(arr,startindex ,endindex );
//     printf("%d\n",data);
// }
// int bs(int arr[],int i,int j,int target){
//     if(i>j){
//         return -1;
//     }
//     int mid=(i+j)/2;
//     if(arr[mid]==target){
//         return mid;
//     }
//     else if(arr[mid]<target){
//         return bs(arr,mid+1,j,target);
//     }
//     else{
//         return bs(arr,i,mid-1,target);
//     }


// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int i=0;
//     int j=4;
//     int target=4;
//    int data= bs(arr,i,j,target);
//     printf("%d\n",data);
    
// }
int sorted(int arr[],int i,int j){
    if(i>j){
        return 1;

    }
    if(arr[i]>arr[i+1]){
        return 0;
    }
    return sorted(arr,i+1,j);

}
int main(){
    int arr[3]={1,2,3};
    int i=0;
    int j=2;
    int data=sorted(arr,i,j);
    printf("%d",data);
}