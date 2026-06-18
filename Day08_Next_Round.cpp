//COdeforces -158A next round
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> scores(n);
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    int target=scores[k-1];
    int pass=0;
    for(int i=0;i<n;i++){
        if(scores[i]>=target && scores[i]>0){
            pass+=1;
        }
    }
    cout<<pass<<endl;
}
