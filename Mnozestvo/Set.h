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
	~Set() {
		delete arr;
	}

	int Add(int n) {
		if (isInSet(n)) {

		}
		else {
			int* temp = new int[size + 1];
			for (int i = 0; i < size; i++) {
				temp[i] = arr[i];
			}
			temp[size] = n;
			delete[] arr;
			temp = arr;
		}
	}

	int Delete(int n) {
		if (isInSet(n)) {
			int* temp = new int[size - 1];
			for (int i = 0; i < size; i++) {
				if (n != i - 1) {
					temp[i] = arr[i];
				}
				else {

				}
			}
			delete[] arr;
			temp = arr;
		}
		else {
			
		}
	}

	Set Union(Set s1) {
		Set *temp = new Set;
		for (int i = 0; i < size; i++)
		{
			temp->Add(arr[i]);
		}
		for (int i = 0; i < size; i++)
		{
			temp->Add(s1.arr[i]);
		}
		return *temp;
	}
	int Print() {
		
	}
};
}


