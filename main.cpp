#include <iostream>
#include 'saluti.h'
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int comando;
	do {
	
	system("CLS");
	system("Title Assistente Virtuale");
	system("Color 4b");
	cout<<"Ciao! Sono il tuo assistente virtuale, \nper iniziare scegli un comando tra questi:\n1) Saluta	2) Apri il Blocco Note	3) Apri la Calcolatrice \nInserisci il comando : ";
	cin>>comando;
	
	switch ( comando )
	{
		case ( 1 ):
			cout<<"Ciao anche a te!\n";
			break;
		case ( 2 ):
			system("notepad");
			break;
		case ( 3 ):
			system("calc");
			break;
		default:
			cout<<"Uhm... questo comando non l'ho ancora imparato...";
			break;
	}
	
	system("Pause");
	}while(true);
}
