#include<iostream>
using namespace std;
int main(){
    double a=0.0,b=0.0,c=0.0;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a<=b){a=b;}
    if(a<=c){a=c;}
    cout<<"The largest number is:"<<a;
    return 0;
}