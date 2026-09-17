#include<iostream>
using namespace std;

int main(){
    int mat[4][4]={
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int n=4,m=4,r=0,c=n-1;
    int key=32,found=0;
    int start=mat[r][c];
    while(r<n && c>=0){
        int cell=mat[r][c];
        if(cell==key) {
            found=1;
            cout<<"Found at: "<<r<<","<<c<<": "<<cell<<endl;
            break;
        }
        else if (cell>key) c--;
        else if(cell<key) r++;
    }
    if(!found){
        cout<<"Not Found"<<endl;
    }
}