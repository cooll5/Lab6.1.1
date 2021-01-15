#include <iostream>

using namespace std;
int array_result(int A[], int P) {
	for (int i = 0; i < 26; i++)
	{
		A[i] = rand() % 20 - 40;
		if (i % 2 == 0 || i < 0)
		{
			P += A[i];
		}
	}
	return P;
}
int output(int A[], int P) {
	cout << "Array: ";
	for (int i = 0; i < 26; i++)
	{
		cout << "[" << i << "] " << A[i] << "   ";
	}
	return 1;
}
int main() {
	int A[26];
	int P = 0;
	cout << "Result: " << array_result(A, P) << endl;
	cout << "Array: " << output(A, P) << endl;
	return 0;
}