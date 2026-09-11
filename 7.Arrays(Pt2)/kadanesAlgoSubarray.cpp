#include<iostream>
using namespace std;

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    int max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        max_sum=max(max_sum,sum);
        if (sum<0) sum=0;
    }
    cout<<"Max_Sum is "<<max_sum;
}