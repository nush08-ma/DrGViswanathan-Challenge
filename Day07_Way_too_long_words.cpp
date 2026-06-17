//Codeforces- 71A. Way too long words


#include<iostream>
#include<string>
using namespace std;

int main(){ 
    int n; 
    cin>>n; 
    for(int i=1;i<=n;i++){ 
        string word; 
        cin>>word; 
        if(word.size()>10){ 
            string s=""; 
            s+=word[0]; 
            s+=to_string(word.size()-2);
            s+=word[word.size()-1]; 
            cout<<s<<endl; 
        } 
        else{ 
            cout<<word<<endl; 
        } 
    }
}