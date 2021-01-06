#include <iostream>
using namespace std;

int main() {

	while(1) {

		int a, b, c;
		cin >> a >> b >> c;
    	cout << (((a + b) > c) & ((b + c) > a) & ((c + a) > b) & (a > 0) & (b > 0) & (c > 0)) << endl;
	}
}