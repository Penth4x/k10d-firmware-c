/* @k10d query_object_property_via_temp_104f2570 @ 0x104f2570
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes it to a helper with a field from param_1, and
 *   returns whether a virtual query equals 1.
 * summary:
 *   Allocates a stack instance of cls_105a6d8c, calls copy_status_block_bytes with
 *   *(param_1+8) and the new object, then invokes virtual slot 2
 *   (extract_field_from_struct_1045ff0e) with argument 0x10. Destroys the temporary object
 *   and returns true if the virtual call returned 1. The specific camera subsystem is not
 *   identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_object_property_via_temp_104f2570(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x10);
  cls_105a6d8c_delete(acStack_24,2);
  return iVar1 == 1;
}
