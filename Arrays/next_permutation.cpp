#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int i, j;

        for (i = n - 1; i > 0; i--)
        {
            if (nums[i - 1] < nums[i])
            {
                break;
            }
        }

        if (i > 0)
        {
            j = n - 1;
            while (nums[j] <= nums[i - 1])
            {
                j--;
            }
            swap(nums[j], nums[i - 1]);
        }

        reverse(nums.begin() + i, nums.end());
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 3};

    obj.nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}