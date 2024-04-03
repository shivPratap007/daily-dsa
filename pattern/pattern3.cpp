#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0; i<n; i++){
        for(int k=0; k<i;k++){
            cout << " " ;
        }
        for(int j=n; j>i; j--){
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

// Enter the input 
// 7
// *******
//  ******
//   *****
//    ****
//     ***
//      **
//       *