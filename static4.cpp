#include <iostream>
using namespace std;

int main () {
	int x = 0;
	x++;

	if(x < 10)
		main();
	else
		exit;
}

