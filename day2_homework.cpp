#include<iostream>
#include<string>
int main(){
	//定义变量
	double num1=0.0,num2=0.0,num3=0.0;
	//接收用户输入信息
	std::cout<<"Please enter your score for Chinese,English,Math"<<std::endl;
	std::cin>>num1>>num2>>num3;
	//处理信息并输出
	std::cout<<"Your total score is:"<<num1+num2+num3<<std::endl;
	std::cout<<"Your average score is:"<<(num1+num2+num3)/3.0<<std::endl;
	return 0; 
}