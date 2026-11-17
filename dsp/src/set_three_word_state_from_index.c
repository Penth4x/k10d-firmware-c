/* @k10d set_three_word_state_from_index @ 0x000df2b6
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Writes a value derived from a table entry into three global 32-bit words based on a
 *   selector index.
 * summary:
 *   Reads a 16-bit value from a table at offset param_1*2+0x3d000, sign-extends it, and
 *   writes it (or its negation, or zero) into globals _DAT_0003c830, _DAT_0003c834, and
 *   _DAT_0003c880 according to param_2 (0-7). The pattern suggests setting a state or
 *   configuration triplet where the sign and which slots are active depend on the case. No
 *   callees are invoked; all effects are direct global writes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_three_word_state_from_index(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_1 * 2 + 0x3d000);
  switch(param_2) {
  case 0:
    _DAT_0003c830 = 0;
    _DAT_0003c834 = iVar1 << 8;
    _DAT_0003c880 = _DAT_0003c834;
    break;
  case 1:
    _DAT_0003c830 = iVar1 << 8;
    _DAT_0003c834 = _DAT_0003c830;
    _DAT_0003c880 = _DAT_0003c830;
    break;
  case 2:
    _DAT_0003c830 = iVar1 << 8;
    _DAT_0003c834 = 0;
    _DAT_0003c880 = 0;
    break;
  case 3:
    _DAT_0003c830 = iVar1 << 8;
    _DAT_0003c834 = iVar1 * -0x100;
    _DAT_0003c880 = _DAT_0003c834;
    break;
  case 4:
    _DAT_0003c830 = 0;
    _DAT_0003c834 = iVar1 * -0x100;
    _DAT_0003c880 = _DAT_0003c834;
    break;
  case 5:
    _DAT_0003c830 = iVar1 * -0x100;
    _DAT_0003c834 = _DAT_0003c830;
    _DAT_0003c880 = _DAT_0003c830;
    break;
  case 6:
    _DAT_0003c830 = iVar1 * -0x100;
    _DAT_0003c834 = 0;
    _DAT_0003c880 = 0;
    break;
  case 7:
    _DAT_0003c830 = iVar1 * -0x100;
    _DAT_0003c834 = iVar1 << 8;
    _DAT_0003c880 = _DAT_0003c834;
  }
  return;
}
