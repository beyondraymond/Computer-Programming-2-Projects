#include <iostream>
#include <string.h>
using namespace std;

int main(){
	FILE *Loveletter;
	char message[256];
	
	Loveletter=fopen("C:\\Users\\Raymond\\Desktop\\Love Letter.txt","w");
	cout<<"Write a Love letter: \n";
	cin.getline(message,256);
	
	
	for(int i=0;i<256;i++){
	if(EOF(Loveletter)==1){
	fclose(Loveletter);}elseZ{fputc(message[i],Loveletter);
	}}
	
	
	
}
