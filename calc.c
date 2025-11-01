#include<stdio.h>
void menu(){
    printf("-----SIMPLE CALCULATOR------\n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("5.REMAINDER\n");
    printf("PLEASE TAKE FIRST NUMBER AS THE BIGGER NUMBER FOR DIVISION AND REMAINDER\n");
    }
void sum(int a,int b){
    int r;
    r=a+b;
    printf("the sum of %d and %d is %d\n",a,b,r);

}
void sub(int a,int b){
    int r;
    r=a-b;
    printf("the subtraction of %d and %d is %d\n",a,b,r);

}
void mult(int a,int b){
    int r;
    r=a*b;
    printf("the multiplication of %d and %d is %d\n",a,b,r);

}
void div(int a,int b){
    float r;
    r=a/b;
    printf("the division of %d and %d is %.2f\n",a,b,r);

}
void rem(int a,int b){
    int r;
    r=a%b;
    printf("the remainder of %d and %d is %d\n",a,b,r);

}
//main programme
int main(){
    int ch,x,y;
    menu();
    printf("ENTER THE FIRST AND SECOND NUMBER:\n");
    scanf("%d%d",&x,&y);
    printf("ENTER THE OPERATOR YOU WANT TO USE\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:
        sum(x,y);
        break;
     case 2:
        sub(x,y);
        break;
     case 3:
        mult(x,y);
        break;
     case 4:
        div(x,y);
        break;
     case 5:
        rem(x,y);
        break;
     }
    return 0;
}
