/* @k10d check_and_set_object_flag_10499d0a @ 0x10499d0a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_and_set_object_flag_10499d0a(int param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)compute_struct_array_offset(*(int *)(param_1 + 4),0);
  if (((puVar1[0xc] != 0) && (puVar1[6] != 0)) && (puVar1[7] == 1)) {
    *puVar1 = 0xa0;
    puVar1[1] = 0x78;
    puVar1[8] = 0xffffffff;
    puVar1[10] = 1;
    *(uint8_t *)(puVar1 + 0xd) = 1;
  }
  return *(uint8_t *)(puVar1 + 0xd);
}
