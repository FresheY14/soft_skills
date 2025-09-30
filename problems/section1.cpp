#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {j, i};
            }
        }
    }
    return {}; // No solution found
}

void testCase(int, vector<int>, vector<int>);

int main()
{
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = twoSum(nums1, target1);
    testCase(1, result1, {0, 1});

    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = twoSum(nums2, target2);
    testCase(2, result2, {1, 2});

    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = twoSum(nums3, target3);
    testCase(3, result3, {0, 1});

    vector<int> nums4 = {1, 2, 3, 4, 5};
    int target4 = 10;
    vector<int> result4 = twoSum(nums4, target4);
    testCase(4, result4, {3, 4});

    return 0;
}

void testCase(int caseNum, vector<int> result, vector<int> expected)
{
    if (result == expected)
    {
        cout << "Test case " << caseNum << " PASSED" << endl;
    }
    else
    {
        cout << "Test case " << caseNum << " FAILED: คำตอบที่คาดไว้คือ {"
             << expected[0] << ", " << expected[1] << "} แต่ได้";
        if (result.empty())
        {
            cout << " {}" << endl;
        }
        else
        {
            cout << "{" << result[0] << ", " << result[1] << "}" << endl;
        }
    }
}