#include<stdio.h>
int main(){
    int age=20;
    float pi=3.14;
    char grade='A';
    printf("Age=%d\n",age);
    printf("Pi=%f/n",pi);
printf("Grade=%c/n",grade);
// taking input from user
int a;
printf("Enter a number:");
scanf("%d",&a);
printf("you entered:%d\n\n",a);
// Arithmetic operators
int x=10,y=3;
printf("x+y=%\n",x+y);
printf("x-y=%d\n",x-y);
printf("x*y=%d\n",x*y);
printf("x/y=%d\n",x/y);
printf("x%%y=%d\n\n",x%y);
// Type casting(to get decimal result in division)
float result=(float)x/y;
printf("type casted dividion%.2f\n\n",result);
// increment and decrement
int num =5;
printf("num=%d\n",num);
printf("num++=%d\n",num++);
// print first, then increase
printf("Now num=%d\n",num);
printf("num++=%d\n",++num);
// increase first, then print
printf("now num=%d\n\n",num);
// if else example
int marks=73;
if(marks>=75){
    printf("Grade:A\n");
} else if(marks>=60){
printf("Grade:B\n");
} else{
    printf("fail\n");
}
// sizeof operator
printf("\nsize of int=%zu bytes\n",sizeof(int));
printf("sizeof char=%dzu bytes\n\n",sizeof(char));;
printf("sizeof float=%dzu bytes\n",sizeof(float));
// ASCII example
int ascii=65;
char ch=ascii;
printf("ASCII value %d=character'%c'\n",ascii,ch);
return 0;

}