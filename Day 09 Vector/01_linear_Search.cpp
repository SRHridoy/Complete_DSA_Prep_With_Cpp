#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void linearSearch(vector<int>v,int n){
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==n){
            cout << "Found at " << i << endl;
            return; 
        }
    }
    cout << "Not Found!" << endl;
    
}

int main(){
    optimize();

    vector<int>v = {4,2,1,2,3,4};
    linearSearch(v,1);
}
