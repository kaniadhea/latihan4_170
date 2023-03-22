#include <iostream>
using namespace std;

float LuasPersegi(float p, float 1) {
	return p * 1;
}
float LuasLingkaran(float r) {
	return 3.14 * r * r;
}
float LuasSegitiga(float a, float t) {
	return 0.5 * a + t;
}

int main() {
	float panjang, lebar, jejari, alas, tinggi;
	int pilihan;

	do {
		cout << "\n\n=================" << endl;
		cout << "=====MENU============" << endl;
		cout << "=====================" << endl;
		cout << "1. Luas Persegi" << endl;
		cout << "2. Luas Lingkaran" << endl;
		cout << "3. Luas Segitiga" << endl;
		cout << "4.Exit" << endl;
		cout << "pilihan (1/2/3/4) = ";
		cin >> pilihan;

		switch (pilihan) {
			case 1
				cout << "Masukan panjang = ";
				cin >> panjang;
				cout << "Masukan Lebar = ";
				cin >> lebar;
				cout << "luas persegi panjang = " << LuasPersegi(panjang, lebar)
					break;
				case 2
					cout << "masukan jari-jari = ";
					cin >> jejari
						cout << Luas Lingkaran = "<< LuasLingkaran (jejari)";
					break;
					case 3
						cout << "masukan alas = ";
						cin >> alas
							cout << "masukkan tinggi =";
						cin >> tinggi;
						cout << "luas segitiga = " << LuasSegitiga(alas, tinggi)
							break;
						case 4
							break;
						default:
							cout << "PILIHAN SALAH" << endl;
							break;
		}
	} while (pilihan != 4);
}