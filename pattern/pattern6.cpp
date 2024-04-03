#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i==j) &&(i==(int(n/2)+1))){
                cout << "*";
            }
            else if((i==j) || ((i+j)==n+1)){
                cout << "*";
            }else{
                cout << " ";
            }
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
// *     *
//  *   * 
//   * *  
//    *   
//   * *  
//  *   * 
// *     *