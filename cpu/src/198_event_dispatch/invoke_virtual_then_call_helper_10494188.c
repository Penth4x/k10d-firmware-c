/* @k10d invoke_virtual_then_call_helper_10494188 @ 0x10494188
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and then calls a helper with a derived pointer.
 * summary:
 *   The function performs a virtual call on the object pointed to by param_2, using the
 *   vtable entry at offset 0xc. It then calls forward_struct_and_second_field, passing a
 *   pointer to param_1+0x18 and the address of a local variable initialized to param_2.
 *   Finally, it returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_then_call_helper_10494188(int param_1,int param_2)

{
  uintptr_t sp;
  int iStack_c;
  
  (**(code **)(*(int *)(param_2 + 0xc) + 0xc))(*(short *)(*(int *)(param_2 + 0xc) + 8) + param_2,0);
  iStack_c = param_2;
  forward_struct_and_second_field((int *)(param_1 + 0x18),&iStack_c);
  return 1;
}
