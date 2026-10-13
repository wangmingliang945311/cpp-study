#include<iostream>
using namespace std;
int main(){
    int Coursecout=0;
    double score=0.0,total=0.0;
    cout<<"How many course do you have?";
    cin>>Coursecout;
    for(int i=1;i<=Coursecout;i++){
        cout<<"Enter your score of course:"<<i<<":";
        cin>>score;
        total+=score;
    }
    if(Coursecout>0){
        double average=total/Coursecout;
        cout<<"Total score is:"<<total<<endl;
        cout<<"Average score is:"<<average<<endl;
    }else {
        cout<<"Error:coursecout must be greater than 0!"<<endl;
    }
    return 0;
}