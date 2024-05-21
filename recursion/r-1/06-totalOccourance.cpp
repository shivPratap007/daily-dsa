#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void totalOccourance(vector<int> arr, int i,int n,vector<int> &res){
   if(i==arr.size()){
       return ;
   }
   totalOccourance(arr,i+1,n,res);
   if(arr[i]==n){
       res.push_back(i);
   }
}

int main(){
    vector<int> arr={2,3,9,8,7,6,4,12,7,3,8};
    vector<int> res;
    totalOccourance(arr,0,8,res);
    for(int n: res){
        cout << n<< endl;
    }
    
}