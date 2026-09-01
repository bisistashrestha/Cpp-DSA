#include<iostream>
using namespace std;

int fact(int n){
    int s=1;
    for(int i=n;i>1;i--){
        s=s*i;
    }
    return s;
}

int main(){
    int n;
    cout <<"Enter n: ";
    cin >> n;
    cout<< "Factorial of "<<n<<" is "<< fact(n);
}