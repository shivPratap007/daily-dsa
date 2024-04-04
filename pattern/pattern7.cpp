#include<iostream>

using namespace std;
void PrintPattern(int n){
    int sp1=n/2;
    int sp2=-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sp1; j++){
            cout << " ";
        }
        cout << "*";
        for(int l=1; l<=sp2; l++ ){
            cout << " ";
        }
        if(i>1 && i<n){
            cout << "*";
        }
        
        cout << endl;
        if(i<=(n/2)){
            sp1--;
            sp2+=2;
        }else{
            sp1++;
            sp2-=2;
        }
        
    }
}

int main(){
    int n;
    cout << "Enter the no.";
    cin >> n;
    PrintPattern(n);
}

// Only works for n=5 till now
// Enter the no.5
// --*
// -*-*
// *---*
// -*-*
// --*