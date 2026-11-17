/* @k10d rearui_draw_active_screen @ 0x10448b44
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed draw_active_screen_frame)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Renders the active UI screen by dispatching to virtual draw methods and updating state
 *   flags.
 * summary:
 *   Reads a status word from a sub-object at offset 0x110. Based on bits 0-3 and 4-6, it
 *   calls helper functions wait_for_flag_clear and wait_for_flag_at_offset_0x110. It then
 *   performs a virtual call on an object at offset 0x11c (slot 9) and, if successful,
 *   another virtual call (slot 8). If a flag at offset 0xdc is set, it calls three
 *   cleanup/update functions and clears the flag. Finally, it calls
 *   process_object_state_transition_10448bfc and updates the status word in the sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t rearui_draw_active_screen(void *param_1)

{
  ushort uVar2;
  uint32_t uVar1;
  int iVar3;
  
  uVar2 = rearui_draw_flags(*(void **)((int)param_1 + 0x110));
  if ((uVar2 & 0xf) != 0) {
    wait_for_flag_clear(param_1);
  }
  if ((uVar2 & 0x70) != 0) {
    wait_for_flag_at_offset_0x110(param_1);
  }
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
  iVar3 = (**(code **)(iVar3 + 0x4c))
                    (*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar3 + 0x48));
  if (iVar3 != 0) {
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
    (**(code **)(iVar3 + 0x44))(*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar3 + 0x40));
  }
  if (*(char *)((int)param_1 + 0xdc) != '\0') {
    toggle_and_wait_for_subsystem(param_1,0);
    select_and_set_mode_value(param_1,0);
    wait_for_subobject_flag_clear_10449af0(param_1);
    *(uint8_t *)((int)param_1 + 0xdc) = 0;
  }
  uVar1 = process_object_state_transition_10448bfc(param_1);
  write_masked_value_to_struct_offset_1044b396(*(void **)((int)param_1 + 0x110),uVar2);
  return uVar1;
}
