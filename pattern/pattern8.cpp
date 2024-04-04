#include<iostream>

using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int calculatePascal(int n, int k){
    int ans=((factorial(n))/(factorial(k)*factorial(n-k)));
    return ans;
}

void PrintPattern(int n){
   for(int i=0; i<n; i++){
       for(int j=0; j<=i; j++){
           cout << calculatePascal(i,j)  << " ";
       }
       cout << endl;
   }
}

int main(){
    int n;
    cout << "Enter the no." << endl;
    
    cin >> n;
    PrintPattern(n);
}

// Enter the no.
// 5
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 