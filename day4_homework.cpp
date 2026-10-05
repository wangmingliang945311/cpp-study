#include<iostream>
int main(){
    for(int j=1;j<=9;j++){
        for(int i=1;i<=j;i++){
            std::cout<<j<<"*"<<i<<"="<<(j*i)<<"\t";
        }
    std::cout<<std::endl;
    }
    return 0;
}