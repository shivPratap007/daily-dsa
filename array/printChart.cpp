#include<iostream>
#include<climits>
using namespace std;



int main(){
    int n;
    cout << "Enter the no."<< endl;
    cin >> n;
    int arr[n];
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        int val;
        cout << "Enter the no in array" << endl;
        cin>>val;
        if(val>max) {
            max = val;
        }
        arr[i]=val;
    }
    char ans[max][n];
    for(int i=max-1; i>=0; i--){
        for(int j=0; j<n; j++){
            if(arr[j]!=0){
                ans[i][j]='*';
                arr[j]--;
            }else{
                ans[i][j]=' ';
            }
        }
    }
    for(int i=0; i<max; i++){
        for(int j=0; j<n; j++){
           cout << ans[i][j] <<" ";
        }
        cout << endl;
    }
   
    
}
// Enter the no in array
// 12
// Enter the no in array
// 2
// Enter the no in array
// 3
// Enter the no in array
// 4
// Enter the no in array
// 5
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 