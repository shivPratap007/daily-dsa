#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s!=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

int main(){
    int arr[4]={1,2,3,4};
    reverseArray(arr,5);
    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }
}