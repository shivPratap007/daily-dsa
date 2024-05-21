#include<iostream>
using namespace std;
void printNO(int n,int i){
    if(i==n+1){
        return;
    }
    cout << i << " " ;
    printNO(n,i+1);
}

int main(){
    int n;
    cin >> n;
    printNO(n,1);
}