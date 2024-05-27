#include<iostream>
#include<string>

using namespace std;

void printPermutation(string str, string ans){
    if(str.size()==0){
        cout << ans << " ";
        return;
    }
    for(int i=0; i<str.size(); i++){
        printPermutation(str.substr(0,i)+str.substr(i+1),ans+str[i]);
        
    }
}

int main(){
    printPermutation("abc"," ");
}