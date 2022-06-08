#include "lsa.hpp"

int linear_search(int array[], int num, int size)
{
    if (size ==  -1)
    {
        return -1;
    }
    else if (array[size] == num)
    {
        return size;
    }
    else
    {
        return linear_search(array, num, --size);
    }
}