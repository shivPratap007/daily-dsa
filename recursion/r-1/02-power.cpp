#include<iostream>
using namespace std;
int power(int n, int p){
    if(p<=1 ){
        return n;
    }
    int ans=power(n,p/2);
    int res=ans*ans;
    if(p%2!=0){
        res*=n;
    }
    return res;
}

int main(){
    int n;
    int p;
    cin >> n >> p;
    cout << power(n,p);
}