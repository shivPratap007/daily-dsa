#include<iostream>
#include<vector>
using namespace std;

vector<int> findAllIndex(vector<int> arr,vector<int>&ans,int x,int i){
    if(i==arr.size()){
        return ans;
    }
    
    if(arr[i]==x){
        ans.push_back(i);
    }
    return findAllIndex(arr,ans,x,i+1);
}

int main(){
    vector<int>arr={9,8,10,8};
    vector<int>ans;
    vector<int> ret=findAllIndex(arr,ans,8,0);
    for(int a:ret){
        cout << a << endl;
    }
    
}