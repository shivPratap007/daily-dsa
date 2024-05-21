#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minOfArray(vector<int> arr, int i){
   if(i==arr.size()){
       return INT_MIN;
   }
   int res=minOfArray( arr, i+1);
   if(arr[i]>res) res=arr[i];
   return res;
}

int main(){
    vector<int> arr={1,25,3,4,5};
    cout << minOfArray(arr,0);
}