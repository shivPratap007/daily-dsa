#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> getSubstring(string str) {
    vector<string> substrings;
    for (int i = 0; i < str.size(); ++i) {
        for (int len = 1; len <= str.size() - i; ++len) {
            substrings.push_back(str.substr(i, len));
        }
    }
    return substrings;
}

int main() {
    string str = "abc";
    vector<string> ans = getSubstring(str);
    for (string s : ans) {
        cout << s << " ";
    }
    return 0;
}
