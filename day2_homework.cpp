#include<iostream>
#include<string>
int main(){
	//定义变量 
	double num1,num2,num3;
	//接收用户输入信息
	std::cout<<"请输入你的语文，数学，英语成绩";
	std::cin>>num1>>num2>>num3;
	//处理信息并输出
	std::cout<<"你的总分为："<<num1+num2+num3<<std::endl;
	std::cout<<"你的平均分为："<<(num1+num2+num3)/3.0<<std::endl;
	return 0; 
}
