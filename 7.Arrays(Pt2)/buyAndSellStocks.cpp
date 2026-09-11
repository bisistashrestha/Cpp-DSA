#include<iostream>
using namespace std;

int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    int max_prof=0;
    for(int i=n-1;i>=0;i--){
        int min_val=INT_MAX;
        for(int j=0;j<i;j++){
            min_val=min(min_val,arr[j]);
        }
        max_prof=max(max_prof,(arr[i]-min_val));
    }
    cout<<max_prof<<endl;
}