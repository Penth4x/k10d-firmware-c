/* @k10d dispatch_six_mode_cases @ 0x103670f6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Switches on a 4-byte field at offset 0x18 of the input struct and calls one of six
 *   handlers with a sub-struct pointer and a byte from offsets 0x54-0x5a.
 * summary:
 *   Reads the value at param_1+0x18 and branches on cases 1 through 6. Each case passes
 *   param_1+0x20 as the first argument and a single byte from param_1+0x54 through 0x5a as
 *   the second argument to a distinct callee. Case 3 invokes two callees sequentially. The
 *   callees are unnamed, so the specific subsystem role is not determinable from this code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_six_mode_cases(void *param_1)

{
  switch(*(uint32_t *)((int)param_1 + 0x18)) {
  case 1:
    set_menu_item_selection_state((int)param_1 + 0x20,*(uint8_t *)((int)param_1 + 0x54));
    break;
  case 2:
    register_menu_items_with_state((int)param_1 + 0x20,*(uint8_t *)((int)param_1 + 0x55));
    break;
  case 3:
    dispatch_mode_parameter_update_1037e436((int)param_1 + 0x20,*(uint8_t *)((int)param_1 + 0x56));
    invoke_virtual_slot_three_times((int)param_1 + 0x20,*(uint8_t *)((int)param_1 + 0x57));
    break;
  case 4:
    invoke_virtual_slot_three_1037e9a4((int)param_1 + 0x20,*(uint8_t *)((int)param_1 + 0x58));
    break;
  case 5:
    render_apex_mode_indicator((int)param_1 + 0x20,*(uint8_t *)((int)param_1 + 0x59));
    break;
  case 6:
    draw_ui_element_by_index((int)param_1 + 0x20,*(uint8_t *)((int)param_1 + 0x5a));
  }
  return;
}
