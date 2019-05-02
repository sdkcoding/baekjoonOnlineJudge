#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	double * score;
	
	score = new double[n];
	double max = 0;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (max < score[i]) {
			max = score[i];
		}
	}

	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		score[i] = (score[i] / max) * 100;
		sum += score[i];
	}

	cout.precision(6);
	cout << fixed << sum / n << '\n';

	delete[] score;

	return 0;
}