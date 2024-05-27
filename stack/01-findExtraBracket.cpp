#include <iostream>
#include <string>
#include <stack>

// ((a+b)+(c+D)) => No un-necessary bracket => true
// (a+b)+((c+d)) => un-necessary bracket => false

using namespace std;

void findExtraBracket(string str,stack<char> &myStack){
    for(char s:str){
        if(s!=')'){
            myStack.push(s);
        }else{
            if(myStack.top()=='('){
                cout << false;
                return;
            }else{
                while(!myStack.empty() && myStack.top()!='('){
                    myStack.pop();
                }
                if(!myStack.empty() && myStack.top()=='('){
                    myStack.pop();
                }
            }
        }
    }
    cout << true;
}

int main() {
    string str;
    stack<char> myStack;
    cin >> str;
    
    findExtraBracket(str, myStack);

}
