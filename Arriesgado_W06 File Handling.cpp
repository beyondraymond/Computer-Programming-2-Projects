#include <iostream>
#include <fstream>
using namespace std;

int main(){
	FILE *Loveletter;
	char message[256];
	
	Loveletter=fopen("C:\\Users\\Raymond\\Desktop\\Love Letter.txt","w");
	cout<<"Writing a love letter...\n";
	cout<<"Love letter can now be read.";
	
	fputs("Bai, kumusta ka na diyan sa London? Can you still endure the weather and your study? HAHAHA. Well I hope kinakaya mo pa dahil magiging business partners pa tayo sa itatayo \nnating restaurant pag naging succesful na tayoin the near future.\nAnyway,thank you for still being my \"bai\" even after kong umamin sayo about my sexuality.\nThank you kasi hindi ka naging awkward saken even after that night.\nIt may sound absurd but I think I already have feelings for you.\nPlease don't get me wrong if you think na umaasa akong magiging tayo talaga because I know that you're a good man and you deserve a good wife.\nI just felt the need to release this hidden emotions that I got. Perhaps I'm in a late adolescent stage? HAHA ewan.\nSo please don't think that you're an inconvenience to me kapag nagrarant ka saken about how nerve-wracking your subjects are.\nI'll always be grateful to hear your problems and I'll always be here to cheer you up on your sad and depressing days.\n Thank you also for being there for me everytime. Thank you for cheering me up when I'm too anxious to do a certain thing. I'll always remember our deeptalks at \n night and how we hate the irony of life.\nSo yeah, HAHA.I pity myself because of this confession but I hope hindi ka maging awkwarwd sa akin just like how you accept me nung umamin ako na bakla.\nKuntento na ako na maging \"best chum\" and soon-to-be business partner mo.",Loveletter);
	
	fclose(Loveletter);
	
}
