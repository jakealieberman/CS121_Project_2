#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

// main func
int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main

// main sort
void sort(int array[]) {
  int i, j, temp;
  for (i = 0; i < MAX - 1; i++) {
    for (j = 0; j < MAX - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        printValues(array);
      }
    }
  }
}

// end sort

// main swap
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
// end swap

// main print
void printValues(int array[]) {
  printf("[");
  for (int i = 0; i < MAX; i++) {
    printf("%d", array[i]);
    if (i < MAX - 1) {
      printf(" ");
    }
  }
  printf("]\n");
}
// end print