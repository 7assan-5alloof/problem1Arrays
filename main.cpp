#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {12, 45, 67, 33, 22, -34, 56, 78, 44, 99}; // Given array for problem
    int position; cout << "Enter a position: "; cin >> position; // Ask user for input
    int base = arr[position]; // Fetch data from specified position

    // Find numbers less on the left
    int smaller = 0;
    for (int i = 0; i < position; i++) if (arr[i] < base) smaller++;
    cout << "There ";
    if (smaller > 3) cout << "are";
    else cout << "is";
    cout << " " << smaller << " element";
    if (smaller > 2) cout << "s";
    cout << " smaller than " << base << " on its left and ";

    // Find numbers greater on the right
    int bigger = 0;
    for (int i = 9; i > position; i--) if (arr[i] > base) bigger++;
    cout << bigger << " element";
    if (bigger > 2) cout << "s";
    cout << " greater than it on its right.";

    return 0;
}
