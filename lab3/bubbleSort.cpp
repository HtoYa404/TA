#include <iostream>

void bubbleSort(int* list,const int listLength){
    bool swapped = false;
    while(listLength>1){
        for(int i = 0; i < listLength - 1; ++i){
            if(list[i] > list[i+1]){
                std::swap(list[i], list[i+1]);
                swapped = true;
            }   
        }
        if(!swapped) break;
        swapped = false;
    } 
}

void printArray(int* list, int listLength) {
for (int i = 0; i < listLength; i++) {
printf("%d ", list[i]);
}
printf("\n");
}
int main() {
int list[] = {13, 5, 20, 1, 5};
int listLength = sizeof(list) / sizeof(list[0]);
printf("unsorted array: ");
printArray(list, listLength);
bubbleSort(list, listLength);
printf("sorted array: ");
printArray(list, listLength);
return 0;
}
