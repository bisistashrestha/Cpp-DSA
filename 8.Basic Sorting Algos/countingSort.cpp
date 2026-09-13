#include<iostream>
#include <climits>
using namespace std;

int main() {
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    int freq[100000]={0};
    int min_val=INT_MAX,max_val=INT_MIN;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        min_val=min(min_val,arr[i]);
        max_val=max(max_val,arr[i]);
    }
    for(int i=min_val, j=0;i<=max_val;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
}