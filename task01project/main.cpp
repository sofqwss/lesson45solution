#include "logic.h"

int main() {
	int* pointer;
	int size;

	cout << "Input size of array: ";
	cin >> size;

	pointer = new int[size];

	init(pointer, size, -20, 20);
	cout << "Array: " << convert(pointer, size) << endl;

	return 0;
}