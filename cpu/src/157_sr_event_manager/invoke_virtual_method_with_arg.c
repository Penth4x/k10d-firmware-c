/* @k10d invoke_virtual_method_with_arg @ 0x1046d74c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object pointer stored in a struct field, passing a single
 *   integer argument.
 * summary:
 *   The function first calls debug_flag_writer_0x0c with a value from offset 0x1c of
 *   param_1 and param_2. It then dereferences the pointer at offset 0x18 of param_1 to get
 *   an object pointer, and invokes the virtual method at vtable offset 0x24 (slot 4) with
 *   the object pointer (adjusted by the short at vtable offset 0x20) and the constant 1.
 *   This follows the Cfront virtual call idiom.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_with_arg(int param_1,int param_2)

{
  int iVar1;
  
  debug_flag_writer_0x0c(*(int *)(param_1 + 0x1c),param_2);
  iVar1 = **(int **)(param_1 + 0x18);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar1 + 0x20),1);
  return;
}
