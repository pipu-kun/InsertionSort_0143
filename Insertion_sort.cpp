#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
        while (true) {
        cout << "Masukan jumlah data array: ";
        cin >> n;
        
        if (n <= 20) {
            break;
        } else {
            cout << "\nArray tidak boleh lebih dari 20\n." << endl;
        }
    }
    cout << "====================================" << endl;
    cout << "======= Masukan elemen array =======" << endl;
    cout << "====================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}