#include<stdio.h>
int main()
{
int n =6;
int i;
if(n<=1)
{
    printf("not  prime\n ");
}
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        printf("ye nhi hai\n");
    }
    else{
        printf("primee hai");
    }
}
};












    // int num=6548;
    // int sum=0;
    // while(num>0);
    //  {
    //     int lastDigit=num%10;
    //     sum=sum+lastDigit;
    //     num=num/10;
    //  }
    //  printf("%d",sum);
    