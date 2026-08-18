#include <ctype.h>
#include <stdio.h>

int string2num (char *s, int base) {
  int a = 0;
  for (; *s; s++) {
    char c = tolower(*s);
    int valor;

    if (c >= '0' && c <= '9') {
      valor = c - '0';
    } else if (c >= 'a' && c <= 'z') {
      valor = c - 'a' + 10;
    } else {
      continue;
    }

    if (valor < base) {
      a = a * base + valor;
    }
  }
  return a;
}

int main (void) {
  printf("%d\n", string2num("1a", 16));
  printf("%d\n", string2num("a09b", 16));
  printf("%d\n", string2num("z09b", 36));
  return 0;
}
