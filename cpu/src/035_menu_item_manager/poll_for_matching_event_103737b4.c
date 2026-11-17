/* @k10d poll_for_matching_event_103737b4 @ 0x103737b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Polls an event queue for a new entry matching stored coordinates, updating the object's
 *   reference on success.
 * summary:
 *   The function first checks if the current event reference (at offset 0x34) matches the
 *   stored coordinates (offsets 0x30-0x32), calling dispatch_three_params_and_return_offset
 *   to update if they differ. It then enters a loop that calls
 *   read_field_at_offset_eight_1036ba06 (likely a non-blocking receive) and
 *   dispatch_event_and_return_offset (likely a peek/get) to retrieve a new event pointer.
 *   If the new event's coordinates (offsets 4-6) match the stored ones, it exits the loop.
 *   On success, it updates the reference at 0x34 and sets a flag at 0x2a to true. On
 *   failure or timeout, it sets the flag to false and may set a status byte at 0x29. The
 *   caller is a virtual method, suggesting this is part of an object-oriented event
 *   handling or state machine class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char poll_for_matching_event_103737b4(void *param_1,uint32_t param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  int iStack_c;
  
  uVar4 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x34) + 4);
  uVar5 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x34) + 6);
  if ((uVar4 != *(ushort *)((int)param_1 + 0x30)) || (uVar5 != *(ushort *)((int)param_1 + 0x32))) {
    dispatch_three_params_and_return_offset(param_1,(uint)*(ushort *)((int)param_1 + 0x30),
                 (uint)*(ushort *)((int)param_1 + 0x32));
  }
  toggle_pointer_between_two_offsets((int)param_1);
  bVar1 = false;
  do {
    if (*(char *)((int)param_1 + 0x14) != '\0') {
      dispatch_three_params_and_return_offset(param_1,uVar4,uVar5);
      goto LAB_1037386a;
    }
    iVar2 = read_field_at_offset_eight_1036ba06(param_1,0xffffffff);
    if (iVar2 != 1) goto LAB_1037386a;
    iStack_c = 0;
    dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
    if ((iStack_c == 0) ||
       ((*(short *)(iStack_c + 4) == *(short *)((int)param_1 + 0x30) &&
        (*(short *)(iStack_c + 6) == *(short *)((int)param_1 + 0x32))))) goto LAB_1037386a;
    bVar3 = call_virtual_method_on_param1((int)param_1);
  } while (!bVar3);
  *(int *)((int)param_1 + 0x34) = iStack_c;
  bVar1 = true;
LAB_1037386a:
  *(bool *)((int)param_1 + 0x2a) = bVar1;
  if (!bVar1) {
    if (*(char *)((int)param_1 + 0x1c) == '\0') {
      *(uint8_t *)((int)param_1 + 0x29) = 1;
    }
    toggle_pointer_between_two_offsets((int)param_1);
    dispatch_three_params_and_return_offset(param_1,uVar4,uVar5);
  }
  return bVar1;
}
