#include <vector>

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      for (int i = 0; i < array.size(); i++) {
        if (array[i] % 2 != 0) {
          int smallestIndex = i;
          for (int j = i + 1; j < array.size(); j++) {
            if (array[j] % 2 != 0) {
              if (array[j] < array[smallestIndex]) {
                smallestIndex = j;
              }
            } 
          }
          if (smallestIndex != i) { // Eliminates unnecssary sorting
            int temp = array[i];
            array[i] = array[smallestIndex];
            array[smallestIndex] = temp;
            }
        }
      }
        return array;
    }
};