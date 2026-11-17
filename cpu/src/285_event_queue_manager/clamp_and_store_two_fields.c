/* @k10d clamp_and_store_two_fields @ 0x10529e64
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Clamps param_2 to a maximum of 300 and stores it and param_3 into two fields of the
 *   object pointed to by param_1.
 * summary:
 *   The function calls get_sysparam_store_instance and get_sysparam_store_byte with a
 *   constant 0x1c, likely to check a condition or acquire a resource. If the result is zero
 *   and param_2 exceeds 300, it clamps param_2 to 300. It then writes the clamped value as
 *   a short to offset 0x14 of the object in param_1 and writes param_3 as a 32-bit value to
 *   offset 0x18. The caller is a virtual method slot 3 of a class, suggesting this is an
 *   object configuration or state update routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_store_two_fields(void *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((void *)uVar1,0x1c);
  if ((iVar2 == 0) && (300 < param_2)) {
    param_2 = 300;
  }
  *(short *)((int)param_1 + 0x14) = (short)param_2;
  *(uint32_t *)((int)param_1 + 0x18) = param_3;
  return;
}
