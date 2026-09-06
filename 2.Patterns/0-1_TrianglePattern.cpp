#include<iostream>
using namespace std;

int main() {
    int n=4;
    bool s=1;
    for (int i=1;i<=n;i++) {
        if (i%2==0){
            s=false;
        }else{
            s=true;
        }
        for(int j=1;j<=i;j++){
            cout<<(int)s;
            s=!s;
        }cout<<"\n";
    }

    return 0;
}