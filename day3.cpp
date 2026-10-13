#include<iostream>
using namespace std;
int main(){
    double score=0.0;
    cout<<"Enter your score(0~100):";
    cin>>score;
    if(score<0||score>100)
    {cout<<"This score is error,plese enter your real score again"<<endl;}
    else if(score>=90)
    {cout<<"'A' is your grade"<<endl;}
    else if(score<=90&&score>=80)
    {cout<<"'B' is your grade"<<endl;}
    else if(score<=80&&score>=70)
    {cout<<"'C' is your grade"<<endl;}
    else if(score<=70&&score>=60)
    {cout<<"'D' is your grade"<<endl;}
    else{cout<<"'E' is your grade";}
    return 0;
}