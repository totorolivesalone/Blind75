#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> TwoSum(vector<int> &numArray, int Sum)
    {
        unordered_map<int, int> numMap;
        for (int i = 0; i < numArray.size(); i++)
        {
            int complement = Sum - numArray[i];
            if (numMap.find(complement) != numMap.end())
            {
                return {numMap[complement], i};
            }
            numMap[numArray[i]] = i;
        }
        return {};
    }
};
int main()
{

    vector<int> numArray;
    int Sum;
    int num;
    cout << "Enter length of array:";
    cin >> num;
    int temp;
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        numArray.push_back(temp);
    }
    Solution sol1;
    cout << "Enter the sum value:";
    cin >> Sum;
    vector<int> indices = sol1.TwoSum(numArray, Sum);
    if (indices.size() == 0)
    {
        cout << " pair not found.";
    }
    else
    {
        cout << "found at " << indices[0] << " and " << indices[1];
    }

    return 0;
}