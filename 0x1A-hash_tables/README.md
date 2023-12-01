0x1A. C - Hash tables
This project includes an implementation of a sorted hash table.

Usage
To use the sorted hash table library, include the hash_tables.h header file and follow the provided function descriptions.

Example
C
#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

int main() {
  shash_table_t *ht = shash_table_create(10);

  shash_table_insert(ht, "key1", "value1");
  shash_table_insert(ht, "key2", "value2");
  shash_table_insert(ht, "key3", "value3");

  const char *value = shash_table_search(ht, "key2");
  if (value != NULL) {
    printf("key2: %s\n", value);
  } else {
    printf("key2 not found\n");
  }

  shash_table_delete(ht, "key2");

  value = shash_table_search(ht, "key2");
  if (value != NULL) {
    printf("key2: %s\n", value);
  } else {
    printf("key2 not found\n");
  }

  shash_table_destroy(ht);

  return 0;
}
Use code with caution. Learn more
This code demonstrates basic sorted hash table usage.
