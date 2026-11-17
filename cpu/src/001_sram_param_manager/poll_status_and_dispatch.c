/* @k10d poll_status_and_dispatch @ 0x100f18f4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status flag, reads a state word into the output parameter, and dispatches to
 *   one of two handlers based on its low two bits.
 * summary:
 *   The function first calls check_status_bit_condition(1) to check a condition. If the
 *   condition is false, it calls store_value_at_dat_800482d4_offset_0x34(1). Otherwise, it
 *   reads a value via read_word_at_dat_offset_100f1f9e, stores it in *param_1, and
 *   branches: if the low two bits are 0b11 it calls call_four_init_helpers, else it calls
 *   dispatch_nine_bit_flags with the value. It then enters a loop calling
 *   read_byte_at_offset_0x2f, breaking when bits 1-2 are clear, with a single-iteration
 *   guard. Finally it calls clear_two_bitmasks(1, 0xf) and returns the initial status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_status_and_dispatch(ushort *param_1)

{
  int iVar1;
  ushort uVar3;
  uint uVar2;
  char cVar4;
  bool bVar5;
  
  iVar1 = check_status_bit_condition(1);
  cVar4 = '\x01';
  if (iVar1 == 0) {
    store_value_at_dat_800482d4_offset_0x34(1);
  }
  else {
    uVar3 = read_word_at_dat_offset_100f1f9e();
    *param_1 = uVar3;
    if ((uVar3 & 3) == 3) {
      call_four_init_helpers();
    }
    else {
      dispatch_nine_bit_flags(*param_1);
    }
    do {
      uVar2 = read_byte_at_offset_0x2f();
      if ((uVar2 & 6) == 0) break;
      bVar5 = cVar4 != '\0';
      cVar4 = cVar4 + -1;
    } while (bVar5);
  }
  clear_two_bitmasks(1,0xf);
  return iVar1;
}
