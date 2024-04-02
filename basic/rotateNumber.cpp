#include<iostream>
#include<cmath>

using namespace std;

int CountNumber(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int findRotatedNumber(int k,int n, int count){
    if(k==0){
        return n;
    }
    while(k!=0){
        k--;
        int num=n%10;
        n=n/10;
        int shiftedFirst=num*(pow(10,count-1));
        n=shiftedFirst+n;
    }
    return n;
}

int main(){
    int n;
    int k;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Enter the times of rotation" << endl;
    cin >> k;
    int count=CountNumber(n);
    if(k>=n){
        k=k%n;
    }
    int rotatedNumber=findRotatedNumber(k,n,count);
    cout << rotatedNumber;
}

// #include<iostream>
// #include<cmath>

// using namespace std;

// int CountNumber(int n){
//     int count=0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     return count;
// }

// int findRotatedNumber(int k,int n, int count){
//     if(k==0){
//         return n;
//     }
    
//     int newNum;
//     int shiftedFirst=n%(int)(pow(10,k));
//     cout << shiftedFirst << endl;
//     n=n/(int)(pow(10,k));
//     cout << n << endl ;
//     newNum=shiftedFirst*(int)(pow(10,count-k));
//     cout << newNum << endl;
//     newNum+=n;
//     cout << newNum << endl;
//     return newNum;
// }

// int main(){
//     int n;
//     int k;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     cout << "Enter the times of rotation" << endl;
//     cin >> k;
//     int count=CountNumber(n);
//     if(k>=n){
//         k=k%n;
//     }
//     int rotatedNumber=findRotatedNumber(k,n,count);
//     cout << rotatedNumber;
// }