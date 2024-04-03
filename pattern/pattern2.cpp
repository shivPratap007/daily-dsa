#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i ;j--){
            cout << " ";
        }
        for(int k=0; k<=i; k++){
            cout << "*";
        }
        cout << endl;
    }
    
}

int main(){
    int n;
    cout << "Enter the input " << endl;
    cin >> n;
    printPattern(n);
}

// 5
// ----*
// ---**
// --***
// -****
// *****