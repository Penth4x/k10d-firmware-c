/* @k10d glyph_draw @ 0x10492fde
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed render_char_sequence)
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Iterates a null-terminated byte sequence, maps each byte to a table entry, and passes
 *   it to a per-item draw routine.
 * summary:
 *   Calls copy_first_field_to_second on param_1+0x18 to prepare the context. For each non-
 *   zero byte in param_2, it computes a pointer into the table at DAT_80048f7c (base +
 *   4*(byte-0x20)) and passes it to forward_struct_and_second_field. Finally, it sets the
 *   byte at param_1+9 to 1. The specific nature of the table entries and the draw routine
 *   is not determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void glyph_draw(void *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  
  copy_first_field_to_second((int)param_1 + 0x18);
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    while (uVar2 = (uint)bVar1, uVar2 != 0) {
      iVar3 = 0;
      pvVar4 = _DAT_80048f7c/*SDRAM*/;
      if (0x20 < uVar2) {
        do {
          iVar3 = iVar3 + 1;
          pvVar4 = (void *)((int)pvVar4 + 4);
        } while (iVar3 < (int)(uVar2 - 0x20));
      }
      forward_struct_and_second_field((int *)((int)param_1 + 0x18),pvVar4);
      param_2 = param_2 + 1;
      if (param_2 == (byte *)0x0) break;
      bVar1 = *param_2;
    }
  }
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
