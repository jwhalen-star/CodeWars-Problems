int get_sum(int a, int b) {
  int sum = 0;
  if (a < b) {
    int iterations = b - a + 1;
    for (int i = 0; i < iterations; i++) {
      sum += b;
      b -= 1;
    }
  } else if (b < a) {
    int iterations = a - b + 1;
      for (int i = 0; i < iterations; i++) {
        sum += a;
        a -= 1;
      }
  } else {
      sum = a;
    } 
  return sum;
}