#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n==0 || n==1){
        return false;
    }else if(n==2){
        return true;
    }else{
        for(int i=2; i<n; i++){
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
