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

void mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM :" << nim;
	cout << "\nNamanya :" << nama;
	cout << "\nnilai :" << nilai;
}

class mataKuliah {
private:
	string kode;
	string namaMk;
	int sks;
public:
	void inputMk() {
		cout << "\nmasukan Kode Matakuliah :";
		cin >> kode;
		cout << "masukan Nama Matakuliah:";
		cin >> namaMk;
		cout << "masukan sks :";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nkode matakuliah :" << kode;
		cout << "\nNama matakuliah :" << namaMk;
		cout << "\nsks :" << sks;
	}
};
