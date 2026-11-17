#include "mathgweh.h"
#include <stdio.h>
#define N 10

int main(void) {
    int arr[N] = {4, 5, 7, 3, 1, 2, 4, 1, 3, 10};
    
    float root = akar(16.0);
    printf("Akar kuadrat dari 16: %g\n", root);

    float rata = rata_rata(arr, N);
    printf("Rata-rata dari array: %g\n", rata);

    float max = mak(5.0, 10.0);
    printf("Nilai maksimum dari 5 dan 10: %g\n", max);

    float minimum = min(5.0, 10.0);
    printf("Nilai minimum dari 5 dan 10: %g\n", minimum);

    float pyth = phytagoras(3.0, 4.0);
    printf("Panjang sisi miring dari segitiga dengan sisi 3 dan 4: %g\n", pyth);

    int factorial = fac(5);
    printf("Faktorial dari 5: %d\n", factorial);

    return 0;

} 