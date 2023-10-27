#include <iostream>
#include <cmath>
using namespace std;

int fun(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return -1;
    }
}
string determineAgeWord(int age) {
                if (age % 10 == 1 && age % 100 != 11) {
                    return "year";
                }
                else if ((age % 10 == 2 || age % 10 == 3 || age % 10 == 4) && (age % 100 < 10 || age % 100 >= 20)) {
                    return "years";
                }
                else {
                    return "years";
                }
            }
void triangle(int a, int b, int c) {
    if (a + b > c && b + c > a && a + c > b) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int m;
    do {
        cout << "MENU" << endl << "1. Task 1" << endl << "2. Task 2" << endl << "3. Task 3" << endl << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> m;

        if (m == 1) {
            int n;
            cout << "Enter a number n: ";
            cin >> n;
            int result = fun(n);
            cout << "-1^" << n << " = " << pow(-1, n) * result << endl;
        }
        else if (m == 2) {
            int age = 21; 
            string result = determineAgeWord(age);
            cout << age << " " << result << endl;
                      
        }
        else if (m == 3) {
            int a, b, c;
            cout << "Enter sides of a triangle: ";
            cin >> a >> b >> c;
            triangle(a, b, c);
        }
        else if (m == 4) {
            cout << "Exiting the program." << endl;
        }
        else {
            cout << "Invalid choice. Please choose a valid option (1-4)." << endl;
        }
    } while (m != 4);

    return 0;
}
