/* @k10d invoke_virtual_and_check_result @ 0x104e3f28
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on param_1, passes the result to call_with_offset_lock_10480e32,
 *   and on success calls a virtual method on param_2 and sets a flag.
 * summary:
 *   The function first calls fill_byte_array to initialize a 256-byte stack buffer. It then
 *   invokes a virtual method (slot 11) on the object pointed to by param_1[6], passing the
 *   stack buffer as an argument. The result of this call is passed to
 *   call_with_offset_lock_10480e32 along with param_1[2]. If call_with_offset_lock_10480e32
 *   returns non-zero, the function invokes a virtual method (slot 2) on the object pointed
 *   to by param_2, sets a byte at offset 0x17 of param_1 to 1, and calls
 *   check_node_in_linked_list. The return value is the result of
 *   call_with_offset_lock_10480e32.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_virtual_and_check_result(uint32_t *param_1,int *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_108 [256];
  
  fill_byte_array(auStack_108,0,0x100);
  (((vtbl_entry*)(param_1[6]))[11].fn)((int)((vtbl_entry*)(param_1[6]))[11].adj + (int)param_1,auStack_108);
  iVar1 = call_with_offset_lock_10480e32((void *)param_1[2],auStack_108);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,2,*param_1);
    *(uint8_t *)((int)param_1 + 0x17) = 1;
    check_node_in_linked_list(param_1);
  }
  return iVar1;
}
