/* @k10d dispatch_two_virtual_calls_1047d42a @ 0x1047d42a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves two objects via helper functions and invokes a virtual method on each with the
 *   same two parameters.
 * summary:
 *   The function calls read_field_at_offset_0xc and get_next_node_pointer to obtain object
 *   pointers. It then performs Cfront-style virtual calls on each object, using vtable
 *   offsets 0x8c and 0x84 respectively, passing param_2 and param_3 as arguments. The this-
 *   pointer is adjusted by the short value stored at vtable offsets 0x88 and 0x80.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_virtual_calls_1047d42a(void *param_1,uint32_t param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)read_field_at_offset_0xc(param_1);
  (**(code **)(*piVar1 + 0x8c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x88),param_2,param_3);
  piVar1 = (int *)get_next_node_pointer(param_1,param_3);
  (**(code **)(*piVar1 + 0x84))((int)piVar1 + (int)*(short *)(*piVar1 + 0x80),param_2,param_3);
  return;
}
