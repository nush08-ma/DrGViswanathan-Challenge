//leetcode-121.Buy and sell stock

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0] , mprofit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bestbuy){
                mprofit=max(mprofit,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return mprofit;
    }
};

int main(){
    Solution solver;
    vector<int> sample={7,1,5,3,6,4};
    cout<<solver.maxProfit(sample);
}