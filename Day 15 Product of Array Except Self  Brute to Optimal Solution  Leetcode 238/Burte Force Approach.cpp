#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int mul = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
                mul = mul * nums[j];
        }
        ans.push_back(mul);
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