#include "array_max.hpp"

int max = 0;
int array_max(int array[], int size)
{
    if (size < 0)
    {
        return -1;
    }

    else if (size == 0)
    {
        return max;
    }

    else if (array[size - 1] < array[size - 2] && array[size - 2] > max)
    {
        max = array[size - 2];
        --size;
        return array_max(array, size);
    }
    else
    {
        if (array[size - 1] > max)
        {
            max = array[size - 1];
        }
        --size;
        return array_max(array, size);
    }
}