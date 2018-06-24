#include <iostream>
using namespace std;

int main(){
	static int x;
	x = 5;
	x++;
	cout << x << endl;
	if(x < 10)
		main();
	else
		exit;
}
