/* @k10d initialize_object_fields_1042e1f4 @ 0x1042e1f4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Populates specific fields of a structure with values retrieved from four unknown global
 *   state functions.
 * summary:
 *   The function writes the value at offset 4 of the return values from
 *   get_sensor_singleton and get_or_create_camera_object into offsets 0xc and 0x10 of the
 *   input structure. It calls wait_flg_obj with the address of offset 0x2c and a zero
 *   argument, then writes the value at offset 8 of initialize_singleton_object_1045d6a0's
 *   return value to offset 0x34. It always returns 1. The specific roles of the callees and
 *   the structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_fields_1042e1f4(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = get_sensor_singleton();
  *(uint32_t *)(param_1 + 0xc) = *(uint32_t *)(iVar1 + 4);
  iVar1 = get_or_create_camera_object();
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(iVar1 + 4);
  wait_flg_obj((void *)(param_1 + 0x2c),0);
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 0x34) = *(uint32_t *)(iVar1 + 8);
  return 1;
}
