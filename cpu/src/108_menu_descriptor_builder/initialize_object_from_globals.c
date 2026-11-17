/* @k10d initialize_object_from_globals @ 0x1042a384
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Populates fields at offsets 8, 0xc, and 0x14 of the object pointed to by param_1 using
 *   values from two global state structures.
 * summary:
 *   The function retrieves pointers to two global structures via sr_driver_singleton and
 *   initialize_singleton_object_1045d6a0. It copies a 4-byte value from offset 4 of the
 *   first structure to offset 8 of the target object. It then calls wait_flg_obj with the
 *   address of offset 0xc in the target object and an argument of 0, likely initializing
 *   that field. Finally, it copies a 4-byte value from offset 8 of the second structure to
 *   offset 0x14 of the target object and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_from_globals(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = sr_driver_singleton();
  *(uint32_t *)(param_1 + 8) = *(uint32_t *)(iVar1 + 4);
  wait_flg_obj((void *)(param_1 + 0xc),0);
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 0x14) = *(uint32_t *)(iVar1 + 8);
  return 1;
}
