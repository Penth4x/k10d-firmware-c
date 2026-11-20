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

void release_object_and_reset_vtable_refs(cls_105aadb0 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)get_or_create_sram_object_1047dd7a();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[4].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  piVar1 = (int *)get_or_create_singleton_object_1047d00a();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  piVar1 = (int *)get_or_create_singleton_object_1047c910();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  piVar1 = (int *)get_or_create_singleton_object_1047a73e();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  piVar1 = (int *)get_or_create_sram_object_10478100();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  piVar1 = (int *)get_or_create_sram_object_1047dd7a();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  return;
}
