//Code forces -231A
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){
    int n; //no of problems
    cin>>n;
    int freq=0;
    for(int i=1;i<=n;i++){
        array<int,3> arr;
        for(int j=0;j<3;j++){
            cin>>arr[j];
        }
        if(count(arr.begin(),arr.end(),1)>1){
            freq+=1;
        }
    }
    cout<<freq<<endl;
}