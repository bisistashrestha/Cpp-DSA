#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }, n=3, m=3, psum=0,ssum=0,sum=0, r=0, c=n-1;
    
    //O(n^2)
    /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                psum+=arr[i][j];
            }
            else if(i==r && j==c){
                ssum+=arr[i][j];
            }
        }
        r++;
        c--;
    }
    cout<<"Final Sum: "<<(psum+ssum)<<endl;*/

    //O(n)
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
        if(i!=n-i-1){
            sum+=arr[i][n-i-1];
        }
    }
    cout<<sum<<endl;
}