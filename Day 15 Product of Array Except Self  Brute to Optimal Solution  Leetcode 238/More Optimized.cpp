#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans(nums.size(), 1);

    // Prefix Product :
    int leftProd = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        leftProd = ans[i - 1] * nums[i - 1];
        ans[i] = leftProd;
    }

    // Suffix Product:
    int rightProd = 1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        rightProd *= nums[i + 1];
        ans[i] *= rightProd;
    }
    return ans;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);

    for (auto val : ans)
        cout << val << " ";
}