#include <iostream>
using namespace std;

int bitManipulation3(int n, int i) {
// �ڴ˴�������Ĵ���
	return (-1<<(32-i))^n;
}

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n >> i;
		cout << bitManipulation3(n, i) << endl;
	}
	return 0;
}
