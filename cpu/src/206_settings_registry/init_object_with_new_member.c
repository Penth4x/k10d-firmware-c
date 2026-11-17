/* @k10d init_object_with_new_member @ 0x104a33b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a new object via cls_105c1268_new, stores it at offset 0x24, then calls two
 *   initialization helpers.
 * summary:
 *   The function takes a pointer param_1, calls cls_105c1268_new with a null argument to
 *   allocate a new object, and stores the returned pointer at param_1 + 0x24. It then
 *   invokes initialize_object_subsystem_104a33da and initialize_object_subsystem_104a347e,
 *   both passing param_1 as the sole argument, likely performing further initialization
 *   steps on the object. The caller is a virtual method (slot 2) of class cls_105b6424,
 *   suggesting this is a constructor or initialization routine for that class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_new_member(int param_1)

{
  int iVar1;
  
  iVar1 = cls_105c1268_new((uint32_t *)0x0);
  *(int *)(param_1 + 0x24) = iVar1;
  initialize_object_subsystem_104a33da(param_1);
  initialize_object_subsystem_104a347e(param_1);
  return;
}
