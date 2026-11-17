/* @k10d check_flag_in_struct_field @ 0x10427ae0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Reads a 0x50-byte field from a struct and returns 1 if a specific bit is set.
 * summary:
 *   Calls eventflag_wai_flg to read data from offset 8 of the input structure into a local
 *   variable, then calls eventflag_clr_flg with a size of 0x40. Returns 1 if the read
 *   operation succeeded and bit 4 (0x10) of the read data is set, otherwise returns 0. The
 *   specific meaning of the flag is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_flag_in_struct_field(int param_1)

{
  bool bVar2;
  uint32_t uVar1;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  bVar2 = eventflag_wai_flg((uint32_t *)(param_1 + 8),0x50,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(param_1 + 8),0x40);
  uVar1 = 0;
  if ((bVar2) && ((uStack_c & 0x10) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
