#include <iostream>

int partition(int* list, int low, int high){
    int pivot = list[high];
    int i = low - 1;
    for (int j = low; j < high; j++){   
        if (list[j] <= pivot){
			std::swap(list[++i], list[j]);  
        }
    }
    std::swap(list[i + 1], list[high]);
    return i + 1;
}

void quickSort(int* list, int low, int high){
    if(low < high){
        int pi = partition(list, low, high);
        quickSort(list, low, pi - 1);
        quickSort(list, pi + 1, high);
    }
}
void printArray(int* list, int listLength) {
for (int i = 0; i < listLength; i++) {
printf("%d ", list[i]);
}
printf("\n");
}
int main() {
int list[] = {2, 13, 6, 20, 1, 5};
int listLength = 6;
printf("unsorted array: ");
printArray(list, listLength);
quickSort(list, 0, listLength - 1);
printf("sorted array: ");
printArray(list, listLength);
return 0;
}
