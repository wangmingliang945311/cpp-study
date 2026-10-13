#include<iostream>
#include<string>
using namespace std;
int main(){
	//变量定义
	int age=18;
	double height=173.45;
	char grade='A';
	string name = "wangmingliang";
	//输出变量
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Height:"<<height<<"cm"<<endl;
	cout<<"Grade:"<<grade<<endl;
	//接收用户输入
	int num1,num2;
	cout<<"Enter two integers"<<endl;
	cin>>num1>>num2;
	cout<<"Their sum is:"<<num1+num2<<endl;
	return 0; 
}
