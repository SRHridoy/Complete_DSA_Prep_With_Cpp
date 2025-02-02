#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void reverse(vector<int>&v){
    int start = 0, end = v.size()-1;
    while (start<end)
    {
        swap(v[start++],v[end--]);
    }
}

int main(){
    optimize();

    vector<int>v = {2,1,3,4,1,52};
    reverse(v);
    for(auto val:v){
        cout << val << " ";
    }
}
