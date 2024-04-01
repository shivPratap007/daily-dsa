#include<iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n){
    if(n==0 || n==1){
        return false;
    }else if(n==2){
        return true;
    }else{
        for(int i=2; i<int(sqrt(n)); i++){ // if a number can divide square root of divident then it can divide the number too.
        // means we have to check upto square root only to reduce the time complexity
            if(n%i==0) return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    
    bool res=checkPrime(n);
    if(res){
        cout << "Prime";
    }else{
        cout << "Composite";
    }
}
