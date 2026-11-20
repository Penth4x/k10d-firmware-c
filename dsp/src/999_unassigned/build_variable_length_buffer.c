/* @k10d build_variable_length_buffer @ 0x000d6894
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies a variable-length byte sequence from a source buffer into a fixed destination
 *   structure, capping the length at 0x42.
 * summary:
 *   The function clamps the length stored in _DAT_0003c328 to a maximum of 0x42 (66). It
 *   writes the source pointer and clamped length into _DAT_0003c2ca and _DAT_0003c2cc. It
 *   then iterates up to the clamped length, calling toggle_bit3_and_call_helpers with each
 *   byte from the source buffer (masked to 16 bits) and storing the result sequentially
 *   starting at offset 4 of the destination structure. It calls FUN_000f29e8 and
 *   wait_if_flag_is_two before the loop and set_ram_flags_and_counters after the loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_variable_length_buffer(void)

{
  uint8_t uVar1;
  uint uVar2;
  int iVar3;
  
  if (0x42 < _DAT_0003c328) {
    _DAT_0003c328 = 0x42;
  }
  _DAT_0003c2ca = (uint16_t)_DAT_0003c324;
  _DAT_0003c2cc = _DAT_0003c328;
  FUN_000f29e8();
  wait_if_flag_is_two();
  uVar2 = 0;
  if (_DAT_0003c328 != 0) {
    iVar3 = 4;
    do {
      uVar1 = toggle_bit3_and_call_helpers(_DAT_0003c324 + uVar2 & 0xffff);
      (&DAT_0003c2ca)[iVar3] = uVar1;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (uVar2 < _DAT_0003c328);
  }
  set_ram_flags_and_counters();
  return;
}
