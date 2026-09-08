#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int *ptr=&a[0];
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}