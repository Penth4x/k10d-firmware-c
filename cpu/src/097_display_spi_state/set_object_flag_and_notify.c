/* @k10d set_object_flag_and_notify @ 0x10416d46
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Sets a byte flag at offset 0x1535 based on param_2, calls a helper with the same value,
 *   and sets two flag objects.
 * summary:
 *   The function writes 0 or 1 to the byte at param_1+0x1535 depending on whether param_2
 *   is zero. It then calls store_word_at_offset_0x1500 with param_1 and the
 *   inverted/derived value (0 if param_2==0, else 1). Finally, it calls set_flg_obj on two
 *   4-byte fields at offsets 0x1538 and 0x1540 within the object pointed to by param_1. The
 *   specific camera subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_and_notify(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint8_t *)(param_1 + 0x1535) = 0;
    store_word_at_offset_0x1500(param_1,0);
    set_flg_obj((uint32_t *)(param_1 + 0x1538));
  }
  else {
    *(uint8_t *)(param_1 + 0x1535) = 1;
    store_word_at_offset_0x1500(param_1,1);
    set_flg_obj((uint32_t *)(param_1 + 0x1538));
  }
  set_flg_obj((uint32_t *)(param_1 + 0x1540));
  return;
}
