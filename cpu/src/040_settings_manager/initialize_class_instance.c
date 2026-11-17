/* @k10d initialize_class_instance @ 0x10391c2c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new instance of cls_10562400 and initializes it via a helper function.
 * summary:
 *   Calls cls_10562400_new(0) to allocate an object and stores the pointer in *param_1. If
 *   allocation succeeds, it calls get_or_create_singleton_object_10521e8e to get a
 *   context/parameter and then invokes a function at 0x10521fd2 with that context and an
 *   offset (0x98) into the allocated object. Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_class_instance(int *param_1, uint32_t param_x1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = cls_10562400_new(0);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = get_or_create_singleton_object_10521e8e();
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_1 + 0x98;
    }
    (*(code *)0x10521fd2/*ROM*/)(uVar2,iVar1);
    uVar2 = 1;
  }
  return uVar2;
}
