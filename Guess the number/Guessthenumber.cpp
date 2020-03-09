// Mojapierwszaaplikacjakonsolowa.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

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

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
