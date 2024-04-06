#include<iostream>
#include <vector>
using namespace std;

void decimalToOther(int n,int k){
    vector<int> ans;
    while(n!=0){
       
        ans.push_back(n%k);
        n/=k;
        
    }
    for(int i=ans.size(); i>=0; i--){
        cout << ans[i] ;
    }
}



int main(){
    int n;
    cout << "Enter the number"<< endl;
    cin >> n;
    int c;
    cout << "Enter the convesion base" << endl;
    cin >> c;
    decimalToOther(n,c);
}