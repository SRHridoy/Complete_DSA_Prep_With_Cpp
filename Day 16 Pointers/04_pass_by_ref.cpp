#include<bits/stdc++.h>
using namespace std;

void changeA(int* ptr){
    *ptr = 20;
}

void changeAlias(int &b){
    b = 100;
}

int main(){

    int a = 10;
    cout << "Inside main a : " << a << endl; 
    changeA(&a);
    cout << "After changing main a : " << a << endl; 
    changeAlias(a);
    cout << "After changing main a : " << a << endl; 
}