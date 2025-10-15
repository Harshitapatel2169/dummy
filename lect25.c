#include<stdio.h>
#include<string.h>
struct student
    {
        char name[10];
        int Rollno;
        float marks;
    };
    int main(){
struct student s1[5];
for(int i=0;i<5;i++){
    printf("Enter your name");
    scanf(" %s",s1[i].name);

    printf("Enter your Rollno");
    scanf(" %d",s1[i].Rollno);
    
    printf("Enter your marks");
    scanf(" %f",s1[i].marks);
}
}   
    
    // int letmax[12];
    // int height[12]={0,1,0,2,1,0,1,3,2,1,2,1};
    // int rightmax[12];
    // int water=0;
    // letmax[0]=height[0];
    // for(int i=1;i<12;i++){

    // }

