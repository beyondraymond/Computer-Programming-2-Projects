#include <iostream>

using namespace std;

int main(){
	int original[]={1,2,3,4,5};
	int copy[5];
	
	for (int i=0, j=4; i<5; j--, i++)
	{
	copy[i]=original[j];
}
	for (int i=0; i<5; i++)
	{
	cout<<original[i];
}
cout<<endl;
	for (int i=0; i<5; i++)
	{
	cout<<copy[i];
}
}
