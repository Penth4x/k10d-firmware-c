/* @k10d dispatch_virtual_method_by_id @ 0x104e1f84
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual method call on an object based on an ID retrieved from the
 *   object's state.
 * summary:
 *   The function calls release_object_members and validate_sequence_counter on the input
 *   object, then retrieves an ID via get_field_at_offset_0x18. It branches on this ID
 *   (e.g., 0x3002, 0x3001, 0x3801) to invoke specific function pointers stored in the
 *   object or global vtable-like structures. On success, it updates fields at offsets 0xc
 *   and 0x30 of a sub-object and returns 1; otherwise, it calls
 *   initialize_linked_struct_fields with an error code and returns 9.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_by_id(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  
  bVar1 = false;
  release_object_members(param_1);
  iVar2 = validate_sequence_counter(param_1);
  if (iVar2 == 0) {
    return 9;
  }
  uVar3 = get_field_at_offset_0x18(*param_1);
  if (uVar3 == 0x3002) {
    iVar2 = 1;
LAB_104e204e:
    (*(code *)0x104e0e6c/*ROM*/)(param_1[1],iVar2);
    bVar1 = true;
  }
  else {
    if (uVar3 < 0x3003) {
      if (uVar3 == 0) {
        iVar2 = (*(code *)0x104e048a/*ROM*/)(*param_1);
        if (iVar2 == 0) {
          iVar2 = (*(code *)0x104e4b88/*ROM*/)(param_1[2]);
          if (iVar2 != 0) {
            iVar2 = iVar2 + -1;
          }
        }
        else {
          iVar2 = (*(code *)0x104e048a/*ROM*/)(*param_1);
          if (iVar2 == -1) {
            iVar2 = 100;
          }
          iVar2 = (*(code *)0x104e4b8e/*ROM*/)(param_1[2],iVar2);
        }
        goto LAB_104e204e;
      }
      if (uVar3 == 0x3001) goto LAB_104e205c;
LAB_104e2062:
      uVar5 = 0x200b;
    }
    else {
      if (uVar3 != 0x3006) {
        if (uVar3 == 0x3801) {
          iVar4 = (*(code *)0x104e4b88/*ROM*/)(param_1[2]);
          iVar2 = (*(code *)0x104e4bc4/*ROM*/)(param_1[2]);
          iVar2 = (iVar4 + -1) - iVar2;
          goto LAB_104e204e;
        }
        if (uVar3 != 0xffffffff) goto LAB_104e2062;
      }
LAB_104e205c:
      uVar5 = 0x2014;
    }
    initialize_linked_struct_fields(param_1,uVar5);
  }
  uVar5 = 1;
  if (bVar1) {
    *(uint32_t *)(param_1[1] + 0xc) = 0xc;
    *(uint32_t *)(param_1[1] + 0x30) = 1;
  }
  else {
    uVar5 = 9;
  }
  return uVar5;
}
