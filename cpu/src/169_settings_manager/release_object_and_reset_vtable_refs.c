/* @k10d release_object_and_reset_vtable_refs @ 0x1047daae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 4 on multiple objects and clears a pointer field in the input
 *   struct.
 * summary:
 *   The function retrieves pointers from five helper functions and the input parameter,
 *   invoking virtual method slot 4 (offset 0x24) on each. It also conditionally invokes
 *   virtual slot 1 (offset 0xc) on the object pointed to by param_1+4 before nulling that
 *   field. The specific subsystem is not identifiable from the provided callees or code
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_and_reset_vtable_refs(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)get_or_create_sram_object_1047dd7a();
  (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  iVar2 = **(int **)(param_1 + 4);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  *(uint32_t *)(param_1 + 4) = 0;
  piVar1 = (int *)get_or_create_singleton_object_1047d00a();
  (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  piVar1 = (int *)get_or_create_singleton_object_1047c910();
  (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  piVar1 = (int *)get_or_create_singleton_object_1047a73e();
  (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  piVar1 = (int *)get_or_create_sram_object_10478100();
  (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  piVar1 = (int *)get_or_create_sram_object_1047dd7a();
  (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  return;
}
