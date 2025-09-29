#include<stdio.h>
int main(){
int n=11;
int isPrime=1;
if(n<=1){
    printf("Prime no nhi hai");
    return 0;
}
for(int i=2;i<n;i++){
    if(n%i==0){
    isPrime=0;
    break;
    }
}
if(isPrime){
    printf("prime no hai");

}else
{
    printf("prime no nai hai");
}
}




        // int n=234;
        // int count=0;
        // if (n==0){
        //     count=1;
        // }
        // while(n>0);
        // {
        //     count++;
        //     n=n/10;
        // }
        // printf("%d",count);
