/* @k10d process_object_state_transition_1036d23a @ 0x1036d23a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object, updates a field at offset 0x1c, and conditionally returns a
 *   value based on a state check.
 * summary:
 *   The function calls select_mode_table_and_notify to initialize or reset the object
 *   pointed to by param_1. It then retrieves a value from get_value_from_mode_byte and
 *   writes it to the object's memory at offset 0x1c via write_byte_at_offset_one. It calls
 *   dispatch_event_with_buffer_lock with a mode argument of 6; if the result is 1, it
 *   checks a flag via read_byte_at_offset_four_1051e508 and returns the result of
 *   process_buffered_data_entries_1036d692 if the flag is set, otherwise 0. If the initial
 *   check fails, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_object_state_transition_1036d23a(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  
  select_mode_table_and_notify((int)param_1);
  pvVar4 = (void *)((int)param_1 + 0x1c);
  uVar1 = get_value_from_mode_byte((int)param_1);
  write_byte_at_offset_one((int)pvVar4,(char)uVar1);
  iVar2 = dispatch_event_with_buffer_lock(param_1,6,pvVar4);
  if (iVar2 == 1) {
    cVar3 = read_byte_at_offset_four_1051e508((int)pvVar4);
    if (cVar3 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = process_buffered_data_entries_1036d692(param_1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
