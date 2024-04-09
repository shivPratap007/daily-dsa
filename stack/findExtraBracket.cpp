#include<iostream>
#include<stack>
#include<string>
using namespace std;

// ((a+b)+(c+d)) => correct expression no extra bracket
// (a+b)+( => incorrect expression extra bracket

void StartPopping(stack<char> &myStack){
    while(!myStack.empty() && myStack.top()!=')'){
        myStack.pop();
    }
    if(!myStack.empty()){
        myStack.pop();
    }
}

int main(){
    stack<char> myStack;
    string exp;
    cout << "Enter the expression" << endl;
    cin >> exp;
    for(int i=0; i<exp.size(); i++){
        if(!myStack.empty() && exp[i]==')'){
            StartPopping(myStack);
        }else if(exp[i]==' '){
            continue;
        }else{
            myStack.push(exp[i]);
        }
    }
    
    
    
    if(myStack.empty()){
        cout << "Expression is correct";
    }else{
        cout << "Expression is not correct";
    }
}