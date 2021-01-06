#include <iostream>
using namespace std;

int solution(int);

int main() {

    cout << "This Program will calculate the sum of all the multiples of 3 or 5 below the number passed in.\n";
    cout << "Enter the number: ";
    int n;
    cin >> n;
    cout << "The solution is " << solution(n) << ".\n";
}

int solution(int number) {

    int total = 0;
    for ( int i = 3; i < number; i+=3 ) {
    
        total += i;
    }
    for ( int i = 5; i < number; i+=10 ) {
    
        total += i;
        i += 5;
        if ( i < number )
          total += i;
    }
    return total;
}
