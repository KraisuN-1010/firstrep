#include<stdio.h>
int main(){
    int num,n=0;
    printf("Enter number");
    scanf("%d",&num);
    int num2=num;
    while(num2>0){
        num2/=10;
        n++;
    }
    num2=num;
    printf("Numbers");
}