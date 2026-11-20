/* @k10d forward_virtual_call_via_member @ 0x105342a0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Calls a shared virtual helper then forwards param_2 to a virtual method of a member
 *   object.
 * summary:
 *   The function first calls set_flag_and_value_at_offset_8 with the object pointer and the
 *   low byte of param_2. It then dereferences the member pointer at offset 0x10 to get a
 *   sub-object, reads its vtable, and invokes virtual slot 1 (offset 0xc) on that sub-
 *   object, passing the adjusted this pointer and the full param_2. This is a standard C++
 *   virtual call forwarding pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_virtual_call_via_member(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  set_flag_and_value_at_offset_8(param_1,(char)param_2);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x10) + 0xc);
  (((vtbl_entry*)(iVar1))[1].fn)(*(int *)((int)param_1 + 0x10) + (int)*(short *)(iVar1 + 8),param_2);
  return;
}
