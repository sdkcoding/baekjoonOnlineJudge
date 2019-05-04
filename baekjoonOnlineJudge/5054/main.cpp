#include <iostream>
#include <cstdlib>

using namespace std;

int compare(const void *a, const void *b)    
{
	int num1 = *(int *)a;    
	int num2 = *(int *)b;   

	if (num1 < num2)    
		return -1;     

	if (num1 > num2)    
		return 1;       

	return 0;   
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	int * location;
	int distance = 0;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		location = new int[n] {0};
		for (int j = 0; j < n; j++){
			cin >> location[j];
		}
		qsort(location, n, sizeof(int), compare);
		for (int z = 1; z < n; z++) {
			distance += location[z] - location[z - 1];
		}
		cout << distance * 2 << '\n';
		delete[] location;
		distance = 0;
	}

	return 0;
}