#include <stdlib.h>
#include <stdio.h>

const int* pLinearSearch(const int* arr, size_t arr_size, int search_value);

int main(int argc, char** argv){
  int arr[] = {1, 6, 4, 2, 4, 1, 100, 66};

  int search_value = 67;
  if (argc==2){
    search_value = atoi(argv[1]);
  }
  const int* element_found = pLinearSearch(arr, sizeof(arr)/sizeof(arr[0]), search_value);
  
  if (element_found){
    printf("Element %d is found in the array\nFound at index: %lu\n", *element_found, element_found - arr);
  } else {
    printf("Element %d is not found in the array\n", search_value);
  }
}

const int* pLinearSearch(const int* arr, size_t arr_size, int search_value){
  for (int i=0; i<arr_size; ++i){
    if (arr[i] == search_value){
      return (arr+i);
    }
  }
  return NULL;
}

