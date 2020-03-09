

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int wczytana, wylosowana;
	cout << "Witaj w grze" << endl;
	cout << "Odgadnij liczbe" << endl;

	srand( ( unsigned )time( NULL ) );
	wylosowana = rand() % 100 + 1;

	do 
	{
		cout << ">" << flush;
		cin >> wczytana;
		if (wczytana > wylosowana) {
			cout << "Twoja liczba jest za duza" << endl;
		}
		else if (wczytana < wylosowana) {
			cout << "Twoja liczba jest za mala" << endl;
		}
		else {
			cout << "Wygrales!" << endl;
		}
	}
while (wczytana != wylosowana);
return EXIT_SUCCESS;

cin.ignore();
cin.get();
}

