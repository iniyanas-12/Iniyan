#include <stdio.h>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return b - a; }
int mul(int a, int b) { return a * b; }
float div(int a, int b) { return b != 0 ? (float)a / b : 0; }
int main() {
   printf("Sum: %d\n", add(3, 4));
   printf("Subtraction: %d\n", sub(4, 3));
   printf("Multiplication: %d\n", mul(3, 4));
   printf("Division: %.2f\n", div(3, 4));
   return 0;
}
