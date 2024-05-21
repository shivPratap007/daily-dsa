#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> getMaizePath(int sr, int dr, int sc, int dc){
    if( sr==dr && sc==dc){
        vector<string> ans={""};
        return ans;
    }
    vector<string> ans;
    vector<string> rows;
    vector<string> cols;
    vector<string> dia;
    if(sr<dr){
       rows= getMaizePath(sr+1,dr,sc,dc);
    }
    if(sc<dc){
        cols=getMaizePath(sr,dr,sc+1,dc);
    }
    if(sc<dc && sr<dr){
        dia=getMaizePath(sr+1,dr,sc+1,dc);
    }
    for(string s:rows){
        ans.push_back("r"+s);
    }
    for(string s:cols){
        ans.push_back("h"+s);
    }
    for(string s:dia){
        ans.push_back("d"+s);
    }
    
    return ans;
}

int main(){
    int sr=1;
    int dr=2;
    int sc=1;
    int dc=2;
    vector<string> ans=getMaizePath(sr,dr,sc,dc);
    for(string s: ans){
        cout << s << " ";
    }
}