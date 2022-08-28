#include <iostream>
using namespace std;

int main () {
	int n;
	scanf ("%d", &n);
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int temp;
		scanf ("%d", &temp);
		sum += temp;
	}
    scanf ("the answer is equal to : %d", sum);
    return 0;
}

