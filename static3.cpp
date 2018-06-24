#include <iostream>
using namespace std;

int main(){
	static int x = 0;
	x++;
	cout << "Team " << x << endl;
	if(x < 10)
		main();
	else
		exit;
}
