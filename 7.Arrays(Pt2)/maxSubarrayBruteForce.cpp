#include<iostream>
using namespace std;

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<", ";
                sum+=arr[k];
            }max_sum=max(sum,max_sum);
            cout<<"Sum = "<<sum<<endl;
        }
    }
    cout<<"Max_Sum is "<<max_sum;
}