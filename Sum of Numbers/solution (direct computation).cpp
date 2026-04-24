#include <algorithm>

int get_sum(int a, int b)
{
    int start = std::min(a, b);
    int end   = std::max(a, b);

    int count = end - start + 1;

    return count * (start + end) / 2;
}