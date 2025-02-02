#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;
/*

1 
2 2 
3 3 3
4 4 4 4

*/
int main(){
    optimize();

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << i+1 << " ";
        }cout << endl;
        
    }
    
}
