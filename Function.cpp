#include <iostream>
using namespace std;

void linechar(const char *){
	cout<<"*************";
}
void linechar(const char * const char h){
	cout<<"############";
}


void hello(string hello){
	cout<<"Hello";
}
int main(){
	linechar("*""h");
	cout<<endl;
	hello("hi");
}
