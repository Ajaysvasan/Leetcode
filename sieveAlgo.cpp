#include<vector>
#include<iostream>

using namespace std;

void SieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true);

  for (int p = 2; p * p <= n; p++) {


        if (prime[p] == true) {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

main(){
    SieveOfEratosthenes(5);
}