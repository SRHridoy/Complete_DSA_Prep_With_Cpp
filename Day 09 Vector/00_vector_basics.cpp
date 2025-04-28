#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1, 2, 4};
    vector<int> v2;
    vector<int> v3(3, 0);
    vector<int> vc = {'a', 'b', 'c', 'd'};

    for(int v:v1){
        cout << v << endl;
    }

    cout << endl;

    for(char val: vc){
        cout << val << endl;
    }

    cout << "size : " << v2.size() << endl;

    v2.push_back(5);
    cout << "after push back size : " << v2.size() << endl;
}