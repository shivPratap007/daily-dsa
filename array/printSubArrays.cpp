#include<iostream>
using namespace std;

void printVal(int arr[], int s, int e){
    for(int i=s; i<=e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

void subArray(int arr[], int size){
    int s=0;
    while(s<size){
        
        int e=s;
        while(e<size){
            printVal(arr,  s, e);
            e++;
        }
        s++;
    }
}

int main(){
    int arr[5]={3,4,1,2,0};
    subArray(arr, 5);
}