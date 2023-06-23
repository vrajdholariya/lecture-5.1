// write a program to find the maximum number from the given 4 numbers using nested if else. also, draw a flowchart in your book .

#include<stdio.h>
#include<conio.h>

void main (){
int a,b,c,d;

clrscr();
printf("enter the value of a :");
scanf("%d",&a);
printf("enter the value of b :");
scanf("%d",&b);
printf("enter the value of c :");
scanf("%d",&c);
printf("enter the value of d :");
scanf("%d",&d);

if(a>b){
  if(a<c){
  printf("C is maximum...\n");
  }else{
  printf("A is maximum...\n");
  }
}else{
   if(b>c){
   printf("B is maximum...\n");
   }else{
   printf("C is maximum...\n");
   }
   if(c>d){
   printf("C is maximum...\n");
   }else{
   printf("D is maximum...\n");
   }
}
    printf("the maximum value is : 12");
getch();
}