#include<iostream>
using namespace std;

const int LEN = 80;

class employee
{
private:
	char name[LEN];
	unsigned long number;
public:
	friend istream& operator>>(istream& s, employee& e);
	friend ostream& operator>>(ostream& s, employee& e);
};
