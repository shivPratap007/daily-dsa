#include <iostream>
#include <string>
using namespace std;

void getMaize(int v, int fv, int h, int fh, string ans){
    if(v==fv && h==fh){
        cout << ans<< " ";
        return;
    }
    if(v<fv){
        getMaize(v+1,fv,h,fh,ans+"v");
    }
    if(h<fh){
        getMaize(v,fv,h+1,fh,ans+"h");
    }
}

int main(){
    int v=1;
    int fv=3;
    int h=1;
    int fh=3;
    getMaize(v,fv,h,fh,"");
}