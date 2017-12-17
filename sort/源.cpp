#include <iostream>
using namespace std;
int n = 9;
int L[9] = {0,49,38,65,97,76,13,27,49};


int Partion(int n, int low, int high)
{
	int or_low = low;
	int or_high = high;
	//cout << high << " " << low << endl;
	if (or_low >= or_high)
	{
		return -1;
	}

	L[0] = L[low];
	while (low < high)
	{
		while ((low < high) && (L[high] >= L[0]))
			--high;
		L[low] = L[high];
		while ((low < high) && (L[low] <= L[0]))
			++low;
		L[high] = L[low];
	}
	L[low] = L[0];
	cout << high << " " << low << endl;
	for (int k = 1; k < n; k++)
	{
		cout << L[k] << "  ";
	}
	cout << endl;
	//getchar();
	Partion(n, or_low, low-1);
	Partion(n, low+1, or_high);
	return low;
}

int main()
{

	Partion(n, 1, n - 1);

	getchar();
	return 0;
}