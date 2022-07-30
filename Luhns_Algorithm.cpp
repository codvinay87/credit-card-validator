#include <iostream>

using namespace std;

bool Luhns_algorithm(int arr[], int size) {

    for (int k = 1; k <= size; k = k + 2) {
        arr[k] = arr[k] * 2;
        if (arr[k] > 9) {
            int digit1 = arr[k] % 10;
            arr[k] = arr[k] / 10;
            int digit2 = arr[k] % 10;
            arr[k] = digit1 + digit2;
        }
    }
    int sum = 0;
    for (int j = 0; j <= size; j++) sum = sum + arr[j];
    if ((sum % 10) == 0) return true;
    else return false;

}

int main() {
    long number;
    cout << " Enter the number ";
    cin >> number;
    long num = number;
    int arr[20] = {};
    int i = -1;
//    while loop to append all the digits to array
    while (num > 0) {
        int digit = num % 10;
        arr[++i] = digit;
        num = num / 10;
    }

    Luhns_algorithm(arr, i) ? cout << "Number is VALID according to luhns algorithm😎😎😎😎" << endl : cout << "the Number is NOT VALID accoding to luhns algorithm!!! 😒😒😒😒 "
                                                                               << endl;

    return 0;
}
