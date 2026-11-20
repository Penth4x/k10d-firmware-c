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

/* WARNING: Struct "cls_105d5104": ignoring multiple overlapping fields */

uint32_t update_object_pointer_and_notify(cls_105d5104 *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = &param_1->field_0x4;
  *(uint32_t **)(param_1->field_0x18 + 0x2c) = puVar1;
  allocate_free_slot_in_table_1045e7f2((void *)(((uint32_t *)&(param_1->field_0x8))[3]),(int)(0),(uint32_t)(puVar1));
  allocate_free_slot_in_table_1045e7f2((void *)(((uint32_t *)&(param_1->field_0x8))[3]),(int)(0x11),(uint32_t)(puVar1));
  wait_flg_obj(&param_1->field_0x1c,0);
  return 1;
}
