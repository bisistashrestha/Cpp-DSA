#include<iostream>
using namespace std;

void callByValue(int a){
    a=20;
    cout<<"Call by Value: "<<20<<"\n";
}

void callByReference(int *a){
    *a=30;
    cout<<"Call By Reference: "<<*a<<"\n";
}

int main(){
    int a=10;
    cout<<"Initial value of a: "<<a<<"\n";
    callByValue(a);
    callByReference(&a);
    cout<<"Final value of a: "<<a;
    return 0;
}