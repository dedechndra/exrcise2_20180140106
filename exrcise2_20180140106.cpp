#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;

public:
	bidangDatar() {
		x = 0;
	}

	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};




class Lingkaran : public bidangDatar {
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari: ";
		int jejari;
		cin >> jejari;
		setX(jejari);
	}

	float Luas() {
		return 3.14 * getX() * getX();
	}

	float keliling() {
		return 2 * 3.14 * getX();
	}
};
class Bujursangkar :public bidangDatar {
public:
	void input() {
		cout << "Bujursangkar dibuat " << endl;
		cout << "Masukkan sisi: ";
		int sisi;
		cin >> sisi;
		setX(sisi);
	}

	float Luas() {
		return getX() * getX();
	}

	float keliling() {
		return 4 * getX();
	}
};
int main() {
	bidangDatar* objek;

	objek = new Lingkaran();
	objek->input();
	float Luas();
	float keliling();

	objek = new Bujursangkar();
	objek->input();
	float Luas();
	float keliling();

	delete objek;

	return 0;
}

