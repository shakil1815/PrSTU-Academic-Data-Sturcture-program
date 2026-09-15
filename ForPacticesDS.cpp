#include<iostream>
using namespace std;
int main(){
    int data[] = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};
    int n = 13; 
    int item = 40;
    int beg=0;
    int end=n-1;
    int mid=(beg+end)/2;
    int loc=-1;
    while(beg<=end && data[mid] !=item){
        if(data[mid]>item){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(data[mid]==item){
        loc=mid;
        cout<<"found!"<<loc;
    }else{
        cout<<"not found "<<endl;
    }
}