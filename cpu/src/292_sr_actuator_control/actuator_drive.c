/* @k10d actuator_drive @ 0x105343f6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed iterate_char_table_and_call_helper)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Iterates a null-terminated byte string, and for each printable ASCII character
 *   (0x20-0x86) calls a helper with a table lookup and advancing offsets.
 * summary:
 *   The function loops through the byte array pointed to by param_2 until a null byte is
 *   found. For each byte in the range 0x20 to 0x86, it performs a table lookup in
 *   DAT_1061e5a8, stores five parameters into a local stack buffer, and calls
 *   expand_bayer_macro_to_rgb with the result and incrementing offsets (param_3 * 0x18 and
 *   param_4 * 0x30). The prior note suggesting this is an actuator drive function is not
 *   supported by the code, which is a generic string/table iteration routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Actuator drive (DMA path target of sr_dma_command). */

void actuator_drive
               (uint32_t param_1,byte *param_2,short param_3,short param_4,int param_5,
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
      expand_bayer_macro_to_rgb(param_1,&DAT_1061e744 + iVar3,uVar4,(uint)(ushort)param_4 * 0x30 & 0xffff,*piVar5
                   ,*(ushort *)((int)piVar5 + 6),*(ushort *)((int)piVar5 + 10),
                   *(ushort *)((int)piVar5 + 0xe),*(ushort *)((int)piVar5 + 0x12));
      uVar4 = uVar4 + 0x18 & 0xffff;
    }
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  return;
}
