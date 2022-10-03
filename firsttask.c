#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
    double x;
    scanf("%lf",&x);
    double result = 10*sin(x) + abs(pow(x,4)-pow(x,5));
    printf("%lf \n",result);




    return 0;

}