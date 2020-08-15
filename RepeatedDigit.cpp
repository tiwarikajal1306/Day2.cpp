#include <iostream>

using namespace std;

int array[9];
int arrayIndex =0;
int main()
{
	for( int i = 1; i <= 100; i++) {
		if( i % 11 == 0) {
			array[arrayIndex++] = i;
		}
	}

	for( int arr : array ) {
		cout << arr << endl;
	}
	return 0;
} 
