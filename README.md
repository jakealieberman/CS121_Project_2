# CS121 Project 2

## Functions to be built
* printValues(int array[])
* swap(int *a, int *b)
* sort(int array[])
* main()

## printValues(int array[])
* Inputs
    * array[] - an array of integers(int[]), size defined by MAX (constant = 9)
* steps
    * Print an opening square bracket 
    * loop through the array from index 0 to MAX - 1
    * for each element:
        * Print the element as an integer
        * If it's not the last element, print a space
    * After the loop print a closing bracket and a new line
* Returns: Nothing (void)

## swap(int *a, int *b)
* inputs
    * *a - pointer to the first integer
    * *b - pointer to the second integer
* steps
    * store the value at *a in a temporary variable temp
    * assign the value at *b to *a
    * assign the vfalue of temp to *b
* Returns: Nothing (void)

## sort(int array[])
* inputs
    * array[] - an array of integers
* steps
    * loop through the array from index i = 0 to MAX - 2
    * for each i, loop j from 0 to MAX - 2 - i
    * if array[j] > array[j+1]
        * swap array[j] and array[j+1]
        * call printValues(array) 
    * repeat until the entire array is sorted
* Returns: Nothing (void)

## main()
* inputs
    * none
* steps
    * declare and initialize an integer array called values
    * print "Before:"
    * call printValues(values) to show the initial array
    * declare integers x = 3 and y = 5
    * print x and y before the swap
    * call swap (&x, &y) to swap their values
    * print x and y after the swap
    * call sort(values) to sort the array
    * print "After:"
    * call printValues(values) to show the sorted array
    * Return 0
* Returns: int (returns 0 to show it worked)
