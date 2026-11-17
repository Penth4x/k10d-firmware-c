/* @k10d process_pending_event_pair @ 0x104bd6d8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a 32-bit event pair at a computed offset and dispatches it if non-zero.
 * summary:
 *   Reads two 16-bit values from an array indexed by a count at param_1+0x8d0. If the pair
 *   is non-zero and the count is non-zero, it calls store_value_at_two_offsets, then
 *   call_helper_then_two_followups and compare_two_short_pairs_104c2112 with the event data
 *   and a pointer to param_1+0x8d4. If both processing calls succeed, it calls
 *   deep_copy_struct_with_subblocks. The function also calls initialize_three_block_struct
 *   at the start.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_pending_event_pair(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint16_t *puVar4;
  ushort *puVar5;
  
  initialize_three_block_struct((uint16_t *)(param_1 + 0xe04c));
  puVar5 = (ushort *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118);
  uVar3 = (uint)*puVar5;
  uVar2 = (uint)puVar5[1];
  if (((uVar3 != 0) || (uVar2 != 0)) && (*(int *)(param_1 + 0x8d0) != 0)) {
    store_value_at_two_offsets(param_1,0);
    puVar4 = (uint16_t *)(param_1 + 0x8d4);
    iVar1 = call_helper_then_two_followups(param_1,uVar3,uVar2,puVar4);
    if ((iVar1 != 0) &&
       (iVar1 = compare_two_short_pairs_104c2112(param_1,*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118,puVar4),
       iVar1 != 0)) {
      deep_copy_struct_with_subblocks((uint16_t *)(param_1 + 0xe04c),puVar4);
    }
  }
  return;
}
