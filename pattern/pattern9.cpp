#include<iostream>

using namespace std;



void PrintPattern(int n){
   int sp=(n/2);
   int nu=1;
   int it=1;
    for(int i=1; i<=n; i++){
    
        for(int k=1; k<=sp; k++){
            cout <<  " " ;
            
        }
        
       
        int num=nu;
        
        for(int j=1; j<=it; j++){
            cout << num << " " ;
            if(j<=int((2*i-1)/2)){
                num++;
            }else{
                num--;
            }
        }
        cout << endl;
         if(i<=(n/2)){
            sp--;
            nu++;
            it+=2;
        }else{
            sp++;
            nu--;
            it-=2;
        }
    }
   
}

int main(){
    int n;
    cout << "Enter the no." << endl;
    
    cin >> n;
    PrintPattern(n);
}

// Enter the no.
// 5
//   1 
//  2 3 2 
// 3 4 5 4 3 
//  2 3 4 
//   1 
