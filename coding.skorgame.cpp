#include <iostream>
using namespace std;

int main(){
	cout << "==================================================" << endl;
	cout << "          Selamat Datang Di Game Hunter" << endl;
	cout << " Lakukan Perburuan Dengan Kombo Sebanyak Mungkin" << endl;
	cout << "         Dan Dapatkan Hadiah Tersembunyi" << endl;
	cout << "==================================================" << endl;
	
	int hadiah;
	int peti;
	int kombo;
	
	cout << "Masukkan skor kombo anda = ";
	cin >> kombo;
	cout << "Selamat Anda Mendapatkan = ";
	if (kombo < 50){
		hadiah = peti;
		cout << "Peti Perunggu" << endl;
	} else if (kombo >= 50 && kombo < 100){
		hadiah = peti;
		cout << "Peti Perak" << endl;
	} else if (kombo >= 100 && kombo < 200){
		hadiah = peti;
		cout << "Peti Emas" << endl;
	} else{
		hadiah = peti;
		cout << "Peti Mitos" << endl;
	} cout << "Maksimalkan Hadiah Yang Anda Dapatkan Tuan";
	
	return 0;
}

