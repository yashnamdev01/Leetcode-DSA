#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums3;

        int m = nums1.size();
        int n = nums2.size();

        int i = 0, j = 0;

        // Merge both arrays
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                nums3.push_back(nums1[i]);
                i++;
            }
            else
            {
                nums3.push_back(nums2[j]);
                j++;
            }
        }

        // Remaining elements
        while (i < m)
        {
            nums3.push_back(nums1[i]);
            i++;
        }

        while (j < n)
        {
            nums3.push_back(nums2[j]);
            j++;
        }

        int l = nums3.size();
        int mid = l / 2;

        if (l % 2 == 0)
            return (nums3[mid] + nums3[mid - 1]) / 2.0;
        else
            return nums3[mid];
    }
};

int main()
{
    Solution obj;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    cout << obj.findMedianSortedArrays(nums1, nums2);

    return 0;
}