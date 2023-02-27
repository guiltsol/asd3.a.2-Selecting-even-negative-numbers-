#include <iostream>
#include <time.h>
using namespace std;
void otbor(int* arr,int*b,int n) {
	int j = 0;
	for (int i = 0;i <n;i++) {
		if (arr[i] < 0 && arr[i] % 2 == 0)
		{
			b[j] = arr[i];
			j++;
		}
	}
}
int main() {
	int* a;
	int* b;
	int x, n,h=0;
	srand(time(NULL));
	cout << "Enter the size of the array: " << endl;
	cin >> n;
	a = new int[n];
	for (int j = 0;j < n;j++) {
		x = -10 + rand() % 20;
		a[j] = x;
	}
	cout << "Array: " << endl;
	for (int j = 0; j < n;j++)
	{
		cout << "arr[" << j << "]= " << a[j] << endl;
	}
	cout << endl;
	for (int i = 0;i < n;i++) {
		if (a[i] < 0 && a[i] % 2 == 0)
		{
			h++;
		}

	}
	b = new int[h];
	cout << "New array(negativ+nechet): " << endl;
	otbor(a,b,n);
	for (int j = 0; j < h;j++)
	{
		cout << "arr2[" << j << "]= " << b[j] << endl;
	}
	cout << endl;
	delete[] a;
	delete[] b;


	system("pause");
	return 0;
}