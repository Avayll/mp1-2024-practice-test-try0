// Задача 3. Найти максимум из вешественных чисел a и b
#include <math.h>

double max_of_two_numbers(double a, double b) {
  if (a > b) {
    return a;
  }
  else if (b > a) {
    return b;
  }
}
