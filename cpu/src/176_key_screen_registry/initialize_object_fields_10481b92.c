/* @k10d initialize_object_fields_10481b92 @ 0x10481b92
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Stores a value from param_2 at offset 8 and initializes three object pointers at
 *   offsets 0xc, 0x10, and 0x14.
 * summary:
 *   The function writes the first word of param_2 to offset 8 of the object pointed to by
 *   param_1. It then calls three constructor functions (cls_105ab540_new, cls_105ab6a0_new,
 *   cls_105ab6c0_new) with a null argument and stores the resulting pointers at offsets
 *   0xc, 0x10, and 0x14 respectively. It returns 1 upon completion. The specific roles of
 *   the initialized sub-objects are not determinable from the provided pseudocode and
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_fields_10481b92(void *param_1,uint32_t *param_2)

{
  int iVar1;
  
  *(uint32_t *)((int)param_1 + 8) = *param_2;
  iVar1 = cls_105ab540_new((uint32_t *)0x0);
  *(int *)((int)param_1 + 0xc) = iVar1;
  iVar1 = cls_105ab6a0_new((uint32_t *)0x0);
  *(int *)((int)param_1 + 0x10) = iVar1;
  iVar1 = cls_105ab6c0_new((uint32_t *)0x0);
  *(int *)((int)param_1 + 0x14) = iVar1;
  return 1;
}
