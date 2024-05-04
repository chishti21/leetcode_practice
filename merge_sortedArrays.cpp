#include<iostream>
using namespace std;
int main()
{
	int* num1, * num2, * num3;
	int n1 = 5, n2 = 3;
	int n3 = n1 + n2;
	num1 = new int[n1];
	num2 = new int[n2];
	num3 = new int[n3];
	cout << "enter elements of array1 " << endl;
	for (int i = 0; i < n1; i++)
	{
		cin >> num1[i];
	}
	cout << "enter elements of array 2 " <<endl;
	for (int i = 0; i < n2; i++)
	{
		cin >> num2[i];
	}
	int n;
	cout << "enter value of n " << endl;
	cin >> n;
	int i = 0, j = 0,k=0;
	while (i < n && j < n2)
	{
		if (num1[i] <= num2[j])
		{
			num3[k++] = num1[i++];
		}
		else
		{
			num3[k++] = num2[j++];
		}
	}
	while (j < n2)
	{
		num3[k++] = num2[j++];
	}



	cout << "3rd array " << endl;
	for (int i = 0; i <n+n2; i++)
	{
		cout << num3[i] << "  ";
	}
	return 0;
}
