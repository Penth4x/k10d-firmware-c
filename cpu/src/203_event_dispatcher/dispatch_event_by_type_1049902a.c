/* @k10d dispatch_event_by_type_1049902a @ 0x1049902a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Stores an event ID in a struct and dispatches to a handler based on the event type
 *   value.
 * summary:
 *   The function writes param_2 to offset 4 of the struct pointed to by param_1. It reads a
 *   type field from the object at param_1[1]+4 and branches on its value. For types -2/-1
 *   it allocates an object and calls a virtual method; for types 0/1 and 2 it calls
 *   specific handlers (dispatch_two_virtual_operations or transfer_data_in_chunks_1049a44e)
 *   after a check via read_byte_from_struct_array. Returns a status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_event_by_type_1049902a(int *param_1,int param_2)

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
    param_1[0x14] = iVar1;
    if ((iVar1 == -2) || (iVar1 == -1)) {
      iVar1 = cls_105b9724_new((uint32_t *)0x0);
      uVar4 = initialize_object_with_status((int)param_1,iVar1);
      (**(code **)(param_1[4] + 0x3c))((int)*(short *)(param_1[4] + 0x38) + (int)param_1,iVar1);
    }
    else if ((iVar1 == 0) || (iVar1 == 1)) {
      cVar2 = read_byte_from_struct_array(param_1[1],iVar1);
      if (cVar2 != '\0') {
        uVar4 = dispatch_two_virtual_operations((int)param_1,param_1[0x14]);
      }
    }
    else if (iVar1 == 2) {
      cVar2 = read_byte_from_struct_array(param_1[1],2);
      if (cVar2 != '\0') {
        bVar3 = transfer_data_in_chunks_1049a44e(param_1,param_1[0x14]);
        uVar4 = (uint)bVar3;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
