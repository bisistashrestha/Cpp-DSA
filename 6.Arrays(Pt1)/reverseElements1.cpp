#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    int cp[n];
    for(int i=0;i<n;i++){
        int ele=arr[i];
        cp[n-i-1]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<cp[i]<<"\n";
    }
}