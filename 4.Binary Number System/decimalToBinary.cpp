#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int d=56;
    int n,c=0;
    int b=0;
    while(d!=0){
        n=d%2;
        b+=pow(10,c)*n;
        c++;
        d/=2;
    }
    cout<<b;

    return 0;
}