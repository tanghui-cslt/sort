#include <iostream>
using namespace std;

void heap_sort(int a[], int len);
void adjust_sort(int a[], int s, int len);
void build_heap(int a[], int len);

int main()
{
	int a[10] = { 14,2,7,4,3,6,8,9,33,5 };


	heap_sort(a, 10);

	getchar();
	return 0;
}


void heap_sort(int a[], int len)
{
	build_heap(a, len);

	for (int i = len - 1; i > 0; i--)
	{
		cout << a[0] << " " <<i << endl;
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		adjust_sort(a, 0, i);
	}
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void build_heap(int a[], int len)
{
	for (int i = 0; i <= (len - 1) / 2; i++)//对前几个序列排序
	{
		adjust_sort(a, i, len);
	}
}

void adjust_sort(int a[], int s, int len)
{
	// 下标从0开始 ， 2*s+1
	// 下标从1开始 ， 2*s , 本程序从0开始
	// 建造小根堆
	//cout << 2 * s + 1 << " " << 2 * s + 2 << endl;
	int j = 2 * s + 1;
	while (j < len)
	{
		if (j + 1 < len && a[j] > a[j + 1])	j++;
		if (a[s] > a[j])
		{
			//cout << a[s] << ' ' << s << " " << j << " " << len << " - ";
			int temp = a[s];
			a[s] = a[j];
			a[j] = temp;
			s = j;
			j = 2 * s + 1;
		}
		else
		{
			break;
		}
	}
	//cout << endl << "over\n";
	/*for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;*/
}