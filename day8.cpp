#include<iostream>
using namespace std;

void swapByPoint(double* a,double* b){
    double temp=*a;
    *a=*b;
    *b=temp;
}

void addOne(double* p){
    *p=*p+1.0;
}

int main(){
    double a=11.1;
    double b=22.2;

    cout<<"a="<<a<<",address="<<&a<<endl;
    cout<<"b="<<b<<",address="<<&b<<endl;

    double* p=&a;
    cout<<"p="<<p<<",*p="<<*p<<endl;

    *p=99;
    cout<<"after *p=99,a="<<a<<endl;

    cout<<"before swap:a="<<a<<"before swap:b="<<b<<endl;
    swapByPoint(&a,&b);
    cout<<"after swap:a="<<a<<"after swap:b="<<b<<endl;

    addOne(&a);
    cout<<"after addOne,a="<<a<<endl;

    int* empty=NULL;
    if(empty!=NULL){
        cout<<*empty<<endl;
    }else{
        cout<<"empty pointer,cannot dereference"<<endl;
    }

    return 0;
}