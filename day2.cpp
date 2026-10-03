#include<iostream>
#include<string>
int main(){
	//声明变量
	int age=18;
	double height=173.45;
	char grade='A';
	std::string name="wangmingliang";
	//输出变量
	std::cout<<"姓名"<<name<<std::endl;
	std::cout<<"年龄"<<age<<std::endl;
	std::cout<<"身高"<<height<<"cm"<<std::endl;
	std::cout<<"等级"<<grade<<std::endl;
	//接收用户输入
	int num1,num2;
	std::cout<<"请输入两个整数";
	std::cin>>num1>>num2;
	std::cout<<"它们的和为："<<num1+num2<<std::endl;
	return 0; 
}
