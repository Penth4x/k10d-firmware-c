/* @k10d set_state_flag_and_notify @ 0x10416eb2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Updates a state field and calls three helpers based on the value of param_2 and a
 *   status word at offset 0x1504.
 * summary:
 *   The function branches on param_2. If param_2 is 0 and the word at param_1+0x1504 is 2,
 *   it calls store_word_at_offset_0x1504 with 3, eventflag_clr_flg with 0x80, and
 *   set_flag_and_store_byte_1041b406 with 0, then sets the byte at param_1+0x1534 to 1. If
 *   param_2 is non-zero and the word at param_1+0x1504 is 0, it calls
 *   store_word_at_offset_0x1504 with 1, eventflag_clr_flg with 0x40, and
 *   set_flag_and_store_byte_1041b406 with 1, then sets the byte at param_1+0x1534 to 1. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_state_flag_and_notify(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x1504) == 2) {
      store_word_at_offset_0x1504(param_1,3);
      eventflag_clr_flg((uint32_t *)(param_1 + 0x1540),(uint)(0x80));
      set_flag_and_store_byte_1041b406(*(uint32_t *)(param_1 + 0x4c),0);
      *(uint8_t *)(param_1 + 0x1534) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x1504) == 0) {
    store_word_at_offset_0x1504(param_1,1);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x1540),(uint)(0x40));
    set_flag_and_store_byte_1041b406(*(uint32_t *)(param_1 + 0x4c),1);
    *(uint8_t *)(param_1 + 0x1534) = 1;
  }
  return;
}
