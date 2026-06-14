//CodeForces-4A Watermelon

#include<iostream>
using namespace std;

int validw(int w){
    if (w <= 2) return 0; 
    
    for(int i=1;i<=(w/2)+1;i++){
        if (i%2==0 && (w-i)%2==0){
            return 1;
        }
    }
    return 0;
}

int main(){
    int w;
    cin>>w; 
    if (validw(w)==1){
        cout<<"YES";
    }
    else if(validw(w)==0){
        cout<<"NO";
    }
}
