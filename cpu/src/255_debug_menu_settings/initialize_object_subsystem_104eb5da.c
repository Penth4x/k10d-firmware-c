/* @k10d initialize_object_subsystem_104eb5da @ 0x104eb5da
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Allocates a sub-object, initializes its fields, and links it into the parent structure.
 * summary:
 *   Calls get_or_create_singleton_object_10521e8e to obtain a pointer, stores it at
 *   param_1+0x90, and invokes a virtual method (slot 2) on it. It then calls two functions
 *   at 0x10522008 and 0x10522002 passing the new pointer, storing results at param_1+0x98
 *   and param_1+0x94. Finally, it propagates these pointers to other fields within the
 *   param_1 structure and related objects pointed to by param_1+0x5c, param_1+0x60, and
 *   param_1+0x3c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_subsystem_104eb5da(int param_1)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  
  piVar2 = (int *)get_or_create_singleton_object_10521e8e();
  *(int **)(param_1 + 0x90) = piVar2;
  (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10),0);
  uVar3 = (*(code *)0x10522008/*ROM*/)(*(uint32_t *)(param_1 + 0x90));
  *(uint32_t *)(param_1 + 0x98) = uVar3;
  uVar3 = (*(code *)0x10522002/*ROM*/)(*(uint32_t *)(param_1 + 0x90));
  *(uint32_t *)(param_1 + 0x94) = uVar3;
  (*(code *)0x104e0d42/*ROM*/)(*(uint32_t *)(param_1 + 0x34),*(uint32_t *)(param_1 + 0x98));
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc) + 4;
  }
  *(int *)(*(int *)(param_1 + 0x98) + 0x18) = iVar1;
  *(uint32_t *)(*(int *)(param_1 + 0x5c) + 0x1c) = *(uint32_t *)(param_1 + 0x98);
  *(uint32_t *)(*(int *)(param_1 + 0x60) + 0x1c) = *(uint32_t *)(param_1 + 0x98);
  *(uint32_t *)(*(int *)(param_1 + 0x3c) + 0x4c) = *(uint32_t *)(param_1 + 0x94);
  return;
}
