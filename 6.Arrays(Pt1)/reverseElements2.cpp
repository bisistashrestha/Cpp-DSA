#include<iostream>
using namespace std;

//Two Pointer approach
int main(){
    int i=0,j;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
    }
    for(int a=0;a<n;a++){
        cout<<arr[a]<<", ";
    }
}