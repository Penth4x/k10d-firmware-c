/* @k10d check_mode_and_set_flag @ 0x1045d12c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Compares param_2 against a 2-byte table, conditionally calls three helpers, and sets a
 *   flag at offset 0x34.
 * summary:
 *   The function iterates through a 4-byte table at 0x105a5c60 (checking 2-byte entries) to
 *   see if param_2 matches any entry. If no match is found (cVar4 is 0 or 1), it calls
 *   get_context_field_at_offset_8, update_object_subfields, and invoke_listener_slot_two.
 *   It then unconditionally calls set_flg_obj on the object at offset 0x34 and returns the
 *   match status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char check_mode_and_set_flag(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  char cVar4;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    cVar4 = cVar1;
    if (param_2 == *(char *)(iVar2 + 0x105a5c60/*ROM*/)) break;
    iVar2 = iVar2 + 2;
    cVar1 = cVar1 + '\x01';
    cVar4 = '\x02';
  } while (iVar2 < 4);
  if ((cVar4 == '\0') || (cVar4 == '\x01')) {
    uVar3 = get_context_field_at_offset_8(param_1);
    update_object_subfields(param_1,uVar3);
    invoke_listener_slot_two((int *)(param_1 + 0x1c));
  }
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x2);
  return cVar4;
}
