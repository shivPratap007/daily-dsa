#include<iostream>
using namespace std;

int findHCF(int n1, int n2){
    int n=n2;
    while(n!=0){
        if(n1%n==0 && n2%n==0){
            return n;
        }
        n--;
    }
}

int main(){
    int n1;
    int n2;
    cout << "Enter first no." << endl;
    cin >> n1;
    cout << "Enter second no." << endl;
    cin >> n2;
    
    if(n1<n2){
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    
    int hcf=findHCF(n1,n2);
    cout << hcf << endl;
    int lcm=(n1*n2)/hcf;
    cout << "LCM IS: " << lcm << endl;
    // lcm=(n1*n2)/hcf
    
    
}
// #include<iostream>
// using namespace std;

// int findHCF(int n1, int n2){
    
//     while(n1%n2!=0){
//         int rem=n1%n2;
//         n2=n1;
//         n1=rem;
        
//     }
//     return n1;
// }

// int main(){
//     int n1;
//     int n2;
//     cout << "Enter first no." << endl;
//     cin >> n1;
//     cout << "Enter second no." << endl;
//     cin >> n2;
    
    
    
//     int hcf=findHCF(n1,n2);
//     cout << hcf << endl;
//     int lcm=(n1*n2)/hcf;
//     cout << "LCM IS: " << lcm << endl;
    
    
// }