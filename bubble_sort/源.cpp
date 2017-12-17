#include <iostream>
using namespace std;

void print(int a[], int n, int i) {
	cout << i << ":";
	for (int j = 0; j < n; j++) {
		cout << a[j] << " ";
	}
	cout << endl;
}


void bubble_sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		int min = a[i];
		for (int j = 0; j < n-i-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				min = a[j];
				a[j] = a[j + 1];
				a[j + 1] = min;
			}

		}
		print(a, n, n);

	}

}
int main() {
	int a[9] = { 3,1,5,7,2,4,9,6,0 };
	int n = 9;
	bubble_sort(a, n);
	print(a, n, n);

	getchar();
}
