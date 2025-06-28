#include <iostream>

void insertionSort(int* list, int length){
    for(int i = 1; i < length; i++){
        int key = list[i];  
        int j = i - 1;
        
        while (j >= 0 && list[j] > key){
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = key; 
    } 
}

void printArray(int* list, int listLength) {
for (int i = 0; i < listLength; i++) {
printf("%d ", list[i]);
}
printf("\n");
}
int main() {
int list[] = {13, 6, 20, 1, 5};
int listLength = sizeof(list) / sizeof(list[0]);
printf("unsorted array: ");
printArray(list, listLength);
insertionSort(list, listLength);
printf("sorted array: ");
printArray(list, listLength);
return 0;
}
