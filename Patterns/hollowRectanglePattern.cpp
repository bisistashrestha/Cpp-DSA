#include<iostream>
using namespace std;

int main(){
    int n=9;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++) {
            if (i==1 || j==1 || i== n || j==(n+1)){
                cout <<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

    return 0;
}