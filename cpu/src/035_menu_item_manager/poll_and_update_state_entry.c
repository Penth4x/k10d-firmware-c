/* @k10d poll_and_update_state_entry @ 0x103738c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Polls a state machine entry, validates it against current and target parameters, and
 *   updates object fields on match or transition.
 * summary:
 *   The function reads two 16-bit values from a pointer stored at offset 0x34 of the
 *   object. It calls dispatch_event_and_return_field to check a condition; if false, it
 *   sets a flag at 0x29 and clears a byte at 0x2a. If true, it calls
 *   dispatch_event_and_return_offset to retrieve a new entry pointer. It compares the new
 *   entry's parameters (offsets 4 and 6) against the initial values and the object's target
 *   values (offsets 0x2c/0x2e). If a match is found or a transition condition is met via
 *   call_virtual_method_on_param1, it updates the object's state pointer and flags. Returns
 *   1 on successful transition, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_and_update_state_entry(void *param_1,uint32_t param_2)

{
  uint8_t uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  int iStack_c;
  
  uVar5 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x34) + 4);
  uVar4 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x34) + 6);
  toggle_pointer_between_two_offsets((int)param_1);
  do {
    if (*(char *)((int)param_1 + 0x14) != '\0') {
      dispatch_three_params_and_return_offset(param_1,uVar5,uVar4);
      goto LAB_103739a6;
    }
    iVar2 = dispatch_event_and_return_field(param_1,0xffffffff);
    if (iVar2 != 1) {
      if (*(char *)((int)param_1 + 0x1c) == '\0') {
        *(uint8_t *)((int)param_1 + 0x29) = 1;
      }
LAB_1037391c:
      iVar2 = 0x2a;
      uVar1 = 0;
LAB_10373988:
      *(uint8_t *)(iVar2 + (int)param_1) = uVar1;
LAB_103739a6:
      toggle_pointer_between_two_offsets((int)param_1);
      return 0;
    }
    iStack_c = 0;
    dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
    if (iStack_c == 0) {
      if (*(char *)((int)param_1 + 0x1c) == '\0') {
        *(uint8_t *)((int)param_1 + 0x29) = 1;
      }
      goto LAB_1037391c;
    }
    if ((*(ushort *)(iStack_c + 4) == uVar5) && (*(ushort *)(iStack_c + 6) == uVar4)) {
      if (*(char *)((int)param_1 + 0x1c) == '\0') {
        *(uint8_t *)((int)param_1 + 0x29) = 1;
      }
      goto LAB_1037391c;
    }
    if ((((uint)*(ushort *)(iStack_c + 4) == (uint)*(ushort *)((int)param_1 + 0x2c)) &&
        ((uint)*(ushort *)(iStack_c + 6) == (uint)*(ushort *)((int)param_1 + 0x2e))) &&
       (*(char *)((int)param_1 + 0x1c) == '\0')) {
      uVar1 = 1;
      iVar2 = 0x29;
      goto LAB_10373988;
    }
    bVar3 = call_virtual_method_on_param1((int)param_1);
    if (bVar3) {
      *(int *)((int)param_1 + 0x34) = iStack_c;
      *(uint8_t *)((int)param_1 + 0x2a) = 1;
      return 1;
    }
  } while( true );
}
