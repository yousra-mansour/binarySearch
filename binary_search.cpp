#include<iostream>
#include<array>
using namespace std;

int binarySearch(int a[], int key ,int sizearr);

int main() {

	int a[] = { 0,1,2,3,4,5,6,7,8,9};
    cout << binarySearch(a, 9, size(a) - 1);

	return 0;
}

int binarySearch(int a[], int key, int sizearr)
{
	int low = 0;
	int hight = sizearr;
	while (low <= hight)
	{
		int mid = low + ((hight - low)/ 2);
		if (key < a[mid]) 
		{ 
			hight = mid - 1; 
		}
		else if (key > a[mid]) 
		{
			low = mid + 1;
		} 
		else 
			return mid;

	}
	return -1;
}
