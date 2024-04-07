#include<iostream>
using namespace std;

void reverseArray(int arr[], int s, int e){
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

void rotateArray(int arr[], int size, int k){
    if(k>size){
        k=k%size;
    }
    if(k==0){
        return;
    }
    int s=0;
    int e=size-k-1;
    reverseArray(arr, s,e);
    
    s=size-k;
    e=size-1;
    reverseArray(arr, s,e);
    
    s=0;
    e=size-1;
    reverseArray(arr, s,e);
    return;
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int val=3;
    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    rotateArray(arr,8,val);
    
    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
}