#include<iostream>
using namespace std;

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            max_sum=max(max_sum,sum);
        }
    }
    cout<<"Max_Sum is "<<max_sum;
}