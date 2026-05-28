/*
QUESTION:-
Given an array Arr of size N, print second largest distinct element from an array.

Example:

Input:
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the
array is 35 and the second largest element
is 34.
*/

#include <iostream>
#include <climits>
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
int secondLargestElement(int arr [], int n, int largest){
	int secondLargest = INT_MIN;
	for (int i= 0; i < n; i++){
		if (arr[i] == largest){
			continue;
		}
		if (secondLargest < arr[i] && secondLargest < largest){
			secondLargest = arr[i];
		}
	}
	return secondLargest;
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
	int largest = largestElement(arr , n);
	cout << "Second largest element in array is= " << secondLargestElement(arr , n, largest);
	delete [] arr;
	return 0;
}
