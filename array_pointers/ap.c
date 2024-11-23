#include <stdlib.h>

#include "ap.h"

token_t** create_token_pointer_array(token_t* tokens, size_t count) {
  token_t** token_pointers = malloc(count * sizeof(token_t*));
  if (token_pointers == NULL) {
    exit(1);
  }
  for (size_t i = 0; i < count; ++i) {
    token_t* new_token = malloc(sizeof(token_t));
    *new_token = tokens[i];
    token_pointers[i] = new_token;
  }
      
    
  return token_pointers;
}
