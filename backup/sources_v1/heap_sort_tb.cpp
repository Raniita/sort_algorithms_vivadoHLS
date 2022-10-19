/*
*	Testbench Vivado HLS funcion heap_sort
*	Enrique y Lucia
*   src: https://www.geeksforgeeks.org/iterative-heap-sort/
*/
#include <stdio.h>

#define N 20

void swap(int &x, int &y){
/* Helper function: swap two vars */
    int tmp = x;
    x = y;
    y = tmp;
}

// function build Max Heap where value
// of each child is always smaller
// than value of their parent
void buildMaxHeap(int array[N]){
	for (int i = 1; i < N; i++){
		// if child is bigger than parent
		if (array[i] > array[(i - 1) / 2]){
			int j = i;
	
			// swap child and parent until
			// parent is smaller
			while (array[j] > array[(j - 1) / 2]){
				swap(array[j], array[(j - 1) / 2]);
				j = (j - 1) / 2;
			}
		}
	}
}

void heap_sort_sw(int array[N], int array_out[N]){
	
	int c;
    for(c=0;c<N;c++){
        array_out[c] = array[c];
        //printf("%d", array_out[c]);
		//printf(", ");
    }

	buildMaxHeap(array_out);

	for (int i = N - 1; i > 0; i--){
		// swap value of first indexed
		// with last indexed
		swap(array_out[0], array_out[i]);
	
		// maintaining heap property
		// after each swapping
		int j = 0;
		int index;
		
		do {
			index = (2 * j + 1);
			
			// if left child is smaller than
			// right child point index variable
			// to right child
			if (array_out[index] < array_out[index + 1] && index < (i - 1)){
			    index++;
			}
				
			// if parent is smaller than child
			// then swapping parent with child
			// having higher value
			if (array_out[j] < array_out[index] && index < i){
			    swap(array_out[j], array_out[index]);
			}
				
			j = index;
		
		} while (index < i);
	}
	
	return;
}

//void heap_sort(int array[N], int array_out[N])

void print_array(int array[N]){
	int i;
    printf("\n");
	for(i=0;i<N;i++){
		printf("%d", array[i]);
		printf(", ");
	}
    return;
}

void print_array_sw_hw(int array_sw[N], int array_hw[N]){
    printf("Printing arrays: array_sw | array_hw \r\n");
    int i;
    for(i=0;i<N;i++){
        printf("[%d]  SW: %d | HW: %d \r\n", i, array_sw[i], array_hw[i]);
    }
    return;
}

int main(){
    printf("Sorting Algorithms. Enrique y Lucia \r\n\n");

    int array1[N] = {13, 20, 44, 123, 66, 45, 76, 44, 33, 2,
                     7, 10, 88, 56, 90, 33, 30, 22, 60, 45};
    //int array1_size = sizeof(array1)/sizeof(array1[0]);
    int array1_out_sw[N];
    int array1_out_hw[N];
    
    // SW 
    heap_sort_sw(array1, array1_out_sw);
    printf("Bubble sort sw done.\r\n");
    
    // HW
    //heap_sort(array1, array1_out_hw);
    heap_sort_sw(array1, array1_out_hw);
    printf("Bubble sort hw done.\r\n");

    print_array_sw_hw(array1_out_sw, array1_out_hw);

    printf("\r\nExit");
    return 0;
}

