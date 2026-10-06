#include<iostream>
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
            std::cout<<i<<"*"<<j<<"="<<(i*j)<<"\t";
        }
        std::cout<<std::endl;
    }
}
int main(){
    int year=2024;
    if(isLeapYear(year)){
        std::cout<<year<<" is a leap year."<<std::endl;
    }else{
        std::cout<<year<<" is not a leap year."<<std::endl;
    }

int maxNum=findMax(10,45,23);
std::cout<<"Max number is:"<<maxNum<<std::endl;

std::cout<<"Multiplication Table(5*5):"<<std::endl;
printMultiTable(5);

return 0;
}