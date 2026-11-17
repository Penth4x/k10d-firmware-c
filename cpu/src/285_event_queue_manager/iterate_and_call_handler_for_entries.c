/* @k10d iterate_and_call_handler_for_entries @ 0x10529ed4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Loops over a count of 3-word entries in a linked list and calls a handler for each.
 * summary:
 *   Stores param_2 into the object at offset 0x10. Reads a count from offset 0x14 and a
 *   pointer to a list of 3-ushort entries from offset 0x18. For each entry, it extracts
 *   fields (low nibble of the 3rd word, high nibble, and a sign-like bit) and calls
 *   apply_directional_pixel_filter with the object and these extracted values. The specific
 *   camera subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_call_handler_for_entries(int param_1,uint32_t param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_18 [8];
  
  puVar6 = auStack_18;
  puVar5 = *(ushort **)(param_1 + 0x18);
  *(uint32_t *)(param_1 + 0x10) = param_2;
  if ((*(short *)(param_1 + 0x14) != 0) && (uVar4 = 0, *(short *)(param_1 + 0x14) != 0)) {
    do {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      *(ushort *)(puVar6 + 2) = uVar3 >> 8 & 0xf;
      puVar6[7] = (uVar3 & 0x8000) == 0;
      apply_directional_pixel_filter(param_1,(uint)uVar1,(uint)uVar2,uVar3 & 0xf,*(ushort *)(puVar6 + 2),puVar6[7]);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar4 < *(ushort *)(param_1 + 0x14));
  }
  return;
}
