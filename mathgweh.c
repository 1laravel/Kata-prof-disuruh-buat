#include "mathgweh.h"
#include <math.h>

float akar(float x){
 return sqrt(x);
}
float rata_rata(int arr[], int ukuran){
 int total = 0;
 for (int i = 0; i < ukuran; i++) {
  total += arr[i];
 }
 return (float)total / ukuran;
}
float mak(float a, float b) {
 return (a > b) ? a : b; 
} 
float min(float a, float b) {
 return (a < b) ? a : b;
}
float phytagoras(float a, float b){
 return sqrt(a * a + b * b);
}
int fac(int n) {
 if (n == 0)
 return 1;
 else
 return n * fac(n - 1);
}
 
