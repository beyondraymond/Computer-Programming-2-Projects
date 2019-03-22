#include <iostream>
#include <limits>
#include <string>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <ctime>

using namespace std;
enum ConsoleColors {
    LightGreen = 10,
    LightCyan = 11,
    Red = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15,
    WhiteBG=240,
    VioletYellow = 94,
    VioletWhite = 95,
    BlackWhite = 271
};
void setTextColor(ConsoleColors text)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD) (text));
}

int changer(int fare, int payment,int change){
	if(payment>fare){
				change= payment-fare;
			}
			return change;
}

struct customer{
	string Name;
	string start;
	string end;
};
void charbug()
	{if (cin.fail())
				{
					cout << "Deleting the characters..."<<endl;
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}

int main(){
	
	customer c;
	int payment; 
	int change=0;
	int fare,j=1,i;
	string station[]={"Santolan         ","Katipunan        ","Anonas           ", "Cubao            ", "Betty Go-Belmonte", "Gilmore          ", "J.Ruiz          ", "V.Mapa           ", "Pureza           ", "Legarda          ", "Recto            "};
	
	setTextColor(VioletYellow);
	cout<<" "<<endl;
	cout<<"\tGood day Commuter! Welcome to,"<<endl<<endl;Sleep(500);
	setTextColor(VioletWhite);
	cout<<"\t#       ######  #######    #       ### #     # #######     #####  "<<endl;Sleep(500);
	cout<<"\t#       #     #    #       #        #  ##    # #          #     # "<<endl;Sleep(500);
	cout<<"\t#       #     #    #       #        #  # #   # #                # "<<endl;Sleep(500);
	cout<<"\t#       ######     #       #        #  #  #  # #####       #####  "<<endl;Sleep(500);
	cout<<"\t#       #   #      #       #        #  #   # # #          #       "<<endl;Sleep(500);
	cout<<"\t#       #    #     #       #        #  #    ## #          #       "<<endl;Sleep(500);
	cout<<"\t####### #     #    #       ####### ### #     # #######    ####### "<<endl<<endl;Sleep(1000);
	setTextColor(VioletYellow);
	cout<<setw(60)<<"\tBuy your ticket before going to the platform.";Sleep(3000);
	setTextColor(BlackWhite);
	
	system("cls");
	setTextColor(LightMagenta);
	cout<<"====================================="<<endl<<endl;
	setTextColor(Yellow);
	cout<<setw(30)<<"LRT Line 2 - Purple Line"<<endl;
	cout<<setw(30)<<"Select From the Following Stations"<<endl<<endl;
	setTextColor(LightCyan);
	for(i=0; i<11; i++){
    cout<<station[i]<<"\t";
    if(i%2){cout<<endl;}
    }
	cout<<endl;
	setTextColor(LightMagenta);
	cout<<"====================================="<<endl<<endl;
	
	setTextColor(White);
	cout<<"Enter Your Name: ";
	getline(cin, c.Name);
	cout<<endl;
	cout<<"Starting Station: ";
	getline(cin, c.start);
	
	while (c.start != "Recto" && c.start != "Legarda" && c.start != "Pureza" && c.start != "V.Mapa" && c.start != "J.Ruiz" && c.start != "Gilmore" && c.start != "Betty Go-Belmonte" && c.start != "Cubao"  && c.start != "Anonas"  && c.start != "Katipunan"  && c.start != "Santolan"){
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.start);
	}
	setTextColor(White);
	cout<<endl;
	cout<<"End Station: ";
	getline(cin, c.end);
	while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Belmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
	}
	setTextColor(White);
	cout<<endl;
	
	
	if(c.start=="Santolan"){
		
		while (c.end == "Santolan") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="Katipunan" || c.end=="Anonas" || c.end=="Cubao"){
			
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
			
		}
		
		if (c.end=="Betty Go-Belmonte" || c.end=="Gilmore" || c.end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="V.Mapa" || c.end=="Pureza" || c.end=="Legarda" || c.end=="Recto"){
			
			fare=25;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//c.end of santolan
	
	if(c.start=="Katipunan"){
		
		while (c.end == "Katipunan") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="Santolan" || c.end=="Anonas" || c.end=="Cubao" || c.end=="Betty Go-Belmonte"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Pureza" || c.end=="V.Mapa" || c.end=="Gilmore" || c.end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Legarda" || c.end=="Recto"){
			
			fare=25;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//c.end of katips
	
	if(c.start=="Anonas"){
		
		while (c.end == "Anonas") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="Katipunan" || c.end=="Santolan" || c.end=="Cubao" || c.end=="Betty Go-Belmonte"  || c.end=="Gilmore"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="V.Mapa" || c.end=="Pureza" || c.end=="J.Ruiz" || c.end=="Legarda"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Recto"){
			
			fare=25;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//c.end of anonas
	
	if(c.start=="Cubao"){
		
		while (c.end == "Cubao") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="Katipunan" || c.end=="Santolan" || c.end=="J.Ruiz" || c.end=="Betty Go-Belmonte"  || c.end=="Gilmore"  || c.end=="Anonas"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="V.Mapa" || c.end=="Pureza" || c.end=="J.Ruiz" || c.end=="Legarda"|| c.end=="Recto"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
	}
	
	//c.end of cubao
	
	if(c.start=="Betty Go-Belmonte"){
		
		while (c.end == "Betty Go-Belmonte") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="Katipunan" || c.end=="V.Mapa" || c.end=="J.Ruiz" || c.end=="Cubao"  || c.end=="Gilmore"  || c.end=="Anonas"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Santolan" || c.end=="Pureza" || c.end=="Legarda"|| c.end=="Recto"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
	}
	
	//c.end of betty
	
	if(c.start=="Gilmore"){
		
		while (c.end == "Gilmore") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
				}
		}
		
		if (c.end=="Pureza" || c.end=="V.Mapa" || c.end=="J.Ruiz" || c.end=="Cubao"  || c.end=="Betty Go-Belmonte"  || c.end=="Anonas"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Santolan" || c.end=="Katipunan" || c.end=="Legarda"|| c.end=="Recto"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
	}
	
	//c.end of Gilmore
	
	if(c.start=="J.Ruiz"){
		
		while (c.end == "J.Ruiz") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="Pureza" || c.end=="V.Mapa" || c.end=="Gilmore" || c.end=="Cubao"  || c.end=="Betty Go-Belmonte"  || c.end=="Legarda"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Santolan" || c.end=="Katipunan" || c.end=="Anonas"|| c.end=="Recto"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
	}
	
	//c.end of J.Ruiz
	
	if(c.start=="V.Mapa"){
		
		while (c.end == "V.Mapa") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
					}
		}
		
		if (c.end=="Betty Go-Belmonte" || c.end=="Gilmore" || c.end=="J.Ruiz" || c.end=="Pureza"  || c.end=="Legarda" || c.end=="Recto"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Katipunan" || c.end=="Anonas" || c.end=="Cubao"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Santolan"){
			
			fare=25;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//c.end of V.Mapa
	
	if(c.start=="Pureza"){
		
		while (c.end == "Pureza") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="Gilmore" || c.end=="J.Ruiz" || c.end=="V.Mapa" || c.end=="Legarda" || c.end=="Recto"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Katipunan" || c.end=="Anonas" || c.end=="Cubao" || c.end=="Betty Go-Belmonte"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Santolan"){
			
			fare=25;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//c.end of pureza
	
	if(c.start=="Legarda"){
		
		while (c.end == "Legarda") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="J.Ruiz" || c.end=="V.Mapa" || c.end=="Pureza" || c.end=="Recto"){
		
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Anonas" || c.end=="Cubao" || c.end=="Betty Go-Belmonte" || c.end=="Gilmore"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Santolan" || c.end=="Katipunan"){
			
			fare=25;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//c.end of legarda
	
	if(c.start=="Recto"){
		
		while (c.end == "Recto") {
		setTextColor(Red);	
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		setTextColor(White);
		cout << "Enter Another Station: ";
		getline(cin, c.end);
		while (c.end != "Recto" && c.end != "Legarda" && c.end != "Pureza" && c.end != "V.Mapa" && c.end != "J.Ruiz" && c.end != "Gilmore" && c.end != "Betty Go-Bendmonte" && c.end != "Cubao"  && c.end != "Anonas"  && c.end != "Katipunan"  && c.end != "Santolan") {
		setTextColor(Red);
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, c.end);
			}
		}
		
		if (c.end=="V.Mapa" || c.end=="Pureza" || c.end=="Legarda"){
		
			fare=15;
			 
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Cubao" || c.end=="Betty Go-Belmonte" || c.end=="Gilmore" || c.end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (c.end=="Santolan" || c.end=="Katipunan" || c.end=="Anonas"){
			
			fare=25;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<c.Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<c.start<<" to "<<c.end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				setTextColor(Red);
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	
	system("cls");
	setTextColor(LightCyan);
	cout<<"  "<<endl;
	cout<<" ######  ######  #######  #####  #######  #####   #####  ### #     #  #####                "<<endl;Sleep(500);
	cout<<" #     # #     # #     # #     # #       #     # #     #  #  ##    # #     #               "<<endl;Sleep(500);
	cout<<" #     # #     # #     # #       #       #       #        #  # #   # #                     "<<endl;Sleep(500);
	cout<<" ######  ######  #     # #       #####    #####   #####   #  #  #  # #  ####               "<<endl;Sleep(500);
	cout<<" #       #   #   #     # #       #             #       #  #  #   # # #     #     ###  ###  ### "<<endl;Sleep(500);
	cout<<" #       #    #  #     # #     # #       #     # #     #  #  #    ## #     #     ###  ###  ###"<<endl;Sleep(500);
	cout<<" #       #     # #######  #####  #######  #####   #####  ### #     #  #####      ###  ###  ### "<<endl<<endl;Sleep(1000);
	setTextColor(Yellow);
	cout<<" This may take a few seconds. Please wait"<<endl;Sleep(2000);
	cout<<" Printing your receipt."<<endl;Sleep(3000);
	
	time_t transaction= time(0);
	char* now= ctime(&transaction);
	
	system("cls");
	setTextColor(LightMagenta);
	cout<<"\t++++++++++++++++++++++++++++++++++++"<<endl<<endl;
	setTextColor(Yellow);
	cout<<"\t       LRT 2 - Purple Line          "<<endl;
	cout<<"\t         Official Receipt           "<<endl;
	cout<<"\t      "<<now<<"      "<<endl;
	setTextColor(LightMagenta);
	cout<<"\t------------------------------------"<<endl<<endl;
	setTextColor(LightCyan);
	cout<<"\tCustomer: "<<c.Name<<endl;
	cout<<"\tItinerary: "<<c.start<<" to "<<c.end<<endl;
	cout<<"\tCash Amount: "<<payment<<endl;
	cout<<"\tChange: "<<change<<endl<<endl;
	setTextColor(LightMagenta);
	cout<<"\t------------------------------------"<<endl<<endl;
	setTextColor(Yellow);
	cout<<"\tThank you for riding in LRT Line 2!"<<endl;
	cout<<"\tPlease Proceed to the Train Platform"<<endl<<endl;
	setTextColor(LightMagenta);
	cout<<"\t++++++++++++++++++++++++++++++++++++"<<endl<<endl;
	setTextColor(White);
	
	ofstream receipt ("Receipt.txt");

	receipt<<"\t++++++++++++++++++++++++++++++++++++"<<endl<<endl;
	receipt<<"\t       LRT 2 - Purple Line          "<<endl;
	receipt<<"\t         Official Receipt           "<<endl;
	receipt<<"\t      "<<now<<"      "<<endl;
	receipt<<"\t------------------------------------"<<endl<<endl;
	receipt<<"\tCustomer: "<<c.Name<<endl;
	receipt<<"\tItinerary: "<<c.start<<" to "<<c.end<<endl;
	receipt<<"\tCash Amount: "<<payment<<endl;
	receipt<<"\tChange: "<<change<<endl<<endl;
	receipt<<"\t-------------------------------------"<<endl<<endl;
	receipt<<"\tThank you for riding in LRT Line 2!"<<endl;
	receipt<<"\tPlease Proceed to the Train Platform"<<endl<<endl;
	receipt<<"\t++++++++++++++++++++++++++++++++++++"<<endl<<endl;
	
	receipt.close();
	system("Receipt.txt");
	
	ofstream journeyLog ("Single Journey Users.txt", ios::app);
	journeyLog<<c.Name<<setw(25-c.Name.length()+c.start.length())<<c.start<<
	setw(22-c.start.length()+c.end.length())<<c.end<<setw(25-c.end.length()+24)<<now<<endl;
	
	system("pause");
}
