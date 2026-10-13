#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year that you want konw:"<<endl;
    cin>>year;
    if(year/4==0&&year/100!=0||year/400==0){
        cout<<"This is a leap year"<<endl;
    }
    else{
        cout<<"This isn't a leap year";
    }
    return 0;
}