#include "get_longest_string.hpp"

std::string get_longest_string(std::string array[], const int size)
{
    std::stack<std::string> longest_string;
    std::string str;
    std::string longer_string;
    int count, count_next = 0;

    for (int i = 0; i < size; i++)
    {
        str = array[i];
        longest_string.push(str);
    }

    while (longest_string.size() > 1)
    {
        std::string str_count = longest_string.top();
        count = str_count.size();
        longest_string.pop();
        std::string str_count_next = longest_string.top();
        count_next = str_count_next.size();

        if ((count <= count_next) && (longer_string.size() <= count_next))
        {
            longer_string = str_count_next;
        }
        else if (longer_string.size() <= count)
        {
            longer_string = str_count;
        }
    }

    return longer_string;
}