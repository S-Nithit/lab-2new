#include <stdio.h>

int main(){
    int a, b, c = 0;
    int max, min = 0;
   

    printf("Enter integer #1: ");
    scanf("%d",&a);
    printf("Enter integer #2: ");
    scanf("%d",&b);
    printf("Enter integer #3: ");
    scanf("%d",&c);
    printf("\nResults: ");
    if(a<b && a<c){
        printf("\nMinimum: %d\n",a);
    }
    if(b<a && b<c){
        printf("\nMinimum: %d\n",b);
    }
    if(c<a && c<b){
        printf("\nMinimum: %d\n",c);
    }
    
    
    if(a>b && a>c){
        printf("Maximum: %d\n",a);
    }
    if(b>a && b>c){
        printf("Maximum: %d\n",b);
    }
    if(c>a && c>b){
        printf("Maximum: %d\n",c);
    }
    
    float avg = (a+b+c)/3.0;
    printf("Sum: %d\n",a+b+c);
    printf("Average: %.2f\n",avg);

    return 0;
}