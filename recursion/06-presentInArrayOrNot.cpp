#include<iostream>
#include<vector>

using namespace std;

bool findInArray(vector<int> arr,int i,int x){
    if(i==arr.size()){
        return false;
    }
    if(arr[i]==x){
        return true;
    }
    return findInArray(arr,i+1,x);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr={9,8,10};
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    int x;
    cin >> x;
    bool ans=findInArray(arr,0,8);
    cout << endl;
    cout << ans;
}