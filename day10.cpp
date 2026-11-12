#include<iostream>
using namespace std;
int main(){
    int*p=new int(10);
    cout<<"Address:"<<p<<",Value"<<*p<<endl;
    *p=20;
    cout<<"After modify:"<<*p<<endl;
    delete p;
    p=nullptr;

    int size=5;
    int*arr=new int[size];
    for (int i=0;i<size;i++){
        arr[i]=i*10;
    }
    for (int i=0;i<size;i++){
        cout<<"["<<i<<"]"<<arr[i]<<",Address"<<&arr[i]<<endl;
    }
    delete[] arr;
    arr=nullptr;
    
}