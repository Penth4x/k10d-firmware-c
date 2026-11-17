/* @k10d actuator_drive @ 0x105343f6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed iterate_char_table_entries)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Iterates a null-terminated byte array and calls a helper for each printable ASCII
 *   character.
 * summary:
 *   The function loops through param_2 until a null byte is found. For each byte in the
 *   range 0x20 to 0x86, it indexes a table at DAT_1061e5a8 and calls
 *   expand_bayer_macro_to_rgb with the table value, a row offset derived from param_3, a
 *   column offset derived from param_4, and five additional parameters. The prior note
 *   suggesting an actuator drive role is not supported by the pseudocode, which shows a
 *   character-table iteration pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Actuator drive (DMA path target of sr_dma_command). */

void actuator_drive(uint32_t param_1,byte *param_2,short param_3,short param_4,int param_5,
                   uint16_t param_6,uint16_t param_7,uint16_t param_8,uint16_t param_9)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  int *piVar5;
  int local_34 [5];
  
  piVar5 = local_34;
  uVar4 = (uint)(ushort)param_3 * 0x18 & 0xffff;
  bVar1 = *param_2;
  while (uVar2 = (uint)bVar1, uVar2 != 0) {
    if ((0x1f < uVar2) && (uVar2 < 0x87)) {
      iVar3 = *(int *)(&DAT_1061e5a8 + (uVar2 - 0x20) * 4);
      *piVar5 = param_5;
      *(uint16_t *)((int)piVar5 + 6) = param_6;
      *(uint16_t *)((int)piVar5 + 10) = param_7;
      *(uint16_t *)((int)piVar5 + 0xe) = param_8;
      *(uint16_t *)((int)piVar5 + 0x12) = param_9;
      expand_bayer_macro_to_rgb(param_1,(void *)(&DAT_1061e744 + iVar3),uVar4,(uint)(ushort)param_4 * 0x30 & 0xffff,*piVar5
                   ,*(ushort *)((int)piVar5 + 6),*(ushort *)((int)piVar5 + 10),
                   *(ushort *)((int)piVar5 + 0xe),*(ushort *)((int)piVar5 + 0x12));
      uVar4 = uVar4 + 0x18 & 0xffff;
    }
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  return;
}
