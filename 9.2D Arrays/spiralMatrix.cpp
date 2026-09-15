#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n=3,m=4;

    int srow=0,scol=0,erow=n-1,ecol=m-1;
    while(srow<=erow && scol<=ecol){
        for(int i=scol;i<=ecol;i++){
            cout<<arr[srow][i]<<" ";
        }
        for(int i=srow+1;i<=erow;i++){
            cout<<arr[i][ecol]<<" ";
        }
        for(int i=ecol-1;i>=scol;i--){
            if(srow==erow) break;
            cout<<arr[erow][i]<<" ";
        }
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol) break;
            cout<<arr[i][scol]<<" ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}