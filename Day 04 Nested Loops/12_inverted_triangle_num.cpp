#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

/*

1111
 222
  33
   4

*/

int main(){
    optimize();

    int n = 4;
    for (int i = 0; i < n; i++)
    {
    
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < n-i; j++)
        {
            cout << i+1;
        }
        
        cout << endl;
        
    }
    
}
