#include<iostream>
double getAverage(int score1,int score2,int score3){
    return (score1+score2+score3)/3.0;
}
int main(){
    double result=getAverage(90,80,70);
    std::cout<<"The average score is:"<<result<<std::endl;
    return 0;
}