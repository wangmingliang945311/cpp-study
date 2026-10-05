#include<iostream>
int main(){
    int Coursecout=0;
    double score=0.0,total=0.0;
    std::cout<<"How many course do you have?";
    std::cin>>Coursecout;
    for(int i=1;i<=Coursecout;i++){
        std::cout<<"Enter your score of course:"<<i<<":";
        std::cin>>score;
        total+=score;
    }
    if(Coursecout>0){
        double average=total/Coursecout;
        std::cout<<"Total score is:"<<total<<std::endl;
        std::cout<<"Average score is:"<<average<<std::endl;
    }else {
        std::cout<<"Error:coursecout must be greater than 0!"<<std::endl;
    }
    return 0;
}