#include<iostream>
using namespace std;

int main(){
    int arr[]={7,1,5,3,6,4};
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    int n=sizeof(arr)/sizeof(int);
    int max_prof=0;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],arr[i-1]);
    }

    for(int i=0;i<n;i++){
        int curr_prof=arr[i]-bestBuy[i];
        max_prof=max(max_prof,curr_prof);
    }
    cout<<max_prof<<endl;
}