/* @k10d store_query_result_and_flag @ 0x104cb4d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with three fields from the object, stores a boolean result and a
 *   constant code.
 * summary:
 *   Reads a 32-bit value at offset 0x48 and two 16-bit values at offsets 0x6e and 0x70 from
 *   the object pointed to by param_1. Passes these to init_and_bind_object_slot and stores
 *   the non-zero result as a boolean at offset 0x214. Also writes the constant 0xc0004 to
 *   offset 0x210. The specific role of the helper and the meaning of the constant are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_query_result_and_flag(int param_1)

{
  int iVar1;
  
  iVar1 = init_and_bind_object_slot(*(uint32_t *)(param_1 + 0x48),*(uint16_t *)(param_1 + 0x6e),
                       *(uint16_t *)(param_1 + 0x70));
  *(uint *)(param_1 + 0x214) = (uint)(iVar1 != 0);
  *(uint32_t *)(param_1 + 0x210) = 0xc0004;
  return;
}
