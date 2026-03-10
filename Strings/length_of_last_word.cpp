#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0, temp = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                count = 0;
            else
                count++;

            if (count != 0)
                temp = count;
        }

        return temp;
    }
};