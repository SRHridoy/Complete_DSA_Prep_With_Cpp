#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 10;
    int* ptr = &a;

    int** parPtr = &ptr;

    cout << &ptr << endl;
    cout << parPtr << endl;
    cout << *parPtr << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << **parPtr <<endl;
    cout << *(&a) << endl;
}