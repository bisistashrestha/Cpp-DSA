#include<iostream>
using namespace std;

int main() {
    char c='A';
    for (int i=1;i<5;i++){
        for (int j=0;j<i;j++){
            cout << c++;
        }
        cout << "\n";
    }

    return 0;
}