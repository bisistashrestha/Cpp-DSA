#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,6,3,1};
    int find=3;
    int found=0;
    int index;
    for (int i=0;i<5;i++){
        if (arr[i]==find){
            found=1;
            index=i;
            break;
        }
    }
    if (found){
        cout<<find<<" found at "<<index<<"\n";
    } else {
        cout<<find<< "not found.";
    }
}