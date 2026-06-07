//LEETCODE 412. Fizz Buzz

#include<iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> arr(n);
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                arr[i-1]="FizzBuzz";
            }
            else if(i%3==0){
                arr[i-1]="Fizz";
            }
            else if(i%5==0){
                arr[i-1]="Buzz";
            }
            else{
                arr[i-1]=to_string(i);
            }
        }
        return arr;
    }
};

int main() {
    Solution solver;
    int testN = 15; 
    
    vector<string> result = solver.fizzBuzz(testN);
    
    cout << "FizzBuzz Output for n = " << testN << ":" << endl;
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}
