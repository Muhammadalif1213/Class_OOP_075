#include <iostream>
using namespace std;

class mahasiswa{
private:
	int nim;
	string nama;
	float nilai;

public:
	void input() {
		cout << "masukan NIM :";
		cin >> nim;
		cout << "masukan Nama :";
		cin >> nama;
		cout << "masukan Nilai :";
		cin >> nilai;
	}
	void printData();
};
