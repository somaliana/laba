#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
    int x;
    scanf("%d", &x);
    float subres = sqrt(x);
    int subres1 = sqrt(x);
    
    printf("%s", (subres==subres1) ? "yes" : "no");

}