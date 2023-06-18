#include "src/lib.h"

namespace tsdb2 {

int Collatz(int x) {
  int c = 0;
  for (; x > 1; ++c) {
    if (x & 1) {
      x = 3 * x + 1;
    } else {
      x >>= 1;
    }
  }
  return c;
}

}  // namespace tsdb2
