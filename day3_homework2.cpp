#include<iostream>
int main(){
    double a=0.0,b=0.0,c=0.0;
    std::cout<<"Enter three numbers:"<<std::endl;
    std::cin>>a>>b>>c;
    if(a<=b){a=b;}
    if(a<=c){a=c;}
    std::cout<<"The largest number is:a"<<a;
    return 0;
}