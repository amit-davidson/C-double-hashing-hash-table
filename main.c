#include <stdio.h>

#include "hash_table.h"

int main() {
  ht_hash_table* ht = ht_new();
  for (int i = 0; i < 40; i++) {
    const int enoughLen = 2;
    char str[enoughLen];
    snprintf(str, enoughLen, "%d", i);
    ht_insert(ht, str, str);
  }

  ht_del_hash_table(ht);
}