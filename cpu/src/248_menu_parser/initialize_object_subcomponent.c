/* @k10d initialize_object_subcomponent @ 0x104deba8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a sub-object stored at offset 0x70 of the target structure.
 * summary:
 *   The function first calls alloc_pool_and_init_task with a pointer to offset 0x1c of the
 *   input parameter. If that call succeeds, it allocates a new instance of cls_105a2af8 and
 *   stores the pointer at offset 0x70 of the input structure. It then calls wait_flg_obj on
 *   the new object with an argument of 0. Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

uint32_t initialize_object_subcomponent(cls_105bb0ec *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  iVar1 = alloc_pool_and_init_task(&param_1->field_0x1c,0x10,0x2000,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    puVar3 = (uint32_t *)cls_105a2af8_new((cls_105a2af8 *)0x0);
    param_1->field_0x70 = (uintptr_t)(puVar3);
    if (puVar3 == (uint32_t *)0x0) {
      uVar2 = 0;
    }
    else {
      iVar1 = wait_flg_obj(puVar3,0);
      uVar2 = 1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
