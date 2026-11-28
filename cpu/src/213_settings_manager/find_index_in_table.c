/* @k10d find_index_in_table @ 0x104ac8d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte find_index_in_table(int search_value)

{
  byte index;
  int *table_ptr;

  table_ptr = (int *)&DAT_105b7324/*ROM*/;
  index = 0;
  do {
    if (search_value == *table_ptr) {
      return index;
    }
    index = index + 1;
    table_ptr = table_ptr + 1;
  } while (index < 0x20);
  return 0;
}
