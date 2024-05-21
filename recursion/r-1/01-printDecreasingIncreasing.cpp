#include<iostream>
using namespace std;
void printDecreasingIncreasing(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    printDecreasingIncreasing(n-1);
    cout << n << " ";
}
int main(){
    int n;
    cin >> n;
    printDecreasingIncreasing(n);
}