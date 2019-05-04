#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Number {
public : 
	int element;
	int index;
	Number(int element, int index):element(element),index(index){}
};

bool compare1(Number num1, Number num2) {
	return num1.element < num2.element;
}

bool compare2(Number num1, Number num2) {
	return num1.index < num2.index;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<Number> v;

	int num;
	for (int i = 0; i < 8; i++) {
		cin >> num;
		v.push_back(Number(num, i + 1));
	}
	sort(v.begin(), v.end(), compare1);
	int sum = 0;
	for (int i = 3; i < 8; i++) {
		sum += v[i].element;
	}
	cout << sum << '\n';
	int min = v[2].element;
	sort(v.begin(), v.end(), compare2);
	for (int i = 0; i < 8; i++) {
		if (min < v[i].element) {
			cout << v[i].index << " ";
		}
	}
	cout << '\n';

	return 0;
}