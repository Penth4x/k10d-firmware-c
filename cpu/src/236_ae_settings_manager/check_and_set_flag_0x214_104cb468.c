/* @k10d check_and_set_flag_0x214_104cb468 @ 0x104cb468
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with fields at offsets 0x48 and 0x84, stores the boolean result at
 *   offset 0x214, and sets offset 0x210 to 0xc0002.
 * summary:
 *   The function reads two 32-bit values from the object pointed to by param_1 (at offsets
 *   0x48 and 0x84) and passes them, along with the constant 1, to
 *   update_entry_pair_and_notify. The non-zero result of that call is stored as a boolean
 *   at offset 0x214 of the object. Finally, the constant 0xc0002 is written to offset
 *   0x210. The specific role of the object and the helper function is not determinable from
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_set_flag_0x214_104cb468(int param_1)

{
  int iVar1;
  
  iVar1 = update_entry_pair_and_notify(*(uint32_t *)(param_1 + 0x48),1,*(uint32_t *)(param_1 + 0x84));
  *(uint *)(param_1 + 0x214) = (uint)(iVar1 != 0);
  *(uint32_t *)(param_1 + 0x210) = 0xc0002;
  return;
}
