#include<iostream>
#include<string>
int main(){
	//变量定义
	int age=18;
	double height=173.45;
	char grade='A';
	std::string name = "wangmingliang";
	//输出变量
	std::cout<<"Name:"<<name<<std::endl;
	std::cout<<"Age:"<<age<<std::endl;
	std::cout<<"Height:"<<height<<"cm"<<std::endl;
	std::cout<<"Grade:"<<grade<<std::endl;
	//接收用户输入
	int num1,num2;
	std::cout<<"Enter two integers"<<std::endl;
	std::cin>>num1>>num2;
	std::cout<<"Their sum is:"<<num1+num2<<std::endl;
	return 0; 
}
