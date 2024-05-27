#include <iostream>
#include <string>
#include <stack>
#include <vector>

// 9
// 2 5 9 3 1 12 6 8 7

// if there is any number present on the left which is greater than the current no. then print the difference between them otherwise just print that no. only
// 2 5 9 6 2 12 6 4 1 

using namespace std;

void stockSpan(vector<int> arr) {
    stack<int> myStack;
    vector<int> result(arr.size());

    for(int i=0; i<arr.size(); i++){
        if(myStack.empty()){
            myStack.push(arr[i]);
            result[i]=arr[i];
        }else{
            while(!myStack.empty() && myStack.top()<arr[i]){
                myStack.pop();
            }
            if(myStack.empty()){
                result[i]=arr[i];
                myStack.push(arr[i]);
            }else{
                result[i]=myStack.top()-arr[i];
                myStack.push(arr[i]);
            }
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    stockSpan(arr);

    return 0;
}
