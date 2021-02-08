 #include<iostream>
 using namespace std;
 
 int binarySearch(int arr[], int N, int x);
 
 int main() {
 	int N, x;
 	cout << "enter array length --> ";
 	cin >> N;
 	int arr[N];
 	for (int i = 0; i < N; i++) 
 		arr[i] = i + 1;
 	cout << "enter the number to search --> ";
 	cin >> x;
 	int result = binarySearch(arr, N, x);
 	if (result >= 0)
 		cout << "index: " << result << endl;
 	else 
 		cout << "the number isn't in the array :( " << endl;
 }
                 //array, array.length, number to search
int binarySearch(int arr[], int N, int x) {
	// min number index
	int low = 0;
	// max number index
	int high = N - 1;
	// middle index
	int mid;
	while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }
  return -1;
}
