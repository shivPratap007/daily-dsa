#include<iostream>
using namespace std;

int main(){
    int arr[10]={10,10,10,20,20,30,30,30,40,40};
    int s=0;
    int e=10;
    int val=40;
    int ans=0;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==val){
            ans=m;
            s=m+1;
        }else if(arr[m]<val){
            s=m+1;
        }else if(arr[m]>val){
            e=m-1;
        }
    }
    cout << ans << endl;
    
}