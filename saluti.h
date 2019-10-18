#include <iostream>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand (time(NULL));
	int num = rand() % 10 + 1; //cambiare 10
	switch ( num )
	{
		case ( 1 ):
			cout<<"Ciao anche a te!\n";
			break;
		case ( 2 ):
			cout<<"Hey ciao!!!\n";
			break;
		case ( 3 ):
			cout<<"Salve!\n";
			break;
		case ( 4 ):
			cout<<"Buona giornata!\n";
			break;
		case ( 5 ):
			cout<<"Holaaa!\n";
			break;
		case ( 6 ):
			cout<<"Ehy, come va'? spero tutto bene!!\n";
			break;
		case ( 7 ):
			cout<<"Ciao amico!\n";
			break;
		case ( 8 ):
			cout<<"Ciaoooooo\n";
			break;
		case ( 9 ):
			cout<<"Hola amigos!!\n";
			break;
		case ( 10 ):
			cout<<"Salve amico, come va'?!\n";
			break;
	}
	
}
