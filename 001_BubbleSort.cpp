#include <iostream>
using namespace std;

int main(){
    int data[100], n;

    cout<<"enter n:";
    cin>>n;

    cout<<"enter array element value :";
    for(int i=0; i<n; i++){
        cin>>data[i];
    }

    for(int k=0; k<n-1; k++){
        cout<<endl<<"pass no:"<<k+1<<" is ";

        for(int i=0; i<n; i++){
            cout<<data[i]<<" ";
        }

        cout<<endl<<endl;

        for(int ptr=0; ptr<n-k-1; ptr++){
            cout<<endl<<"step no-"<<ptr+1<<" is ";

            if(data[ptr]>data[ptr+1]){
                int temp=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=temp;
            }

            for(int ptr=0; ptr<n; ptr++){
                cout<<data[ptr]<<" ";
            }

            cout<<endl;
        }

        cout<<endl<<endl;
    }

    cout<<endl<<endl<<endl;
    cout<<endl<<"sorted array:";
    
    for(int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }
}



// #include<iostream>
// using namespace std;
// int main(){
//     int data[100],n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"enter array element value:";
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
//     cout<<"Sorted array is :";
//     for(int i=0; i<n; i++){
//         cout<<data[i]<<" ";
//     }
//     return 0;
// }



