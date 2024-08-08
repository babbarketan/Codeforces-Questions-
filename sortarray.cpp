#include<bits/stdc++.h>
using namespace std;
/*
Example 1:
Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a mpuency of 1, '1' has a mpuency of 2, and '2' has a mpuency of 3.
*/
class Solution {
public:
    vector<int> mpuencySort(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
    }
};
int main(){
    vector<int> nums = {1,1,2,2,2,3};
    Solution ob;
    vector<int> result = ob.mpuencySort(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}