// LEETCODE-20. Valid Parantheses

#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        char a1='(' ,a2=')';
        char b1='[' , b2=']';
        char c1='{',c2='}';
        int l=s.size();
        if(l%2 !=0){ return false;}
        stack<char> st;

        for(int i=0;i<l;i++){
            char x=s[i];
            if(s[i]==a1 || s[i]==b1 || s[i]==c1){
                st.push(s[i]);
            }
            else if(s[i]==a2 || s[i]==b2 || s[i]==c2){
                if (st.empty()) return false;
                if (st.top()==a1 and x==a2){
                    st.pop();
                }
                else if(st.top()==b1 and x==b2){
                    st.pop();
                }
                else if(st.top()==c1 and x==c2){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main(){
    Solution solver;
    cout<<"for string '()[]{}' :"<<solver.isValid("()[]{}")<<endl;
}