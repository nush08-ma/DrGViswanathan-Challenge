//Leetcode-1.Two Sum

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> ans;
        for (int i=0; i<nums.size();i++){
            int a=target-nums[i];
            if(ans.find(a)!=ans.end()){
                return {ans[a],i};
            }
            ans[nums[i]] = i;
        }
        return {};
    }
};

int main(){
    Solution solver;
    vector<int> input_nums = {2, 7, 11, 15};
    vector<int> res=solver.twoSum(input_nums, 9);
    cout << res[0] << ", " << res[1] << endl;
    return 0;
}
