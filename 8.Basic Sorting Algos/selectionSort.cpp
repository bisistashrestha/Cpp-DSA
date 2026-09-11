#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
}