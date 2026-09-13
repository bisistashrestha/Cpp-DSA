#include<iostream>
using namespace std;

int main(){
    int arr[]={'f','b','a','e','c','d'};
    int n=sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]<curr){
            int temp=arr[prev];
            arr[prev]=arr[prev+1];
            arr[prev+1]=temp;
            prev--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<(char)arr[i]<<", ";
    }
}