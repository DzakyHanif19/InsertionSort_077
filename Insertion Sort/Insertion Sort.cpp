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
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + i) << ": ";
		cin >> arr[i];
	}
}

void insertionsort() {}