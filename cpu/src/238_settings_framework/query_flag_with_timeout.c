/* @k10d query_flag_with_timeout @ 0x104ce980
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Queries a flag at offset 0x24 in a structure, using a helper that sets a high-bit
 *   timeout indicator.
 * summary:
 *   The function calls eventflag_wai_flg with the address of a field at offset 0x24 in
 *   param_1, a modified version of param_2 (with bit 31 set), a pointer to a local
 *   variable, and a global constant. It then calls eventflag_clr_flg with the same field
 *   address and the local variable. Finally, it returns true if bit 31 of the local
 *   variable is clear, suggesting the operation completed without timing out or failing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool query_flag_with_timeout(int param_1,uint param_2)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)(param_1 + 0x24),param_2 | 0x80000000/*SDRAM*/,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(param_1 + 0x24),uStack_c);
  return (uStack_c & 0x80000000/*SDRAM*/) == 0;
}
