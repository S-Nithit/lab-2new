#include <stdio.h>

int main(){
    int age = 0.0;
    float h = 0.0;
    char u[20];
    char n[20],s[20];
   
    printf("Enter your full name: ");
    scanf("%s %s",n,s);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&h);
    printf("Enter you University name: ");
    scanf("%s",u);

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.\n",s[0],n,u,age,h);

    return 0;
}