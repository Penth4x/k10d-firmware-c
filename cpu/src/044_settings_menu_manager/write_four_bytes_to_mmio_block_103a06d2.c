/* @k10d write_four_bytes_to_mmio_block_103a06d2 @ 0x103a06d2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Writes four consecutive byte values (0x10, 0xf, 0xe, 0xd) to an object offset by 8,
 *   then calls a cleanup routine.
 * summary:
 *   The function takes a pointer in param_1, offsets it by 8, and calls
 *   call_helper_on_fetched_object four times with descending values 0x10, 0xf, 0xe, and
 *   0xd. It then calls clear_struct_field_at_offset_8 with the original param_1 pointer.
 *   The specific role of call_helper_on_fetched_object and clear_struct_field_at_offset_8
 *   is unknown, but the pattern suggests initializing or configuring a 4-byte structure or
 *   register block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_four_bytes_to_mmio_block_103a06d2(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_1 + 8);
  call_helper_on_fetched_object(pvVar1,0x10);
  call_helper_on_fetched_object(pvVar1,0xf);
  call_helper_on_fetched_object(pvVar1,0xe);
  call_helper_on_fetched_object(pvVar1,0xd);
  clear_struct_field_at_offset_8(param_1);
  return 0;
}
