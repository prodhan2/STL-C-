#include <iostream>

using namespace std;

bool isPrime(int n) {

    if (n <= 1) {

        return false;  // 1 and numbers less than 1 are not prime

    }

    for (int i = 2; i <= n/2; i++) {

        if (n % i == 0) {

            return false;  // n is divisible by i, so it's not prime

        }

    }

    return true;  // n is not divisible by any number, so it's prime

}

int main() {

    int num;

    cout << "Enter a positive integer: ";

    cin >> num;

    if (isPrime(num)) {

        cout << num << " is a prime number" << endl;

    } else {

        cout << num << " is not a prime number" << endl;

    }

    return 0;

}
