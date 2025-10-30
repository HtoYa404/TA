#include <iostream>

int findSmallestPosition(int* list, int listLength, int startPosition){
    int smallestPosition = startPosition;
    for(int i = startPosition; i <= listLength - 1; ++i){
        if(list[smallestPosition] > list[i]){
            smallestPosition = i;
        }        
    }
    return smallestPositio

void selectionSort(int* list, int listLength){
    for(int i = 0; i < listLength - 1;++i){
        int smallestPosition = findSmallestPosition(list, listLength, i);       
        if(i != smallestPosition) std::swap(list[i], list[smallestPosition]);
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
int listLength = 5;
printf("unsorted array: ");
printArray(list, listLength);
selectionSort(list, listLength);
printf("sorted array: ");
printArray(list, listLength);
return 0;
}
