#include <iostream>

void shellSort(int* list, int length){
    for (int step = length / 2; step > 0; step /= 2){
        for (int i = step; i < length; i++){
            int temp = list[i];
            int j;
            for (j = i; j >= step && list[j - step] > temp; j -= step){
                list[j] = list[j - step];
            }
            list[j] = temp;
        }
    }
}

void printArray(int* list, int listLength) {
for (int i = 0; i < listLength; i++) {
printf("%d ", list[i]);
}
printf("\n");
}
int main() {
int list[] = {3, 21, 9, 1, 32, 5, 7, 11};
int listLength = 8;
printf("unsorted array: ");
printArray(list, listLength);
shellSort(list, listLength);
printf("sorted array: ");
printArray(list, listLength);
return 0;
}
