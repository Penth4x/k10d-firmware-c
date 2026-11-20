/* @k10d check_object_property_value @ 0x104f2390
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes it to a helper with a parameter, and checks if a
 *   virtual method returns 1.
 * summary:
 *   The function allocates a temporary instance of cls_105a6d8c on the stack. It calls
 *   copy_status_block_bytes with a value from param_1+8 and the temporary object. It then
 *   invokes virtual slot 2 (extract_field_from_struct_1045ff0e) on the temporary object
 *   with argument 0x2d (45). Finally, it deletes the temporary object and returns true if
 *   the virtual method returned 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_property_value(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x2d);
  cls_105a6d8c_delete(acStack_24,2);
  return iVar1 == 1;
}
