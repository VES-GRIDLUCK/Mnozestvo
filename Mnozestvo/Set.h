#include<istream>
#include <iostream>
using namespace std;
class Set
{
private:
	int size;
	int* arr;
	bool isInSet(int n) {
		for (int i = 0; i < size; i++) {
			if (arr[i] == n)
				return true;
		}
		return false;
	}
public:
	Set() {
		size = 0;
		arr = nullptr;
	}

	Set(const int& _size) {
		size = _size;
		arr = new int[_size];
		for (int i = 0; i < size; i++) {
			int a = rand() % 100;
			if (isInSet(a)) {
				i--;
			}
			else {
				arr[i] = a;
			}
		}
	}
};


