/* @k10d copy_state_fields_from_source @ 0x10429c38
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Copies three 32-bit fields from a source struct into param_1 and zeroes a trailing
 *   field.
 * summary:
 *   Calls initialize_singleton_object_1045d6a0 to obtain a source pointer, then copies
 *   words at offsets 0x1c, 0x28, and 8 into param_1 at offsets 0xc, 0x10, and 0x14
 *   respectively. Calls wait_flg_obj with param_1+0x18 and 0, likely initializing or
 *   clearing a sub-structure. Returns 1 unconditionally. The specific meaning of the copied
 *   fields is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_state_fields_from_source(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 0xc) = *(uint32_t *)(iVar1 + 0x1c);
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(iVar1 + 0x28);
  *(uint32_t *)(param_1 + 0x14) = *(uint32_t *)(iVar1 + 8);
  wait_flg_obj((void *)(param_1 + 0x18),0);
  return 1;
}
