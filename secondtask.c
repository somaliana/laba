#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
    double x,y,z,w;
    scanf("%lf %lf %lf %lf",&x,&y,&z,&w);
    double result = sqrt(pow((x-z),2) + pow((y-w),2)); 
    printf("%lf \n", result);


}