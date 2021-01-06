#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int>);
void printArr(vector<int>);

int main() {

    vector<int> actual = sortArray({ 5, 3, 2, 8, 1, 4 });
    cout << endl;

	return 0;
}

void printArr(vector<int> v) {

	for (unsigned int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

vector<int> sortArray(vector<int> array) {
	vector<int> num;

	for (unsigned int i = 0; i < array.size(); i++)
		if(array[i] & 1)
			num.push_back(array[i]);

	printArr(num);

	for (unsigned int i = 0; i < num.size(); i++) {
		for (unsigned int j = 0; j < num.size() - i - 1; j++) {
			if (num[j] > num[j + 1]) {
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	printArr(num);

	int k = 0;
	for(unsigned int i = 0; i < array.size(); i++) {
		if(array[i] & 1) {
			array[i] = num[k];
			k++;
		}
	}

	printArr(array);

	return array;
}