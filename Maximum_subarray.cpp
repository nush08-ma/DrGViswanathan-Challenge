//LEETCODE-53
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> ans;
        int sum=0, max_sum=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            max_sum=max(sum,max_sum);
            if(sum<0){
                sum=0;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        return max_sum;
    }
};

int main(){
    Solution s;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int ans=s.maxSubArray(nums);
    cout<<"The subarray -2,1,-3,4,-1,2,1,-5,4 has the largest sum "<<ans<<endl;
}