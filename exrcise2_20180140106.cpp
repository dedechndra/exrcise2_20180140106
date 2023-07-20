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
