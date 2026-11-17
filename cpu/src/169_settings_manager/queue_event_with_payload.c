/* @k10d queue_event_with_payload @ 0x1047de5c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates an event type and parameters, allocates an 8-byte payload, and enqueues it
 *   via forward_struct_and_second_field.
 * summary:
 *   Checks the result of count_string_bytes(param_3) for a value of 3 and ensures param_2
 *   is not -1. It then calls search_linked_list_for_match and find_entry_in_pointer_list
 *   for further validation. If successful, it allocates 8 bytes on the heap, stores param_2
 *   in the first word, copies param_3 into the second word via copy_null_terminated_string,
 *   and passes the pointer to forward_struct_and_second_field along with a pointer derived
 *   from param_1. The return value of forward_struct_and_second_field is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t queue_event_with_payload(void *param_1,int param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uintptr_t sp;
  int *piStack_c;
  
  iVar1 = count_string_bytes(param_3);
  uVar3 = 0;
  if ((((iVar1 == 3) && (param_2 != -1)) && (iVar1 = search_linked_list_for_match(param_1,param_3), iVar1 == -1)) &&
     (iVar1 = find_entry_in_pointer_list(param_1,param_2), iVar1 == 0)) {
    piVar2 = (int *)heap_alloc((void *)8);
    *piVar2 = param_2;
    copy_null_terminated_string(piVar2 + 1,param_3);
    piStack_c = piVar2;
    uVar3 = forward_struct_and_second_field((int *)((int)param_1 + 4),&piStack_c);
  }
  return uVar3;
}
