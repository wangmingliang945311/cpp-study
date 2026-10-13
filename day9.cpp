#include<iostream>
using namespace std;
void swapByReference(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}
void printDouble(const int& x){
    cout<<"Double value: "<<x*2<<endl;
}
int main(){
    int num=5;
    int& ref=num;
    
    cout<<"num="<<num<<endl;
    
    ref=10;
    cout<<"num="<<num<<endl;

    int a=100,b=200;
    cout<<"a="<<a<<" b="<<b<<endl;
    swapByReference(a,b);
    cout<<"after,a="<<a<<" b="<<b<<endl;

    int x=50;
    cout<<"x="<<x<<endl;
    printDouble(x);

    return 0; 
}