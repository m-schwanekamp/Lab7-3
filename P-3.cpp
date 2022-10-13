//Lab7-3
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int first_digit(int n);
int last_digit(int n);
int digits(int n);

int main() {
    int first_digit = 0;
    int numN = 0;
    int last_digit = 0;
    
    cout << "Enter number or Q to quit: ";
    int n;
    cin >> n;
    cout << endl;
    if (cin >> n) {
        numN++;
        if (numN == 1) {
            first_digit = n;
        }
        last_digit = n % 10;
   }
   else if (cin.fail()) return 0;
   
    cout << "First digit: " << first_digit;
    cout << " Last digit: " << last_digit;
    cout << " Number of digits: " << numN;
    cout << endl;
}