/* @k10d update_object_pointer_and_notify @ 0x10506ab0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 267_test_mode_state (unit names are model-proposed)
 * purpose:
 *   Stores a pointer to a sub-object at a fixed offset in a target structure and calls two
 *   notification helpers.
 * summary:
 *   The function takes a pointer to an object (param_1), calculates a new pointer value
 *   (param_1 + 4), and writes it to an address derived from a pointer at offset 0x18 in the
 *   object. It then calls allocate_free_slot_in_table_1045e7f2 twice with different second
 *   arguments (0 and 0x11) using a pointer from offset 0x14 and the new pointer value.
 *   Finally, it calls wait_flg_obj with a pointer to offset 0x1c and 0. The function
 *   returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_object_pointer_and_notify(void *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 4;
  *(int *)(*(int *)((int)param_1 + 0x18) + 0x2c) = iVar1;
  allocate_free_slot_in_table_1045e7f2(*(void **)((int)param_1 + 0x14),0,iVar1);
  allocate_free_slot_in_table_1045e7f2(*(void **)((int)param_1 + 0x14),0x11,iVar1);
  wait_flg_obj((void *)((int)param_1 + 0x1c),0);
  return 1;
}
