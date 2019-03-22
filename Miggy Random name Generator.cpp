#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
	srand (time(NULL));
	string student [39];
	string find;
	string input;
	ifstream file;
	file.open("ewewew.txt");
	
	for (int loop = 0; loop < 39; loop++){
		getline(file,find);
		student[loop] = find;}
	file.close();
	ofstream newfile;
	newfile.open("graduation_Pajarillo.txt");
	random_shuffle(&student[0], &student[38]);
	for (int loop = 0; loop < 20; loop++){
		newfile << student[loop] << endl;}
		newfile.close();
	}
	
