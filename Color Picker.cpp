#include <iostream>
#include <limits>
#include <string>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main(){
	for(int i=1; i<=300; i++){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
	cout<<i<<"What color is this?"<<endl;
	}
	system("pause");
}
