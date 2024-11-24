#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1 ="stmik";
	string str2 ="penusa";
	
	//concantenation
	string result =str1+" "+str2;
	cout<<"concatenated:"<<result<<std::endl;
	
	//lenght
	size_t length =result.length();
	cout<<"length:"<<length<<std::endl;
	
	//substring
	string sub =result.substr();
	cout<<"substring:"<<sub<<std::endl;
	
	//find
	size_t pos =result.find("penusa");
	cout<<"position of 'penusa':"<<pos<<std::endl;
	
	//replace
	result.replace(0,5,"hi");
	cout<<"replaced:"<<result<<std::endl;
	
return 0;
}
