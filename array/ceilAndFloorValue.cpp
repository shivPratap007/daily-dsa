#include<iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int s=0;
    int e=10;
    int val=22;
    int ceil=0;
    int floor=0;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==val){
            ceil=arr[m];
            floor=arr[m];
            break;
        }else if(arr[m]<val){
            ceil=arr[m];
            s=m+1;
        }else{
            floor=arr[m];
            e=m-1;
        }
    }
    cout << ceil << "  " << floor ;
}