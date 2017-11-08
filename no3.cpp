#include <iostream>
using namespace std;

int main(){
	double jamkrj, lamalmbr, jmllmbr, jmtot;
	long gjtot, gjber;
	
	cout << "Hitung Gaji Pegawai"<<endl;
	cout <<"================================"<<endl;
	cout <<"Lama Jam Kerja Karyawan=" ;
		cin >> jamkrj;
	
if (jamkrj>40){
	cout <<"Gaji Pokok = rp. 2000.000"<<endl;
	cout <<"Jam Kerja Standard = 40 jam"<<endl;
		lamalmbr=jamkrj-40;
	cout << "Lembur = "<<lamalmbr<<"jam"<<endl;
		jmllmbr*1.5;
		jmtot=40+jmllmbr;
	cout <<"Total Jam Kerja ="<<jmtot<<"jam"<<endl;	
		gjtot=2000000+(jmllmbr*100000);
	cout << "Totl Gaji ="<<gjtot<<endl;
	cout << "Potongan = 15%"<<endl;
		gjber= gjtot - (0.15*gjtot);
	cout << "Gaji Bersih =" <<"Rp.  "<<gjber;
}
else if (jamkrj<40){
	cout <<"Gaji Pokok = rp. 2000.000"<<endl;
	cout <<"Jam Kerja Standard = 40 jam"<<endl;
		lamalmbr=jamkrj-40;
	cout << "Lembur = "<<lamalmbr<<"jam"<<endl;
		jmllmbr*1.5;
		jmtot=40+jmllmbr;
	cout <<"Total Jam Kerja ="<<jmtot<<"jam"<<endl;	
		gjtot=2000000+(jmllmbr*100000);
	cout << "Totl Gaji ="<<gjtot<<endl;
	cout << "Potongan = 15%"<<endl;
		gjber= gjtot - (0.15*gjtot);
	cout << "Gaji Bersih =" <<"Rp.  "<<gjber;
}	
return 0;	
}
