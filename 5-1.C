// write a program to find the minimum number from the given 3 mumber using if else . also , draw a flowchart in your book .

#include<stdio.h>
#include<conio.h>

void main (){
int a ,b,c;
clrscr();;
printf("enter the first number : ");
scanf("%d",&a);
printf("enter the second number :");
scanf("%d",&b);
printf("enter the third number :");
scanf("%d",&c);
if(a>b){
    if(a>c){
    printf("A is minimum...\n");
    }else{
    printf("B is minimum...\n");
    }
}else{
   if(b>c){
   printf("C is minimum...\n");
   }else{
   printf("B is minimum...\n");
   }
}
   printf("the minimum value is : 3 ");
getch();
}
