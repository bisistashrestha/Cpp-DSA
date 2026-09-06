#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int sum=0;
    int c=0;
    int b=1010;
    while (b>0){
        if (b%10==1){
            sum+=pow(2,c);
        }
        c++;
        b/=10;
    }
    cout<<sum;
    return 0;
}