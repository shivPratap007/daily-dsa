#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> getMaizePath(int sr, int dr, int sc, int dc) {
    if (sr == dr && sc == dc) {
        vector<string> ans = {""};
        return ans;
    }
    vector<string> ans;
    
    for (int r = 1; r <= dr - sr; r++) {
        vector<string> rows = getMaizePath(sr + r, dr, sc, dc);
        for (string ro : rows) {
            ans.push_back("r" + to_string(r) + ro);
        }
    }
    for (int c = 1; c <= dc - sc; c++) {
        vector<string> cols = getMaizePath(sr, dr, sc + c, dc);
        for (string co : cols) {
            ans.push_back("c" + to_string(c) + co);
        }
    }
    for (int d = 1; d <= dr - sr && d <= dc - sc; d++) {
        vector<string> dia = getMaizePath(sr + d, dr, sc + d, dc);
        for (string di : dia) {
            ans.push_back("d" + to_string(d) + di);
        }
    }
    return ans;
}

int main() {
    int sr = 1;
    int dr = 4;
    int sc = 1;
    int dc = 4;
    vector<string> ans = getMaizePath(sr, dr, sc, dc);
    for (string s : ans) {
        cout << s << " ";
    }
    return 0;
}



#include <iostream>
#include <vector>
#include <string>
using namespace std;

void getMaizePath(int sr, int dr, int sc, int dc,string ans) {
    if (sr == dr && sc == dc) {
        cout << ans << " ";
        return;
    }
    
    
    for (int r = 1; r <= dr - sr; r++) {
        getMaizePath(sr + r, dr, sc, dc, ans+"h"+to_string(r));
        
    }
    for (int c = 1; c <= dc - sc; c++) {
        getMaizePath(sr, dr, sc + c, dc,ans+"v"+to_string(c));
        
    }
    for (int d = 1; d <= dr - sr && d <= dc - sc; d++) {
        getMaizePath(sr + d,dr,sc + d,dc,ans+"d"+to_string(d));
       
    }
   
}

int main() {
    int sr = 1;
    int dr = 4;
    int sc = 1;
    int dc = 4;
    getMaizePath(sr, dr, sc, dc,"");
    
}

