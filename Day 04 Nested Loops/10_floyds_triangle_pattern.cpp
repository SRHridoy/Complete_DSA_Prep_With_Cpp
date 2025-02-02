#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

/*

1 
2 3 
4 5 6 
7 8 9 10 

*/

int main(){
    optimize();

    int n = 4;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << cnt++ << " ";
        }cout << endl;
        
    }
    
}
