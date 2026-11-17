/* @k10d copy_three_fields_into_object @ 0x104745a6
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies three values from a source array into fixed offsets of a destination object and
 *   returns 1.
 * summary:
 *   Writes param_2[0] to offset +4 and param_2[1] to offset +8 of param_1, stores the
 *   pointer param_2[2] at offset +0x48, then calls copy_if_flag_set on the sub-object at
 *   offset +0xc with that pointer. Returns constant 1. The destination object is 0x4c bytes
 *   per the class layout, and this is virtual slot 2 of cls_105aa374.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_three_fields_into_object(void *param_1,uint32_t *param_2)

{
  uint8_t *puVar1;
  
  *(uint32_t *)((int)param_1 + 4) = *param_2;
  *(uint32_t *)((int)param_1 + 8) = param_2[1];
  puVar1 = (uint8_t *)param_2[2];
  *(uint8_t **)((int)param_1 + 0x48) = puVar1;
  copy_if_flag_set((uint8_t *)((int)param_1 + 0xc),puVar1);
  return 1;
}
