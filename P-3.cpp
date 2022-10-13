//Lab7-3
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int first_digit(int n);
int last_digit(int n);
int digits(int n);

int main() {
    int firstdigit = 0;
    int numN = 0;
    int lastdigit = 0;
    int i;


    cout << "Enter number or Q to quit: ";
    int n;
    cin >> n;
    cout << endl;



    cout << "First digit: " << first_digit(n);
    cout << " Last digit: " << last_digit(n);
    cout << " Number of digits: " << digits(n);

    cout << endl;
}
int first_digit(int n) {
    //int firstdigit = 0;
    //int n;

    while (n > 0) {


        n /= 10;
        //cout << n << endl;
    }

    return n;
}
int last_digit(int n) {
    int firstdigit = 0;
    int numN = 0;
    int lastdigit = 0;
    int i;
    int n;

    lastdigit = n % 10;

    return lastdigit;
}

int digits(int n) {
    int firstdigit = 0;
    int numN = 0;
    int lastdigit = 0;
    int i;
    int n;
    while (n > 0) {
        firstdigit = n % 10;
        i = n % 10;
        numN++;
        n /= 10;
        //cout << i << endl;
    }

    return numN;
}
