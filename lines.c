#include <stdio.h>

float total = 0.0;
short count = 0;
float tax_percent = 8;

float add_with_tax(float f) {
  float tax_rate = 1 + tax_percent / 100 * f;
  total = total + (f * tax_rate);
  count = count + 1;
  return total;
}

int main() {
  float val;
  printf("Cena dania: ");
  while (scanf("%f", &val) == 1) {
    printf("Dotychczasowa suma zamówienia: %.2f\n", add_with_tax(val));
    printf("Cena dania: ");
  }
  printf("\nSumaryczna wartość zamówienia: %.2f\n", total);
  printf("Liczba zamówionych dań: %hi\n", count);
}