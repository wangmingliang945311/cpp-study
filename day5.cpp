#include<iostream>
using namespace std;
bool isLeapYear(int year){
    return(year%4==0&&year%100!=0||year%400==0);
}
int findMax(int a,int b,int c){
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    return max;
}
void printMultiTable(int n){
    for(int j=1;j<=n;j++){
        for(int i=1;i<=j;i++){
            cout<<i<<"*"<<j<<"="<<(i*j)<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int year=2024;
    if(isLeapYear(year)){
        cout<<year<<" is a leap year."<<endl;
    }else{
        cout<<year<<" is not a leap year."<<endl;
    }

int maxNum=findMax(10,45,23);
cout<<"Max number is:"<<maxNum<<endl;

cout<<"Multiplication Table(5*5):"<<endl;
printMultiTable(5);

return 0;
}