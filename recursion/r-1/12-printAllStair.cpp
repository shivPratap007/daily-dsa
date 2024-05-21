#include <iostream>
#include <string>
using namespace std;
void stairPath(int n, string ans){
    if(n==0){
        cout << ans << endl;
        return;
    }
    
    if(n>-1){
        stairPath(n-1,"1"+ans);
        stairPath(n-2,"2"+ans);
        stairPath(n-3,"3"+ans);
    }
}
int main(){
    int n=3;
    stairPath(n,"");
}
