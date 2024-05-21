#include<iostream>
#include<vector>
using namespace std;
bool sortedORNot(vector<int> arr, int i){
    if(i==arr.size()-1){
        return true;
    }
    if(sortedORNot(arr,i+1)){
        if(arr[i]<arr[i+1]){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr={1,2,3,4};
    cout << sortedORNot(arr,0);
}