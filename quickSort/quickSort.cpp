
#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan banyak element pada array: ";
		cin >> n;
		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray ddapat mempunyai maksimal 20 " << endl;
		}
	}

	cout << endl;
	cout << "\n======================" << endl;
	cout << "\nMasukkan element Array" << endl;
	cout << "\n======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void swap(int x, int y) {
	int temp = arr[x];
	arr[x] = arr[y];
	mov_count++;
}

void q_short(int low, int high) {

}


int main()
{

}
