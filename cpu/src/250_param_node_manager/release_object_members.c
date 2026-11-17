/* @k10d release_object_members @ 0x104df97e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Releases or resets three members of a struct, conditionally invoking a virtual method
 *   on one.
 * summary:
 *   The function takes a pointer to a struct and calls three helper functions on its
 *   members at offsets 12, 16, and 4. The member at offset 16 is checked for null; if non-
 *   null, it performs a virtual call on an object stored at offset 0x40 of that member.
 *   Finally, it calls a helper on the original struct with a constant argument 0x2001. The
 *   pattern suggests a cleanup or deactivation routine for a composite object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_members(int *param_1)

{
  int iVar1;
  
  copy_field_and_clear_offset(param_1[3]);
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x40) + 0x2c))(*(short *)(*(int *)(iVar1 + 0x40) + 0x28) + iVar1);
  }
  zero_struct_fields_104e0e38(param_1[1]);
  initialize_linked_struct_fields(param_1,0x2001);
  return;
}
