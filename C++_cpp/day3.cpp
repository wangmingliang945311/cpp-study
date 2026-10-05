#include<iostream>
int main(){
    double score=0.0;
    std::cout<<"Enter your score(0~100):";
    std::cin>>score;
    if(score<0||score>100)
    {std::cout<<"This score is error,plese enter your real score again"<<std::endl;}
    else if(score>=90)
    {std::cout<<"'A' is your grade"<<std::endl;}
    else if(score<=90&&score>=80)
    {std::cout<<"'B' is your grade"<<std::endl;}
    else if(score<=80&&score>=70)
    {std::cout<<"'C' is your grade"<<std::endl;}
    else if(score<=70&&score>=60)
    {std::cout<<"'D' is your grade"<<std::endl;}
    else{std::cout<<"'E' is your grade";}
    return 0;
}