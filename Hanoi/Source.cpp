#include<iostream>

using namespace std;

void Move(int n, char from, char to, char help) {
	if (n > 1) {
		cout << "from = " << from << " help = " << help << " to = " << to << endl;
		Move(n - 1, from, help, to);
		cout << "Move from " << from << " to " << to << endl;
		cout << "from = " << from << " help = " << help << " to = " << to << endl;
		Move(n - 1, help, to, from);
	}
	cout << "Move from " << from << " to " << to << endl;
}
int main(){
	char A = 'A', B = 'B', C = 'C';
	int n = 0;
	for (int i = 1; i <= 7; i++) {
		n = i * 5;
		clock_t t1 = clock();
		Move(n, A, B, C);
		clock_t t2 = clock();
		cout << float((t2 - t1) / CLOCKS_PER_SEC) << endl;
	}
	return 0;
	}