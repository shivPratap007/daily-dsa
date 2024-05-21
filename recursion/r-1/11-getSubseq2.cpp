#include <iostream>
#include <string>
using namespace std;

void getSubsequence(string str, string ans) {
    if (str.size() == 0) {
        cout << ans << " ";
        return;
    }
   
    getSubsequence(str.substr(1), ans + str[0]); 
    getSubsequence(str.substr(1), ans);   
}

int main() {
    string str = "abc";
    getSubsequence(str, "");
    return 0;
}
