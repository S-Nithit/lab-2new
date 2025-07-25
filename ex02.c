#include <stdio.h>

int main(){
    int minutes = 0;
    int hour = 0;
    int cal = 0;
    printf("Enter total minutes: ");
    scanf("%d",&minutes);
    hour = minutes/60;
    cal = minutes%60;
    printf("%d minute is %d(s) and %d minutes\n",minutes,hour,cal);
    

    return 0;
}