#include <iostream>
using namespace std;

int dontGiveMeFive(int, int);

int main() {

	int s, e;
	while(cin >> s >> e) {

		cout << dontGiveMeFive(s, e);
	}
	return 0;
}

int dontGiveMeFive(int start, int end)
{
	int total = 0;
	bool isFive;
	for (int i = start; i <= end; i++) {
		isFive = 0;
		if(i % 10 != 0 && i % 5 == 0)
			continue;
		for(int j = 10; j < i; j *= 10) {

			if((i / j) % 10 != 0 && (i / j) % 5 == 0) {

				isFive = 1;
				break;
			}
		}
		if(!isFive)
			total++;
	}

	return total;
}