#include <iostream>
using namespace std;

bool isPrime(int num);
int primorial(int n);

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << primorial(n);
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int primorial(int n) {
    int count = 0;
    int result = 1;
    int num = 2; 

    while (count < n) { 
        if (isPrime(num)) {
            result *= num;
            count++;
        }
        num++;
    }

    return result;
}
