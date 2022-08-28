#include <iostream>
using namespace std;

int sum (int a, int b) {
    int sum = a + b;
    return sum;
}

int main () {
    int a, b;
    scanf ("&d&d", &a, &b);

    int answer = sum (a, b);
    scanf ("the answer is equal to : %d", answer);

    return 0;
}
