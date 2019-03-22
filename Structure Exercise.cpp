#include <iostream>

using namespace std;

struct portal{
	char course_code[10];
	char course_title[80];
	int units;
	float midterm;
};

int main(){
	portal grades[10]={
	{"CCS0005 ", "INTRODUCTION TO HUMAN COMPUTER INTERACTION (LEC)",2,3.5},
	{"CCS0005L", "INTRODUCTION TO HUMAN COMPUTER INTERACTION (LAB)",1,3.5},
	{"CCS0007 ", "COMPUTER PROGRAMMING 2 (LEC)                    ", 2, 2.5 },
	{"CCS0007L", "COMPUTER PROGRAMMING 2 (LAB)                    ", 1, 2.5 },
	{"GED0001 ", "SPECIALIZED ENGLISH PROGRAM 1                   ", 3, 2.5},
	{"GED0015 ", "Physical Education 2                            ", 3, 0},
	{"GED0017 ", "Orientation to College Life                     ", 1, 4.0},
	{"GED0027 ", "Mathematics in the Modern World                 ", 3, 2.0},
	{"IT0001  ", "BASIC INTERFACE DESIGN                          ", 1, 4.0},
	{"NSTP2   ", "CIVIC WELFARE TRAINING SERVICE 2                ", 0, 3.0}};

	cout<<"John Raymond M. Arriesgado Course Card"<<endl;
	cout<<"Term : 2     School Year : 20182019"<<endl<<endl;
	cout<<"Course Code"<<"\t"<<"Course Description"<<"\t\t\t\t\t"<<"Units "<<"\t"<<"Midterms"<<endl;
	
	for(int x=0; x<10; x++){
		cout<<grades[x].course_code<<"\t"<<grades[x].course_title<<"\t"<<grades[x].units<<"\t"<<grades[x].midterm<<endl;
	}
}
