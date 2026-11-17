/* @k10d store_clamped_value_at_offset @ 0x10529e9e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Writes a clamped integer and a raw value into a struct at fixed offsets.
 * summary:
 *   The function calls get_sysparam_store_instance and get_sysparam_store_byte with a
 *   constant 0x1c, likely to check a condition or retrieve a limit. It clamps param_2 to a
 *   maximum of 200 if the check passes and param_2 is greater than 200. It then stores the
 *   clamped value as a short at offset 0x16 of param_1 and stores param_3 as a 32-bit value
 *   at offset 0x1c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_clamped_value_at_offset(void *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((void *)uVar1,0x1c);
  if ((iVar2 == 0) && (200 < param_2)) {
    param_2 = 200;
  }
  *(short *)((int)param_1 + 0x16) = (short)param_2;
  *(uint32_t *)((int)param_1 + 0x1c) = param_3;
  return;
}
