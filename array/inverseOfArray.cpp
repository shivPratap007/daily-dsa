#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,4,1,2,0};
    int arr2[5];
    for(int i=0; i<5; i++){
        arr2[arr[i]]=i;
    }
    for(int i=0; i<5; i++){
        cout << arr2[i] << " ";
    }
}