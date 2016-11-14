#include "my.h"

int my_pow(int base, int exp) {
  int i;
  int ans;

  ans = 1;
  for (i = 0; i < exp; i++) {
    ans *= base;
  }
  return ans;
}
