#include<iostream>
#include<string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start =0;
        int end=s.length()-1;
        while(start<end){
            while(start<end && !isalnum(static_cast<unsigned char>(s[start]))){
                start++;
            }
            while(start<end && !isalnum(static_cast<unsigned char>(s[end]))){
                end--;
            }
            if (tolower(static_cast<unsigned char>(s[start])) != tolower(static_cast<unsigned char>(s[end]))) {
                    return false;
            }
            end--;
            start++;
        }
        return true; 
    }
    
};

int main() {
    Solution solve;
    string test1="A man, a plan, a canal: Panama";

    cout << "Test 1 Result: " ;
    if(solve.isPalindrome(test1)==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    return 0;
}