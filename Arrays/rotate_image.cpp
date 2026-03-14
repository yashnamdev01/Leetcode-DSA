#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        // Transpose the matrix
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                    swap(matrix[i][j], matrix[j][i]);
            }
            // Reverse each row
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main()
{
    Solution obj;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    obj.rotate(matrix);

    cout << "Rotated Matrix:\n";
    for (auto &row : matrix)
    {
        for (auto &val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}