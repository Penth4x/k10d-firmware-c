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

uint32_t initialize_object_subcomponent(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  iVar1 = alloc_pool_and_init_task((int *)(param_1 + 0x1c),0x10,0x2000,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    pvVar3 = (void *)cls_105a2af8_new((uint32_t *)0x0);
    *(void **)(param_1 + 0x70) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      iVar1 = wait_flg_obj(pvVar3,0);
      uVar2 = 1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
