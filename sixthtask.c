#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
    int x;
    scanf("%d", &x);
    float subres = sqrt(x);
    int subres1 = sqrt(x);
    if (subres1 == subres) {
        printf("Yes");
    }
    else {
        printf("No");
    }

}