#include <iostream>
using namespace std;

int main (){
	int x;
	int y;
	int hasil;
	
	cout << "Input Nilai x : ";
		cin >> x;
	cout << "Input Nilai y : ";
		cin >> y;
		
	hasil=x-y;
	if(hasil<0)
	cout << hasil*-1;
	else
	cout << hasil;
	


}
