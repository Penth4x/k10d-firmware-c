/* @k10d check_bit2_of_field_at_offset_0x7c @ 0x10431dee
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 6-byte field at param_1+0x7c and returns true if bit 2 of the first byte is
 *   clear.
 * summary:
 *   Calls eventflag_wai_flg to read 6 bytes from the object offset 0x7c into a local
 *   buffer, then calls eventflag_clr_flg on the same location. Returns a boolean based on
 *   whether bit 2 (value 4) of the first byte read is zero. The specific meaning of the
 *   field at offset 0x7c is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit2_of_field_at_offset_0x7c(void *param_1)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)((int)param_1 + 0x7c),6,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)((int)param_1 + 0x7c),6);
  return (uStack_c & 4) == 0;
}
