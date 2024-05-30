#include <iostream>
#include <string>

using namespace std;

main() {
    int a;
    int b;
    int answer;
    string operations;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator: ";
    cin >> operations;
    cout << "Enter second number: ";
    cin >> b;

    if (operations == "+") {
        answer = a + b;
    } else if (operations == "-") {
        answer = a - b;
    } else if (operations == "*") {
        answer = a * b;
    } else if (operations == "/") {
        answer = a / b;
    }

    cout << "Answer is: " << to_string(answer);

    return 0;
}