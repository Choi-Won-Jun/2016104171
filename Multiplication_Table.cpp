#include <iostream>
using namespace std;

void Multiplication_Table(int max_size) {	// ¸î ´Ü
	for (int i = 1; i <= max_size; i++)
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
}

int main() {
	Multiplication_Table(8);	// 8´Ü
	return 0;
}