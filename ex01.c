#include <stdio.h>

int main(){
    int a = 0;
    float b = 0.0;
    char n[20];
    printf("Please enter an integer value: ");
    scanf("%d",&a);
    printf("You entered %d\n",a);
    printf("Please enter a float value: ");
    scanf("%f",&b);
    printf("You entered %.1f\n",b);
    printf("Please enter a character: ");
    scanf("%s",n);
    printf("You entered %s\n",n);




    return 0;
}