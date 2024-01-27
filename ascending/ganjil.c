#include <stdio.h>

int main() {

  int arr[] = {8, 17, 42, 3, 11, 14, 19, 33, 7, 25}; 

  int n = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;
  
  printf("Bilangan ganjil : ");
  
  for(int i=0; i<n; i++) {
    if(arr[i] % 2 != 0) {
      printf("%d ", arr[i]);
      sum += arr[i];
    }
  }

  printf("\nJumlah bilangan ganjil jika ditambahkan: %d", sum);

  return 0;
}
