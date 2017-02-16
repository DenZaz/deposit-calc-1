#include <iostream>

using namespace std;

int verifyInput(int deposit, int days) {
	if(days < 0) return 1;
	if(days > 365) return 2;
	if(deposit < 10000) return 3;
	return 0;
}

int main() {
	int deposit, days;
	cout << "Введите размер вклада (минимум 10000): ";
	cin >> deposit;
	cout << "Введите срок вклада (до 365 дней): ";
	cin >> days;
	

	return 0;
}
