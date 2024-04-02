#include<iostream>
using namespace std;

void primeFactors(int n){
    
    for(int i=2; i<=n; i++){
        while(n%i==0){
            n=n/i;
            cout << i << endl;
        }
        if(n==1){
            break;
        }
    }
}

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    primeFactors(n);
}