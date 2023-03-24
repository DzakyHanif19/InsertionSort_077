#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n; //membuat variabel inputan n

void input() {
	while (true)
	{
		cout << "masukan jumlah data pada array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\n array yang anda masukan maksimal 20 elemen. \n";
		}
	}
}