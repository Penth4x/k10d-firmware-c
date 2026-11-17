/* @k10d reset_object_three_fields @ 0x10506ffa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Resets three fields of a struct by calling three helper functions on offsets 0x10, 0xc,
 *   and 0x14.
 * summary:
 *   The function takes a pointer to a struct and calls three unnamed helpers on specific
 *   offsets. It passes the value at offset 0x10 to set_irq_mask_by_channel with constants
 *   -0x7ffffff3 and 1, passes the value at offset 0xc to set_mmio_flag_bit14 with 0, and
 *   passes the address of offset 0x14 to delete_signal_semaphore. The specific roles of
 *   these helpers and the struct are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_three_fields(int param_1)

{
  set_irq_mask_by_channel(*(int *)(param_1 + 0x10),-0x7ffffff3,1);
  set_mmio_flag_bit14(*(uint32_t *)(param_1 + 0xc),0);
  delete_signal_semaphore((void *)(param_1 + 0x14));
  return;
}
