// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<< "Enter a number";
    cin >> n;
    
    
    char arr[n][n];
    for(int i=0; i<n; i++){
        if(i==0 || i==n-1){
            for(int j=0; j<n; j++){
                arr[i][j]='*';
            }
        }else{
            for(int j=0; j<n; j++){
                if(i+j==n-1){
                    arr[i][j]='*';
                }else{
                    arr[i][j]=' ';
                }
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}