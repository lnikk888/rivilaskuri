#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

	string rivi;
	cout << "===[ Rivilaskuri ]==[ versio 1.0 ]===" << endl << endl;

	if (argc < 2) {
		cout << "Tiedoston nimeä ei annettu!" << endl << endl;
		cout << "Käyttöesimerkki:" << endl << endl;
		cout << "\t\trivilaskuri <tiedosto.txt>" << endl << endl;
		exit(-1);
	}

	cout << "=== Tiedoston " << argv[1] << " sisältö ===" << endl << endl;

	fstream tiedosto;
	tiedosto.open(argv[1], ios_base::in);
	if (tiedosto.is_open()) {
		int i = 1;
		while (tiedosto >> rivi) {
			cout << "[" << i << "]:" << rivi << endl;
			i++;
		}
		tiedosto.close();
		cout << endl << "=== Loppu, tiedostossa on yhteensä " << i-1 << " riviä ===" << endl;

	} else {
		cout << "Virhe: Tiedostoa ei voitu avata!" << endl;
		exit(-1);
	}
}

