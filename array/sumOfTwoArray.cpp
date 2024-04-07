#include<iostream>
using namespace std;

int main(){
    int n1=3;
    int n2=2;
    int arr1[n1]={9,9,9};
    int arr2[n2]={2,8};
    int n3 = (n1 > n2) ? n1 : n2;
    int arr3[n3+1];
    int rem=0;
    for(int i=n1-1, j=n2-1, k=n3-1; i>=0 && j>=0 && k>=0; i--, j--, k--){
        int sum=rem;
      
        if(i>=0){
            sum+=arr1[i]; 
        }
        if(j>=0){
            sum+=arr2[j];
        }
        
        cout << sum << " ";
        rem=sum/10;
        sum=sum%10;
        
        arr3[k]=sum;
        cout << sum << " " << rem << endl;
    }
    arr3[n3]=rem;
    for(int i=0; i<n3; i++){
        cout << arr3[i]<< " ";
    }
    
}
