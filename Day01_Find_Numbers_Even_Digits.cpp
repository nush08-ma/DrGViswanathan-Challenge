//LEETCODE 1295. Find Numbers with Even Number of Digits

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int val:nums){
            int c=0;
            while(val>0){
                val=val/10;
                c+=1;
            }
            if(c%2==0){
                count+=1;
            }
        }
        return count;
    }
};

int main() {
    Solution solver;
    vector<int> testNums = {12, 345, 2, 6, 7896};
    
    int result = solver.findNumbers(testNums);
    cout << "Total numbers with even digits: " << result << endl;
    
    return 0;
}