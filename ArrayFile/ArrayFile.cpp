#include <iostream>
using namespace std;

void task1() {
    int n, m;
    cout << "enter n: "; cin >> n;
    int A[200];
    cout << "enter elements mas A: ";
    for (int i = 0; i < n; i++) cin >> A[i];
    cout << "enter m: "; cin >> m;
    int B[200];
    cout << "enter elements mas B: ";
    for (int i = 0; i < m; i++) cin >> B[i];
    int C[400];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            C[k++] = A[i];
        }
    }
    for (int i = 0; i < m; i++) {
        if (B[i] > 0) {
            C[k++] = B[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            C[k++] = A[i];
        }
    }
    for (int i = 0; i < m; i++) {
        if (B[i] < 0) {
            C[k++] = B[i];
        }
    }
    cout << "Resultat (massiv C):" << endl;
    for (int i = 0; i < k; i++) cout << C[i] << " ";
    cout << endl;
}

void task2() {
    int n, ak, bk, arr[100], pos = -1, maxIdx = -1, maxVal = -1000000000;
    cout << "N, ak, bk: "; cin >> n >> ak >> bk;
    cout << "Elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        for (int i = pos + 1; i < n; i++) {
            if (arr[i] >= ak && arr[i] <= bk && arr[i] > maxVal) {
                maxVal = arr[i];
                maxIdx = i;
            }
        }
    }
    if (maxIdx != -1) cout << "Index: " << maxIdx + 1 << ", Value: " << maxVal << endl;
    else cout << "Not found" << endl;
}

void task3() {
    int n, k, A[200], B[200];
    cout << "Vvedit n ta k: "; cin >> n >> k;
    cout << "Vvedit elementy: ";
    for (int i = 0; i < n; i++) cin >> A[i];
    k = k % n;
    if (k < 0) k += n;
    for (int i = 0; i < n; i++) {
        B[(i + k) % n] = A[i];
    }
    cout << "Result: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";
    cout << endl;
}

int main() {
    int command;
    while(true) {
        cout << "\nEnter task (1, 2, 3) or 0 to exit: ";
        cin >> command;
        if (command == 0) break;

        switch (command) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            default: cout << "Invalid task number!" << endl;
        }
    }
    return 0;
}