#include<iostream>
#include<vector>
using namespace std;

int findFirstIndex(vector<int> arr, int i,int x){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==x){
        return i;
    }
    return findFirstIndex(arr,i+1,x);
}

int main(){
    vector<int>arr={9,8,10,8};
    int ans=findFirstIndex(arr,0,8);
    cout << ans;
    
}