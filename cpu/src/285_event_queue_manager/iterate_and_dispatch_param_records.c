/* @k10d iterate_and_dispatch_param_records @ 0x10529f3c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Loops over an array of 3-ushort records and calls a handler for entries whose first two
 *   fields exceed thresholds 0x24 and 0x14.
 * summary:
 *   Stores param_2 at offset 0x10 of the object in param_1. Reads a count from offset 0x16
 *   and a pointer from offset 0x1c. For each record, if field0 > 0x24 and field1 > 0x14, it
 *   extracts bits from field2 and calls apply_directional_pixel_filter with adjusted
 *   coordinates (field0-0x25, field1-0x15) and the extracted bits. The caller is
 *   dispatch_event_0x1180001. The specific camera subsystem is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_dispatch_param_records(int param_1,uint32_t param_2)

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
  puVar5 = *(ushort **)(param_1 + 0x1c);
  *(uint32_t *)(param_1 + 0x10) = param_2;
  if ((*(short *)(param_1 + 0x16) != 0) && (uVar4 = 0, *(short *)(param_1 + 0x16) != 0)) {
    do {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      if ((0x24 < uVar1) && (0x14 < uVar2)) {
        uVar3 = puVar5[2];
        *(ushort *)(puVar6 + 2) = uVar3 >> 8 & 0xf;
        puVar6[7] = (uVar3 & 0x8000) == 0;
        apply_directional_pixel_filter(param_1,(uint)(ushort)(uVar1 - 0x25),(uint)(ushort)(uVar2 - 0x15),uVar3 & 0xf,
                     *(ushort *)(puVar6 + 2),puVar6[7]);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar4 < *(ushort *)(param_1 + 0x16));
  }
  return;
}
