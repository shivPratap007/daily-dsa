#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector <string> getSubsequence(string str){
    if(str.size()==0){
        vector <string> ans={""};
        return ans;
    }
    vector <string> rans;
    vector<string> ret=getSubsequence(str.substr(1));
    for(string r: ret){
        rans.push_back(str[0]+r);
        rans.push_back(r);
    }
    
    return rans;
}


int main(){
    string str="abc";
    vector<string> ans=getSubsequence(str);
    for(string s:ans){
        cout << s << " ";
    }
}