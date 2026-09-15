#include<iostream>
using namespace std;

int main(){
    int data[100], n;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>data[i];
    }

    // Bubble Sort
    for(int k=0; k<n-1; k++){

        cout<<endl<<"Pass No: "<<k+1<<" is ";

        for(int i=0; i<n; i++){
            cout<<data[i]<<" ";
        }

        for(int ptr=0; ptr<n-k-1; ptr++){

            cout<<endl<<"Step No: "<<ptr+1<<" is ";

            if(data[ptr] > data[ptr+1]){

                int temp = data[ptr];
                data[ptr] = data[ptr+1];
                data[ptr+1] = temp;
            }

            for(int i=0; i<n; i++){
                cout<<data[i]<<" ";
            }
        }

        cout<<endl;
    }

    cout<<endl;
    cout<<"Sorted Array: ";

    for(int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }

    // Binary Search
    int item = 45;
    int BEG = 0;
    int END = n-1;
    int loc = -1;
    int step = 1;

    cout<<endl<<endl;
    cout<<"Searching ITEM = "<<item<<endl;

    while(BEG <= END){

        int MID = (BEG + END) / 2;

        cout<<endl<<"Pass No: "<<step<<endl;

        cout<<"BEG = "<<BEG<<endl;
        cout<<"MID = "<<MID<<endl;
        cout<<"END = "<<END<<endl;

        cout<<"data["<<MID<<"] = "<<data[MID]<<endl;

        cout<<"Step No: "<<step<<" -> ";

        if(data[MID] == item){

            loc = MID;

            cout<<"ITEM found!"<<endl;
            break;
        }
        else if(data[MID] > item){

            cout<<"data["<<MID<<"] > ITEM"<<endl;
            cout<<"Search left side"<<endl;

            END = MID - 1;
        }
        else{

            cout<<"data["<<MID<<"] < ITEM"<<endl;
            cout<<"Search right side"<<endl;

            BEG = MID + 1;
        }

        step++;
    }

    cout<<endl;
    cout<<"--------------------------------"<<endl;

    if(loc != -1){
        cout<<"Item found! Location: "<<loc<<endl;
    }
    else{
        cout<<"Item is not in the array DATA"<<endl;
    }

    return 0;
}




// #include<iostream>
// using namespace std;
// int main(){
//     int data[100],n;
//     cout<<"enter n:";
//     cin>>n;
//     cout << "Enter array elements : ";
//     for(int i=0; i<n; i++){
//         cin>>data[i];
//     }
//     for(int k=0; k<n-1; k++){
//         for(int ptr=0; ptr<n-k-1; ptr++){
//             if(data[ptr] > data[ptr+1]){
//                 int temp = data[ptr];
//                 data[ptr] = data[ptr+1];
//                 data[ptr+1] = temp;
//             }
//         }
//     }
//     int item = 45;
//     int BEG=0;
//     int END=n-1;
//     int MID=(BEG+END)/2;
//     int loc = -1;
//     while(BEG <= END && data[MID] != item){
//         if(data[MID] > item){
//             END = MID - 1;
//         }
//         else{
//             BEG = MID + 1;
//         }
//         MID=(BEG+END)/2;
//     }
//     if(data[MID] == item){
//         loc = MID;
//         cout << "Item found! Location: " <<loc<< endl;
//     }else{
//         cout << "Item is not in the array DATA" << endl;
//     }
//     return 0;
// }


