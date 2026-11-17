/* @k10d write_three_mmio_registers_10412506 @ 0x10412506
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes three 16-bit values to consecutive MMIO offsets based on a mode flag.
 * summary:
 *   Selects source offsets (0x80/0x82/0x7e or 0x86/0x88/0x84) from param_1 based on
 *   param_2. Calls send_two_word_pair_over_ch2 three times with fixed destination offsets
 *   0x47, 0x48, and 0x46, passing the loaded values (with 0x1000 ORed to the third). The
 *   role of send_two_word_pair_over_ch2 and the specific hardware registers is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_mmio_registers_10412506(int param_1,int param_2)

{
  uint16_t uVar1;
  uint16_t uVar2;
  ushort uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    uVar1 = *(uint16_t *)(param_1 + 0x86);
    uVar2 = *(uint16_t *)(param_1 + 0x88);
    iVar4 = 0x84;
  }
  else {
    uVar1 = *(uint16_t *)(param_1 + 0x80);
    uVar2 = *(uint16_t *)(param_1 + 0x82);
    iVar4 = 0x7e;
  }
  uVar3 = *(ushort *)(iVar4 + param_1);
  send_two_word_pair_over_ch2(param_1,0x47,uVar1,param_2);
  send_two_word_pair_over_ch2(param_1,0x48,uVar2,param_2);
  send_two_word_pair_over_ch2(param_1,0x46,uVar3 | 0x1000,param_2);
  return;
}
