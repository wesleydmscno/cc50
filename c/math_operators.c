// Number Types
// Math Operators
// Type Casting
// printf placeholders

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("Addiction ----\n");

  int a = get_int("a: ");
  int b = get_int("b: ");
  printf("%i\n", a + b);

  printf("Multiplication ----\n");

  long c = get_long("c: ");
  long d = get_long("d: ");
  printf("%li\n", c * d);

  printf("Division ----\n");

  int e = get_int("e: ");
  int f = get_int("f: ");
  printf("%f\n", (float) e / (float) f);
}
