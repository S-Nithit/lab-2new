#include <stdio.h>

int main(){
    int age = 0;
    float height = 0.0;
    int weight = 0;
    char n[20];
    char g[3];
    char e[20],f[20];
    
   
    printf("Enter your Name: ");
    scanf("%s",n);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your weight: ");
    scanf("%d",&weight);
    printf("Enter your gender: ");
    scanf("%s",g);
    printf("Enter your Education Qualification: ");
    scanf("%s %s",e,f);
    

    printf("\n\nName: %s\n",n);
    printf("Age: %d\n",age);
    printf("Gender: %s\n",g);
    printf("Height: %.1f\n",height);
    printf("Weight: %d\n",weight);
    printf("Education: %s %s\n",e,f);





    return 0;
}