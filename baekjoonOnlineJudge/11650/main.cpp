#include <bits/stdc++.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n;
	std::cin >> n;
	int* x = new int[n]();
	int* y = new int[n]();
	for (int i = 0; i < n; i++) {
		std::cin >> x[i];
		std::cin >> y[i];
	}

	for (int i = 0; i < n; i++) {
		std::cout << x[i] << " ";
		std::cout << y[i] << '\n';
	}
	return 0;
}