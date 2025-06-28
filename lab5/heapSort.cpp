#include <iostream>

void printArray(int* list, int listLength) {
	for (int i = 0; i < listLength; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}

void heapify(int* list, int listlength, int root){
	int l = 2*root + 1;
	int r = 2*root + 2;
	int largest = (listlength > l && list[l] > list[root]) ? l : (listlength > l && list[l] > list[root]) ? r : root;
	if(largest != root){
		std::swap(list[root], list[largest]);
		heapify(list, listlength, largest);
	}	
}

void heapSort(int* list, int listLength){
	for(int i = listLength/2 - 1; i >= 0; --i){
		heapify(list, listLength, i);	
	}	
	for(int i = listLength - 1; i >= 0; --i){
		std::swap(list[0], list[i]);
		heapify(list, i, 0);
	}
}

int main(){
	int arr[] = {4, 10, 3, 5, 1};
	std::cout << "unsorted array: ";
	printArray(arr, 5);	
	heapSort(arr,5);
	std::cout << "sorted array: ";
	printArray(arr, 5);
	return 0;
}
