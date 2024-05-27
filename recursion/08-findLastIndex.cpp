#include<iostream>
#include<vector>
using namespace std;

int findLastIndex(vector<int> arr, int i,int x){
    if(i==arr.size()){
        return -1;
    }
    int ans=findLastIndex(arr,i+1,x);
    if(ans==-1){
        if(arr[i]==x){
            ans=i;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={9,8,10,8};
    int ans=findLastIndex(arr,0,8);
    cout << ans;
    
}