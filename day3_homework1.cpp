#include<iostream>
int main(){
    int year;
    std::cout<<"Enter a year that you want konw:"<<std::endl;
    std::cin>>year;
    if(year/4==0&&year/100!=0||year/400==0){
        std::cout<<"This is a leap year"<<std::endl;
    }
    else{
        std::cout<<"This isn't a leap year";
    }
    return 0;
}