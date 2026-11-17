/* @k10d gate_1039ed32 @ 0x1039eb66
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_mode_command)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   Handles a switch of command codes 0x130001-0x130009 to update state fields and trigger
 *   mode transitions.
 * summary:
 *   The function acts as a command dispatcher, using param_2 to select one of nine cases.
 *   It modifies various offsets in the object pointed to by param_1, such as flags at 0xd8
 *   and 0xc5, and pointers at 0x48 and 0xc8. It calls helper functions like
 *   clear_flag_and_invoke_virtual_slot and clear_flag_and_invoke_virtual_10407630 to
 *   perform specific state changes or transitions based on the current mode stored at
 *   offset 0x38.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1039eb7e) overlaps instruction at (ram,0x1039eb7c)
    */

uint32_t gate_1039ed32(void *param_1,uint32_t param_2,uint32_t *param_3)

{
  uint32_t *puVar1;
  int iVar2;
  char cVar3;
  
  switch(param_2) {
  case 0x130001:
    break;
  case 0x130002:
    *(uint8_t *)((int)param_1 + 0xd8) = 1;
    break;
  case 0x130003:
    puVar1 = *(uint32_t **)((int)param_1 + 200);
    if ((puVar1 != (uint32_t *)0x0) && (param_3 == (uint32_t *)0x0)) {
      iVar2 = *(int *)((int)param_1 + 0x38);
      if ((iVar2 == *(int *)((int)param_1 + 0x74)) && (puVar1 == (uint32_t *)0x1)) {
        clear_flag_and_invoke_virtual_slot(*(int *)((int)param_1 + 0x74));
      }
      else if ((iVar2 == *(int *)((int)param_1 + 0x90)) && (puVar1 == (uint32_t *)0x1)) {
        clear_flag_and_invoke_virtual_10407630(*(int *)((int)param_1 + 0x90));
      }
      else if (iVar2 == *(int *)((int)param_1 + 0x8c)) {
        *(uint32_t *)((int)param_1 + 200) = 0;
        set_flg_obj((uint32_t *)((int)param_1 + 0xcc));
      }
      *(uint32_t *)((int)param_1 + 200) = 0;
      return 1;
    }
    if (param_3 == puVar1) {
      return 1;
    }
    *(uint32_t **)((int)param_1 + 200) = param_3;
    *(uint32_t **)((int)param_1 + 0x48) = param_3;
    break;
  case 0x130004:
    *(bool *)((int)param_1 + 0xc5) = param_3 != (uint32_t *)0x0;
    break;
  case 0x130005:
    if (param_3 == (uint32_t *)0x0) {
      return 1;
    }
    *param_3 = *(uint32_t *)((int)param_1 + 0x98);
    return 1;
  case 0x130006:
    *(bool *)((int)param_1 + 0xc5) = param_3 != (uint32_t *)0x0;
    break;
  case 0x130007:
    if (((*(int *)((int)param_1 + 0x38) == *(int *)((int)param_1 + 0x90)) &&
        (param_3 == (uint32_t *)0x3)) &&
       (iVar2 = check_status_bit1(*(uint32_t *)((int)param_1 + 0xbc)), iVar2 != 0)) {
      *(uint8_t *)((int)param_1 + 0xd5) = 0;
      set_flg_obj((uint32_t *)((int)param_1 + 0xcc));
      set_flg_obj((uint32_t *)((int)param_1 + 0xcc));
    }
    if (*(int *)((int)param_1 + 0x38) != *(int *)((int)param_1 + 0x78)) {
      return 1;
    }
    cVar3 = read_byte_at_offset_0x65(*(int *)((int)param_1 + 0x78));
    if (cVar3 != '\0') {
      return 1;
    }
    set_flag_at_offset_100_103a4c22(*(uint32_t *)((int)param_1 + 0x78));
    *(uint8_t *)((int)param_1 + 0xd5) = 0;
    break;
  case 0x130008:
    if (*(char *)((int)param_1 + 0xd6) == '\0') {
      return 1;
    }
    store_pointer_at_offset_0x44(*(int *)((int)param_1 + 0x8c),param_3);
    *(uint32_t *)((int)param_1 + 0x48) = 0x65;
    break;
  case 0x130009:
    *(bool *)((int)param_1 + 0x36) = param_3 == (uint32_t *)0x1;
    return 1;
  default:
    return 1;
  }
  set_flg_obj((uint32_t *)((int)param_1 + 0xcc));
  return 1;
}
