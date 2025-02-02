#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr--;
    cout << ptr << endl;
    ptr+=2;
    cout << ptr << endl;

    //ptr1+ptr2 not possible

    //Substract possile
    int* ptr1 = ptr+3;
    cout << ptr-ptr1 << endl;

    int* ptr2;
    int* ptr3;
    cout << ptr2 << " " << ptr3 << endl;
    cout << (ptr2<ptr3) << endl;



}