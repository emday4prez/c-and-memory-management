void allocate_int(int **pointer_pointer, int value) {
  // ?
  int *memoryAddyForInt = malloc(sizeof(int));
  *pointer_pointer = memoryAddyForInt;
  **pointer_pointer = value;
  
}