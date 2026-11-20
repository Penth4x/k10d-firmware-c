/* @k10d query_object_via_temp_buffer_104f2056 @ 0x104f2056
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes it to a helper with a field from param_1, and
 *   returns the low byte of a virtual call result.
 * summary:
 *   The function allocates a stack object via cls_105a6abc_new, calls
 *   copy_buffer_with_lock_1045e22a with the value at param_1+8 and the new object, then
 *   invokes virtual slot 2 (extract_bitfield_from_byte_array) on the object with argument
 *   3. It deletes the temporary object and returns the low 8 bits of the virtual call's
 *   return value. The specific camera subsystem is not identifiable from the provided
 *   pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_via_temp_buffer_104f2056(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6abc acStack_1c [5];
  
  cls_105a6abc_new(acStack_1c);
  copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 8),acStack_1c);
  uVar1 = extract_bitfield_from_byte_array(acStack_1c,3);
  cls_105a6abc_delete(acStack_1c,2);
  return uVar1 & 0xff;
}
