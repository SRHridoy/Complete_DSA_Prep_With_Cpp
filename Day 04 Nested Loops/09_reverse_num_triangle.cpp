#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

/*
1 
2 1 
3 2 1
4 3 2 1
*/

int main(){
    optimize();

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout << j << " ";
        }cout << endl;
        
    }
    
}
