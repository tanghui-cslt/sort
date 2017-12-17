#include <iostream>
using namespace std;

void print(int a[], int n, int i) {
	cout << i << ":";
	for (int j = 0; j < n; j++) {
		cout << a[j] << " ";
	}
	cout << endl;
}


void simple_select_sort(int a[], int n) {
	for (int i = 0; i < n-1; i++)
	{
		int min = a[i];
		int k = i;
		for (int j = i+1 ; j < n; j++)
		{
			if (min > a[j])
			{
				min = a[j];
				k = j;
			} 
						
		}
		if (k == i )
		{
			continue;
		}
		cout << min << " " << k << endl;
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
		print(a, n, n);

	}

}
int main() {
	int a[9] = { 3,1,5,7,2,4,9,6,0 };
	int n = 9;
	simple_select_sort(a, n);
	print(a, n, n);

	getchar();
}
