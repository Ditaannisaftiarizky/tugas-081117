#include <iostream>
using namespace std;

int main(){
	int tinggibdn, beratbdn, hasil1, hasil2;
	
	cout << "Input Tinggi Badan =";
		cin >> tinggibdn;
	cout << "Input Berat Badan=";
	cin >> beratbdn;
	
if (beratbdn<(tinggibdn/2.5)){
	cout << "Anda Termasuk Underweight";
}
else if ((tinggibdn/2.5)<=beratbdn<-(tinggibdn/2.3)){
	cout <<"Anda Termasuk Normal";
}
else if ((tinggibdn/2.3)<beratbdn){
	cout <<"Anda Termasuk Overweight";
}
else{
	cout <<"Input Tidak Valid";
}
}

