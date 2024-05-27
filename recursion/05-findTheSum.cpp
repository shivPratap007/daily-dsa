#include<iostream>
#include<vector>

using namespace std;

int findSum(vector<int> arr,int i){
    if(i==arr.size()-1){
        return arr[i];
    }
    int ret=findSum(arr,i+1);
    return ret+arr[i];
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    int ans=findSum(arr,0);
    cout << endl;
    cout << ans;
}