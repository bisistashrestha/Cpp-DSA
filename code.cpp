#include<iostream>
using namespace std;

int main() {
    float pencil,pen,eraser;
    cout << "Enter cost of pencil pen and eraser: \n";
    cin >> pencil >> pen >> eraser;
    float sum=pencil+pen+eraser;
    double total=sum+(0.18*sum);
    cout<<"Sum is "<<sum<<" and Total Bill with 18% GST is "<<total;
    return 0;
}