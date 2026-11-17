/* @k10d dispatch_mode_transition_10499b02 @ 0x10499b02
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Stores a mode ID and dispatches to a handler based on the value at offset 4 of the mode
 *   object.
 * summary:
 *   Writes param_2 to param_1[1] and reads a type field from the object pointed to by
 *   param_1[1]. It branches on this type: cases 0/1 call read_byte_from_struct_array then
 *   dispatch_two_virtual_operations; cases 2/3 call read_byte_from_struct_array then
 *   transfer_data_in_chunks_1049a44e; cases -1/-2 allocate a new object via
 *   cls_105b9724_new and invoke a virtual method on param_1[4]. Returns a status or boolean
 *   result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_mode_transition_10499b02(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  
  param_1[1] = param_2;
  iVar1 = (*(code *)0x1049a528/*ROM*/)();
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1[1] + 4);
    param_1[0x15] = iVar1;
    switch(iVar1) {
    case 0:
    case 1:
      cVar2 = read_byte_from_struct_array(param_1[1],iVar1);
      if (cVar2 != '\0') {
        uVar4 = dispatch_two_virtual_operations((int)param_1,param_1[0x15]);
      }
      break;
    case 2:
    case 3:
      cVar2 = read_byte_from_struct_array(param_1[1],iVar1);
      if (cVar2 != '\0') {
        bVar3 = transfer_data_in_chunks_1049a44e(param_1,param_1[0x15]);
        uVar4 = (uint)bVar3;
      }
      break;
    case -2:
    case -1:
      iVar1 = cls_105b9724_new((uint32_t *)0x0);
      uVar4 = process_object_with_callback((int)param_1,iVar1);
      (**(code **)(param_1[4] + 0x3c))((int)*(short *)(param_1[4] + 0x38) + (int)param_1,iVar1);
    }
  }
  return uVar4;
}
