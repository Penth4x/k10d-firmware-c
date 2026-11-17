/* @k10d initialize_member_at_offset_0x10 @ 0x10481f24
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a new cls_105ab600 object and stores its pointer at offset 0x10 of the given
 *   object.
 * summary:
 *   Calls cls_105ab600_new with arguments 0 and 0xffffffff. Stores the returned pointer
 *   into the memory location at param_1 + 0x10. Returns 1. The specific role of the
 *   cls_105ab600 object is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_member_at_offset_0x10(void *param_1)

{
  int iVar1;
  
  iVar1 = cls_105ab600_new((uint32_t *)0x0,0xffffffff);
  *(int *)((int)param_1 + 0x10) = iVar1;
  return 1;
}
