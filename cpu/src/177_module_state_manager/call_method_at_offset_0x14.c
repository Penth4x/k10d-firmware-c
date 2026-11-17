/* @k10d call_method_at_offset_0x14 @ 0x10484dd8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a function pointer located at offset 0x14 of the object passed in param_1 with
 *   the given arguments.
 * summary:
 *   This function acts as a simple wrapper or thunk. It takes an object pointer, adds 0x14
 *   to it to access a specific member (likely a function pointer or method), and calls the
 *   function at that address with param_2 and param_3. It returns the result of that call.
 *   The specific role of the method at offset 0x14 is unknown because the callee
 *   read_two_byte_table_entry_104284cc is not named and the object structure is not
 *   defined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t call_method_at_offset_0x14(void *param_1,int param_2,int param_3)

{
  uint16_t uVar1;
  
  uVar1 = read_two_byte_table_entry_104284cc((int)param_1 + 0x14,param_2,param_3);
  return uVar1;
}
