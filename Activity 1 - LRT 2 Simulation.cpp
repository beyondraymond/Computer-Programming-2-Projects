#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main(){
	
	string Name;
	string start;
	string end;
	int payment; 
	int change=0;
	int fare;
	
	cout<<"        =========================================================================================="<<endl<<endl;
	cout<<"                                       LRT Line 2 - Puprle Line                              "<<endl;
	cout<<"                                  Select From the Following Stations                         "<<endl;
	cout<<"   Santolan, Katipunan, Anonas, Cubao, Betty Go-Belmonte, Gilmore, J.Ruiz, V.Mapa, Pureza, Legarda, Recto"<<endl<<endl ;
	cout<<"        =========================================================================================="<<endl<<endl;
	
	cout<<"Enter Your Name: ";
	getline(cin, Name);
	cout<<endl;
	cout<<"Starting Station: ";
	getline(cin, start);
	while (start != "Recto" && start != "Legarda" && start != "Pureza" && start != "V.Mapa" && start != "J.Ruiz" && start != "Gilmore" && start != "Betty Go-Belmonte" && start != "Araneta-Cubao"  && start != "Anonas"  && start != "Katipunan"  && start != "Santolan"){
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, start);
	}
	cout<<endl;
	cout<<"End Station: ";
	getline(cin, end);
	while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
	}
	cout<<endl;
	
	
	if(start=="Santolan"){
		
		while (end == "Santolan") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Katipunan" || end=="Anonas" || end=="Cubao"){
			
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			if(payment>15){
				change= payment-15;
			}
			
		}
		
		if (end=="Betty Go-Belmonte" || end=="Gilmore" || end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
		if (end=="V.Mapa" || end=="Pureza" || end=="Legarda" || end=="Recto"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>25){
				change= payment-25;
			}
		}
	}
	
	//end of santolan
	
	if(start=="Katipunan"){
		
		while (end == "Katipunan") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Santolan" || end=="Anonas" || end=="Cubao" || end=="Betty Go-Belmonte"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="Pureza" || end=="V.Mapa" || end=="Gilmore" || end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
		if (end=="Legarda" || end=="Recto"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>25){
				change= payment-25;
			}
		}
	}
	
	//end of katips
	
	if(start=="Anonas"){
		
		while (end == "Anonas") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Katipunan" || end=="Santolan" || end=="Cubao" || end=="Betty Go-Belmonte"  || end=="Gilmore"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="V.Mapa" || end=="Pureza" || end=="J.Ruiz" || end=="Legarda"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
		if (end=="Recto"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>25){
				change= payment-25;
			}
		}
	}
	
	//end of anon
	
	if(start=="Cubao"){
		
		while (end == "Cubao") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Katipunan" || end=="Santolan" || end=="J.Ruiz" || end=="Betty Go-Belmonte"  || end=="Gilmore"  || end=="Anonas"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="V.Mapa" || end=="Pureza" || end=="J.Ruiz" || end=="Legarda"|| end=="Recto"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
	}
	
	//end of cubao
	
	if(start=="Betty Go-Belmonte"){
		
		while (end == "Betty Go-Belmonte") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Katipunan" || end=="V.Mapa" || end=="J.Ruiz" || end=="Cubao"  || end=="Gilmore"  || end=="Anonas"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="Santolan" || end=="Pureza" || end=="Legarda"|| end=="Recto"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
	}
	
	//end of betty
	
	if(start=="Gilmore"){
		
		while (end == "Gilmore") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Pureza" || end=="V.Mapa" || end=="J.Ruiz" || end=="Cubao"  || end=="Betty Go-Belmonte"  || end=="Anonas"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="Santolan" || end=="Katipunan" || end=="Legarda"|| end=="Recto"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
	}
	
	//end of Gilmore
	
	if(start=="J.Ruiz"){
		
		while (end == "J.Ruiz") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Pureza" || end=="V.Mapa" || end=="Gilmore" || end=="Cubao"  || end=="Betty Go-Belmonte"  || end=="Legarda"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="Santolan" || end=="Katipunan" || end=="Anonas"|| end=="Recto"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
	}
	
	//end of J.Ruiz
	
	if(start=="V.Mapa"){
		
		while (end == "V.Mapa") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Betty Go-Belmonte" || end=="Gilmore" || end=="J.Ruiz" || end=="Pureza"  || end=="Legarda" || end=="Recto"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="Katipunan" || end=="Anonas" || end=="Cubao"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
		if (end=="Santolan"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>25){
				change= payment-25;
			}
		}
	}
	
	//end of V.Mapa
	
	if(start=="Pureza"){
		
		while (end == "Pureza") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Gilmore" || end=="J.Ruiz" || end=="V.Mapa" || end=="Legarda" || end=="Recto"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="Katipunan" || end=="Anonas" || end=="Cubao" || end=="Betty Go-Belmonte"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
		if (end=="Santolan"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>25){
				change= payment-25;
			}
		}
	}
	
	//end of pureza
	
	if(start=="Legarda"){
		
		while (end == "Legarda") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="J.Ruiz" || end=="V.Mapa" || end=="Pureza" || end=="Recto"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="Anonas" || end=="Cubao" || end=="Betty Go-Belmonte" || end=="Gilmore"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
		if (end=="Santolan" || end=="Katipunan"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>25){
				change= payment-25;
			}
		}
	}
	
	//end of legarda
	
	if(start=="Recto"){
		
		while (end == "Recto") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Araneta-Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="V.Mapa" || end=="Pureza" || end=="Legarda"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>15){
				change= payment-15;
			}
		}
		
		if (end=="Cubao" || end=="Betty Go-Belmonte" || end=="Gilmore" || end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>20){
				change= payment-20;
			}
		}
		
		if (end=="Santolan" || end=="Katipunan" || end=="Anonas"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			if(payment>25){
				change= payment-25;
			}
		}
	}
	
	cout<<endl<<endl;
	cout<<"\t+++++++++++++++++++++++++"<<endl<<endl;
	cout<<"\t   LRT 2 - Purple Line"<<endl;
	cout<<"\t    Official Receipt"<<endl;
	cout<<"\t-------------------------"<<endl;
	cout<<"\tCustomer: "<<Name<<endl;
	cout<<"\tItinerary: "<<start<<" to "<<end<<endl;
	cout<<"\tCash Amount: "<<payment<<endl;
	cout<<"\tChange: "<<change<<endl;
	cout<<"\t-------------------------"<<endl;
	cout<<"\t+++++++++++++++++++++++++"<<endl<<endl;
	cout<<"\t\tThank you for riding in LRT Line 2!"<<endl;
	cout<<"\t\tPlease Proceed to the Train Platform"<<endl<<endl;
	
	
	
}

