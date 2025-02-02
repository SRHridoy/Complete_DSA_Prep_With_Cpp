#include <iostream>
using namespace std;

void printAllPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cnt++;
            cout << i << " ";
        } 
    }cout << endl;
    cout << "Total no. of Primes from 1 to n is " << cnt << endl;
}

int main()
{
    int n;
    cin >> n;
    printAllPrime(n);
}