/* @k10d set_object_field_and_flag @ 0x10433006
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 118_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Writes a value to an object field at offset 0x24 and sets a flag at offset 0x84.
 * summary:
 *   The function takes an object pointer (param_1) and a value (param_2). It calls
 *   eventflag_clr_flg with the address of the field at offset 0x84 and the constant 1,
 *   likely setting a boolean flag or state bit. It then calls check_heap_alloc_success with
 *   the address of the field at offset 0x24 and param_2, likely storing the value into that
 *   field. The specific subsystem is unknown as the callees are not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_and_flag(int param_1,int param_2)

{
  eventflag_clr_flg((void *)(param_1 + 0x84),1);
  check_heap_alloc_success((int *)(param_1 + 0x24),param_2);
  return;
}
