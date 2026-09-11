#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(int);
    int leftmax[n],rightmax[n];
    leftmax[0]=0;
    rightmax[n-1]=0;
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],arr[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],arr[i+1]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int currSum=min(leftmax[i],rightmax[i])-arr[i];
        if (currSum>0){
            sum+=(min(leftmax[i],rightmax[i])-arr[i]);
        }
    }
    cout<<sum<<endl;
}