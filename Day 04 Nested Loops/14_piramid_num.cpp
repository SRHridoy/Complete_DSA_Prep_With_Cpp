#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

/*
   1
  121
 12321
1234321
*/

int main(){
    optimize();

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i+1 ; j++)
        {
            cout << j+1;   
        }
        for (int k = i; k > 0; k--)
        {
            cout << k;
        }
        cout << endl;
        
    }
    
}
