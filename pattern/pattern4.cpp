#include<iostream>
using namespace std;

void printPattern(int n){
    int sp1=n/2;
    int star=1;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=sp1; j++){
            cout << " ";
        }
        for(int k=1; k<=star; k++){
            cout << "*";
        }
        
        
        cout << endl;
        if(i<=n/2){
            sp1--;
            star+=2;
        }else{
            sp1++;
            star-=2;
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
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
