/*
QUESTION:-
Given an array A[] of size n. The task is to find the largest element in it.

Example:

Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90
*/

#include <iostream>
using namespace std;

int largestElement(int arr[], int n){
	
	int largest = arr[0];
	for (int i=1; i < n; i++){
		if (largest < arr[i]){
			largest = arr[i];
		}
	}
	return largest;
}
int main(){
	int n;
	cout << "enter size of array: ";
	cin >> n;
	int* arr = new int [n];
	cout << "enter elements of array= ";
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "Largest element in array is= " << largestElement(arr , n);
	delete [] arr;
	return 0;
}
