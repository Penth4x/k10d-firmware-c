/* @k10d process_two_entry_state_array @ 0x1052b1c4
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over two 0x3c-byte entries, dispatching non-sentinel values at four offsets to
 *   a helper, then resets four sentinel fields.
 * summary:
 *   The function loops twice (iVar3=2), advancing a 0x3c-byte stride over param_1. For each
 *   entry it reads four 32-bit fields at offsets 0x170, 0x17c, 0x188, 0x194, 0x1a0 and
 *   calls remove_entry_from_array_1052b11c(param_1, value) for any value not equal to 0xd,
 *   0xe, 0xf, or 0x10. After the loop it calls update_or_add_entry_in_table(param_1, id,
 *   0x80) for each of the four sentinel ids (0xf, 0x10, 0xe, 0xd). Returns 1. The callees
 *   are unnamed, so the subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_entry_state_array(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  iVar2 = 0;
  do {
    iVar1 = *(int *)((int)param_1 + iVar2 + 0x170);
    if ((((iVar1 != 0xf) && (iVar1 != 0x10)) && (iVar1 != 0xe)) && (iVar1 != 0xd)) {
      remove_entry_from_array_1052b11c(param_1,iVar1);
    }
    iVar1 = *(int *)((int)param_1 + iVar2 + 0x17c);
    if (((iVar1 != 0xf) && (iVar1 != 0x10)) && ((iVar1 != 0xe && (iVar1 != 0xd)))) {
      remove_entry_from_array_1052b11c(param_1,iVar1);
    }
    iVar1 = *(int *)((int)param_1 + iVar2 + 0x188);
    if (((iVar1 != 0xf) && (iVar1 != 0x10)) && ((iVar1 != 0xe && (iVar1 != 0xd)))) {
      remove_entry_from_array_1052b11c(param_1,iVar1);
    }
    iVar1 = *(int *)((int)param_1 + iVar2 + 0x194);
    if ((((iVar1 != 0xf) && (iVar1 != 0x10)) && (iVar1 != 0xe)) && (iVar1 != 0xd)) {
      remove_entry_from_array_1052b11c(param_1,iVar1);
    }
    iVar1 = *(int *)((int)param_1 + iVar2 + 0x1a0);
    if (((iVar1 != 0xf) && (iVar1 != 0x10)) && ((iVar1 != 0xe && (iVar1 != 0xd)))) {
      remove_entry_from_array_1052b11c(param_1,iVar1);
    }
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x3c;
  } while (-1 < iVar3);
  update_or_add_entry_in_table(param_1,0xf,0x80);
  update_or_add_entry_in_table(param_1,0x10,0x80);
  update_or_add_entry_in_table(param_1,0xe,0x80);
  update_or_add_entry_in_table(param_1,0xd,0x80);
  return 1;
}
