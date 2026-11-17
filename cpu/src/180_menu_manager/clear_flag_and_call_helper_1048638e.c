/* @k10d clear_flag_and_call_helper_1048638e @ 0x1048638e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool clear_flag_and_call_helper_1048638e(int param_1,int param_2)

{
  bool bVar1;
  
  *(uint8_t *)(param_1 + 0x50) = 0;
  bVar1 = check_heap_alloc_success((int *)(param_1 + 0x40),param_2);
  return bVar1;
}
