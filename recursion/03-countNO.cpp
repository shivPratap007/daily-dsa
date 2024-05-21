#include<iostream>
using namespace std;
int countNO(int n,int count){
    if(n==0){
        return count;
    }
    count++;
    n=n/10;
    return countNO(n,count);
}

int main(){
    int n;
    cin >> n;
    cout << countNO(n,0);
}