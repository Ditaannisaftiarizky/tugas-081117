#include <iostream>
using namespace std;

int main (){
	int x;
	int y;
	int hasil;
	char BD;
	
	cout << "Pilih Program Persegi panjang (p) / Segitiga (S):"<<endl;
	cout << "-------------------------------" <<endl;
	cout << "Masukan Pilihan p/s :"; 
		cin >> BD;
	
	
if (BD=='p'){
	cout <<"Luas Persegi Panjang"<<endl;
	cout << "Masukan Nilai panjang=";
		cin >> x;
	cout <<"Masukan Nilai lebar=";
		cin >> y;
	hasil=x*y;
	cout << "L = "<<hasil<<" cm";
}

else if (BD=='s'){
	cout <<"Luas Segitiga"<<endl;
	cout <<"Masukan Nilai Alas=";
		cin >> x;
	cout <<"Masukan Nilai Tinggi=";
		cin >> y;
	hasil=0.5*x*y;
	cout << "L ="<<hasil<<"cm";
}
else {
	cout <<"Input Tidak Valid";
}
return 0;	
	
	
}
