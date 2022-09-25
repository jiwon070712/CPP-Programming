#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}