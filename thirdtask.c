#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
    int x;
    scanf("%d",&x);
    int first = x/100;
    int second = (x/10)%10;
    int third = x%10;
    int summ = first + second + third;
    int multiply = first*second*third;
    printf("%d %d \n",summ,multiply);


    return 0;

}