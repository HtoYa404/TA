#include <iostream>

void merge(int* list, int start, int mid, int end){
	int mergedList[end - start + 1];	
	int k = 0;     
	int i = start;     
	int j = mid + 1;   

	while (i <= mid && j <= end){
		if (list[i] <= list[j]){
			mergedList[k++] = list[i++];
		}else{
			mergedList[k++] = list[j++];
		}
	}
	while (i <= mid){
		mergedList[k++] = list[i++];
	}

	while (j <= end){
		mergedList[k++] = list[j++];
	}

	for (int m = 0; m < k; m++){
		list[start + m] = mergedList[m];
	}
}

void mergeSort(int* list, int start, int end){
	if(start < end){
		int mid = start + (end - start) / 2;
		mergeSort(list, start, mid);
		mergeSort(list, mid + 1, end);
		merge(list, start, mid, end);	
	} 
}

void printList(int* list, int ll){
	for (int i =0; i <= ll - 1; ++i)
		std::cout << list[i] << " ";
	std::cout << std::endl;
}
int main(){
	int list[] = {4, 1, 2, 5, 12, 0, 15, 3};
	std::cout << "Unsorted arrray: ";
	printList(list, 8);

	mergeSort(list, 0, 7);
	std::cout << "Sorted Array: ";
printList(list, 8);
	return 0;
}

