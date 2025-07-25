#include <stdio.h>

int main(){
    int stu = 0.0;
    float ps = 0.0;
    float phs = 0.0;
    float cas = 0.0;
    char n[20];
   
    printf("Enter your Name: ");
    scanf("%s",n);
    printf("Enter your Student ID: ");
    scanf("%d",&stu);
    printf("Enter your Programming score: ");
    scanf("%f",&ps);
    printf("Enter your Physics score: ");
    scanf("%f",&phs);
    printf("Enter your Calculus score: ");
    scanf("%f",&cas);

    printf("Hi %s(%d)! Your GPA is %.2f\n",n,stu,(ps+phs+cas)/3);

    return 0;
}