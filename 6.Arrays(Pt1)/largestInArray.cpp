#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,6,4,1};
    int max=arr[0];
    for (int i=1;i<5;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max is: "<<max<<"\n";
    cout<<"Address of arr is: "<<arr<<"\n";
}