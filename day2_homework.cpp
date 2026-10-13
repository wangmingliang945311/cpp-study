#include<iostream>
#include<string>
using namespace std;
int main(){
	//定义变量
	double num1=0.0,num2=0.0,num3=0.0;
	//接收用户输入信息
	cout<<"Please enter your score for Chinese,English,Math"<<endl;
	cin>>num1>>num2>>num3;
	//处理信息并输出
	cout<<"Your total score is:"<<num1+num2+num3<<endl;
	cout<<"Your average score is:"<<(num1+num2+num3)/3.0<<endl;
	return 0; 
}