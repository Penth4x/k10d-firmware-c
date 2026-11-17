/* @k10d query_two_flags_and_set_bits @ 0x104354f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 125_display_sync_init (unit names are model-proposed)
 * purpose:
 *   Reads two flags from a handle and sets corresponding bits in a status word.
 * summary:
 *   The function calls check_and_acquire_resource twice with indices 0 and 1 on the value
 *   at param_1+0x5c. It then calls write_object_field_byte on the value at param_1+0x1c,
 *   setting bit 0x11 if the first query is non-zero and bit 0xf if the second query is non-
 *   zero. The specific meaning of the flags and the status word is not determinable from
 *   the provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_two_flags_and_set_bits(int param_1)

{
  int iVar1;
  
  iVar1 = check_and_acquire_resource(*(uint32_t *)(param_1 + 0x5c),0);
  write_object_field_byte((void *)(*(uint32_t *)(param_1 + 0x1c)),0x11,iVar1 != 0);
  iVar1 = check_and_acquire_resource(*(uint32_t *)(param_1 + 0x5c),1);
  write_object_field_byte((void *)(*(uint32_t *)(param_1 + 0x1c)),0xf,iVar1 != 0);
  return;
}
