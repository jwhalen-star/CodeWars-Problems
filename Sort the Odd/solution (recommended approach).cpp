#include <vector>
#include <algorithm>

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> odds;

        // 1. Extract odd numbers
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] % 2 != 0)
            {
                odds.push_back(array[i]);
            }
        }

        // 2. Sort the odd numbers
        std::sort(odds.begin(), odds.end());

        // 3. Reinsert sorted odds
        int j = 0;
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] % 2 != 0)
            {
                array[i] = odds[j];
                j++;
            }
        }

        return array;
    }
};