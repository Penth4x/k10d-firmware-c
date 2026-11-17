/* @k10d state_accessor_disp @ 0x1041af14
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_virtual_slot_by_cmd)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Dispatches to a virtual method slot on param_1 based on the value of param_2.
 * summary:
 *   The function switches on param_2 and, for specific command values, invokes a virtual
 *   method on the object pointed to by param_1. It uses the Cfront virtual call idiom,
 *   selecting the vtable slot and this-adjustment from offsets 0xac, 0xb4, 0xbc, or 0xc4 in
 *   the object. The return value is always 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Generic state-field accessor dispatcher: 25-arm jmp table @0x1059cd40; arms read index slots
   [obj+0xa8/0xb0/0xb8/0xc0]. */

uint32_t state_accessor_disp(int *param_1,uint32_t param_2)

{
  switch(param_2) {
  case 0x80000003/*SDRAM*/:
    (**(code **)(*param_1 + 0xac))((int)*(short *)(*param_1 + 0xa8) + (int)param_1);
    break;
  case 0x80000004/*SDRAM*/:
    (**(code **)(*param_1 + 0xac))((int)*(short *)(*param_1 + 0xa8) + (int)param_1);
    break;
  case 0x80000005/*SDRAM*/:
    (**(code **)(*param_1 + 0xac))((int)*(short *)(*param_1 + 0xa8) + (int)param_1);
    break;
  case 0x80000006/*SDRAM*/:
    (**(code **)(*param_1 + 0xac))((int)*(short *)(*param_1 + 0xa8) + (int)param_1);
    break;
  case 0x80000008/*SDRAM*/:
    (**(code **)(*param_1 + 0xb4))((int)*(short *)(*param_1 + 0xb0) + (int)param_1);
    break;
  case 0x80000009/*SDRAM*/:
    (**(code **)(*param_1 + 0xb4))((int)*(short *)(*param_1 + 0xb0) + (int)param_1);
    break;
  case 0x8000000b/*SDRAM*/:
    (**(code **)(*param_1 + 0xbc))((int)*(short *)(*param_1 + 0xb8) + (int)param_1);
    break;
  case 0x8000000c/*SDRAM*/:
    (**(code **)(*param_1 + 0xbc))((int)*(short *)(*param_1 + 0xb8) + (int)param_1);
    break;
  case 0x8000001a/*SDRAM*/:
    (**(code **)(*param_1 + 0xc4))((int)*(short *)(*param_1 + 0xc0) + (int)param_1);
  default:
  }
  return 0;
}
