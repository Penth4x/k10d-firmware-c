/* @k10d query_two_status_flags @ 0x10498efa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Queries two 4-byte status values via a helper and stores a 0/1/2 result code in a
 *   struct field.
 * summary:
 *   The function calls an indirect function pointer at 0x104a8c94 to resolve a handle from
 *   param_2, then calls compare_byte_arrays twice with different 4-byte data pointers
 *   (DAT_105b5aa4 and DAT_105b5aa0). Based on the return values of these calls, it sets a
 *   local variable to 1, 2, or 0. This value is then written to offset 0x18 of the object
 *   pointed to by *(param_1 + 8). The specific meaning of the status flags and the object
 *   structure is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_two_status_flags(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = (void *)(*(code *)0x104a8c94/*ROM*/)(param_2);
  iVar3 = compare_byte_arrays(pvVar2,&DAT_105b5aa4/*ROM*/,4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    uVar1 = 1;
  }
  else {
    pvVar2 = (void *)(*(code *)0x104a8c94/*ROM*/)(param_2);
    iVar4 = compare_byte_arrays(pvVar2,&DAT_105b5aa0/*ROM*/,4);
    iVar3 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  *(uint32_t *)(iVar3 + 0x18) = uVar1;
  return;
}
