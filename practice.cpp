#include<iostream>
using namespace std;

void printArray(double arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(double arr[],int size){
    for(int i=0;i<size/2;i++){
        double temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-1-i]=temp;
    }
}

int linearSearch(double arr[],int size,double target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

void bubblesort(double arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                double temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    double arr[5]={9.9,9.9,6.0,3.0,5.6};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Original: ";
    printArray(arr,size);

    reverseArray(arr,size);
    cout<<"Reverse: ";
    printArray(arr,size);

    double target=9.9;
    int index=linearSearch(arr,size,target);
    cout<<"Index of "<<target<<": "<<index<<endl;

    bubblesort(arr,size);
    cout<<"Sorted: ";
    printArray(arr,size);

    return 0;
}