/* @k10d send_nine_param_updates @ 0x104126bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Conditionally sends nine parameter updates via a helper if two object flags are non-
 *   zero.
 * summary:
 *   Checks two byte fields at offsets 0xbd and 0xc4 in the object pointed to by param_1. If
 *   both are non-zero, it calls send_two_byte_pairs_over_ch2 nine times with specific
 *   command codes (0x861-0x864, 0x868-0x86b) and derived values from param_2 and param_3.
 *   The derived values are bit-shifted and masked versions of the input parameters,
 *   suggesting they represent scaled dimensions or configuration values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_nine_param_updates(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0xbd) != '\0') && (*(char *)(param_1 + 0xc4) != '\0')) {
    uVar1 = (param_2 ^ 0xffffffff) + 1;
    uVar2 = (param_3 ^ 0xffffffff) + 1;
    send_two_byte_pairs_over_ch2(param_1,0x861,uVar1 >> 5 & 0xffff,uVar2 >> 5 & 0xffff);
    send_two_byte_pairs_over_ch2(param_1,0x862,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x863,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x864,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x868,uVar1 * 4 & 0x7c,uVar2 * 4 & 0x7c);
    send_two_byte_pairs_over_ch2(param_1,0x869,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x86a,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x86b,0,0);
  }
  return;
}
