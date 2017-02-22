/*use a function to find the maximum and minimum from an integer array*/
#include <stdlib.h>
#include <iostream>
using namespace std;

int getMaxOrMin(int *array, int count, bool isMax) {
	int temp = array[0];
	for(int i = 1; i < count; i++){
		if (isMax) {
			if (temp < array[i]) {
				temp = array[i];
			}
		}
		else {
			if (temp > array[i]) {
				temp = array[i];
			}
		}
	}
	return temp;
}

int main(void) {
	int a[4] = { 1,4,7,6 };
	bool isMax = false;
	cin >> isMax;
	cout<<getMaxOrMin(a, 4, isMax)<<endl;
	system("pause");
	return 0;
}