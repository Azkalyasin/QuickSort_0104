
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
	int temp;
	int pivot, i, j;
	if (low > high) { //step 1
		return;
	}

	pivot = arr[low];//step 2
	i = low + 1; //step 3
	j = high; // step 4

	while (i <= j) // step 10
	{
		while ((arr[i] <= pivot) && (i <= high)) { // step 5

			i++; // step 6
			cmp_count++;
		}
		cmp_count++;
		while ((arr[j] > pivot) && (j >= low)) // step 7
		{
			j--; // step 8
			cmp_count++;
		}
		cmp_count++;
		if (i < j) //step 9
		{
			swap(i, j);
		}
	}

	if (low < j) // step 11
	{
		swap(low, j);
	}

	q_short(low, j - 1);// step 12

	q_short(j + 1, high);// step 13
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element attay yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n\nNumber of comparasion: " << cmp_count<< endl;
	cout << "Number of data movements: " << mov_count << endl;
}

int main()
{
	char ch;

	do
	{
		input();
		q_short(0, n - 1);
		display();
		cout << "\n\n Do you want to continue? (y/n): ";
		cin >> ch;
		if (ch == 'n' || ch == 'N')
			break;

		system("pause");
		system("cls");
	} while (true);
}
