
//LEETCODE-13. Roman to Integer
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> l1 = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(l1[s[i]]>=l1[s[i+1]]){
                ans+=l1[s[i]];
            }
            else{
                ans-=l1[s[i]];
            }
        }
        return ans;
    }
};

int main(){
    Solution solver;
    int result=solver.romanToInt("III");
    cout<<"III converted into integer is :"<<result<<endl;
}