#include<iostream>
using namespace std;

void printPattern(int n){
    int m=n+3;
    int st=n-2;
    int sp=m-(2*st);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=st; j++){
            cout << "*";
        }
        for(int k=1; k<=sp; k++){
            cout << " ";
        }
        for(int l=1; l<=st; l++){
            cout << "*";
        }
        cout << endl;
        if(i<=n/2){
            sp+=2;
            st--;
        }else{
            sp-=2;
            st++;
        }
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
// **********
// ****  ****
// ***    ***
// **      **
// ***    ***
// ****  ****
// **********