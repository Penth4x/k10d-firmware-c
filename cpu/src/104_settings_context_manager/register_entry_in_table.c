/* @k10d register_entry_in_table @ 0x104277ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Registers a new entry in a table by storing a length and calling an initialization
 *   routine.
 * summary:
 *   Checks if the slot at index param_2 in the table pointed to by param_1 is empty (first
 *   byte is 0). If so, and param_3 is non-null, it writes param_2 to the second field,
 *   calls set_pointer_field_at_offset_8 with the slot pointer and param_3, and sets the
 *   first byte to 1. Returns 1 on success, 0 otherwise. The table entries appear to be 12
 *   bytes each.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t register_entry_in_table(void *param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  if (((param_2 < 0x100) && (pcVar2 = (char *)(param_2 * 0xc + (int)param_1), *pcVar2 == '\0')) &&
     (param_3 != 0)) {
    *(int *)(pcVar2 + 4) = param_2;
    set_pointer_field_at_offset_8(pcVar2,(int)param_3);
    *pcVar2 = '\x01';
    uVar1 = 1;
  }
  return uVar1;
}
