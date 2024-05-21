#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int firstOccourance(vector<int> arr, int i,int n){
   if(i==arr.size()-1){
       return -1;
   }
   int res=firstOccourance(arr,i+1,n);
   if(arr[i]==n) res=i;
   return res;
   
}

int main(){
    vector<int> arr={2,3,9,8,7,6,4,12,7,3,8};
    cout << firstOccourance(arr,0,8);
}