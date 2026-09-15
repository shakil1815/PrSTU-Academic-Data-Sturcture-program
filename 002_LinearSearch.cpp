#include <iostream>
using namespace std;

int main() {
    int data[100], n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter array element value: ";
    for(int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int ITEM = 45;
    int K = 0;
    int LOC = -1;

    cout << "\nSearching for ITEM = " << ITEM << endl;

    int step = 1;

    while(LOC == -1 && K < n) {

        cout << "\nPass No: " << K + 1 << endl;
        cout << "Step No: " << step << endl;

        cout << "Current array: ";
        for(int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;

        cout << "Checking data[" << K << "] = " << data[K]
             << " with ITEM = " << ITEM << endl;

        if(ITEM == data[K]) {
            LOC = K;

            cout << "Result: ITEM found at index " << LOC << endl;
        }
        else {
            cout << "Result: Not matched" << endl;
        }

        K = K + 1;
        step++;
    }

    cout << "\n--------------------------------" << endl;

    if(LOC == -1) {
        cout << "ITEM " << ITEM << " Not found" << endl;
    }
    else {
        cout << "ITEM " << ITEM
             << " found at Location: " << LOC << endl;
    }

    return 0;
}



// #include <iostream>
// using namespace std;
// int main() {
//     int data[100],n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"enter array element value:";
//     for(int i=0; i<n; i++){
//         cin>>data[i];
//     } 
//     int ITEM = 45;
//     int K = 0; 
//     int LOC = -1; 
//     while (LOC == -1 && K < n) {
//         if (ITEM == data[K]) {
//             LOC = K; 
//         }
//         K = K + 1;
//     }
//     if (LOC == -1) {
//         cout << "Not found" << endl;
//     } else {
//         cout << "Item found Location: " << LOC << endl;
//     }
//     return 0;
// }





