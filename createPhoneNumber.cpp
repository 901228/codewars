#include <iostream>
#include <string>

std::string createPhoneNumber(const int[10]);

int main() {

    int arr[10];
    for (int i = 0; i < 10; i++) {

        std::cin >> arr[i];
    }
    std::cout << createPhoneNumber(arr);

    return 0;
}

std::string createPhoneNumber(const int arr[10]) {

    std::string de;
    de += "(";
    int i = 0;
    for (; i < 3; i++) {

        de += arr[i] + '0';
    }
    de += ") ";
    for (; i < 6; i++) {

        de += arr[i] + '0';
    }
    de += "-";
    for (; i < 10; i++) {

        de += arr[i] + '0';
    }

    return de;
}
