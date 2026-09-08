#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    int i=0,j=n-1;
    int key=8;
    while(i<=j){
        int mid=(i+j)/2;
        if (arr[mid]==key){
            cout<<mid;
            break;
        } else if (arr[mid]>key){
            j=mid-1;
        } else {
            i=mid+1;
        }
    }
}