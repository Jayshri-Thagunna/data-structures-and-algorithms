#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    // Base cases
    if (n <= 2) 
        return (n == 2) ? true : false;
    if (n % i == 0) 
        return false;
    if (i * i > n) 
        return true;

    // Recursive call
    return isPrime(n, i + 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
