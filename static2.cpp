#include <iostream>
using namespace std;

void foo() {
	int x = 5;
	x++;
	cout << x << endl;
}

int main() {
	foo();
	foo();
	return 0;
}
