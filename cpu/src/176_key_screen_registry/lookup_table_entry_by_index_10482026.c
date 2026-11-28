/* @k10d lookup_table_entry_by_index_10482026 @ 0x10482026
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_table_entry_by_index_10482026(void *registry)
{
  int key_index;
  uint32_t entry;
  uint8_t *dummy;

  key_index = screen_key_find(registry, dummy);
  if (key_index < 0) {
    entry = *(uint32_t *)((int)registry + 0x10);
  }
  else {
    int table_base = *(int *)((int)registry + 0xc);
    entry = *(uint32_t *)(table_base + key_index * 8);
  }
  return entry;
}
