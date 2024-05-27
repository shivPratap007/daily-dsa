#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

void printRightNextBiggestElement(vector<int> arr) {
    stack<int> myStack;
    vector<int> result(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!myStack.empty() && myStack.top() <= arr[i]) {
            myStack.pop();
        }
        if (myStack.empty()) {
            result[i] = -1;
        } else {
            result[i] = myStack.top();
        }
        myStack.push(arr[i]);
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
    printRightNextBiggestElement(arr);

    return 0;
}
