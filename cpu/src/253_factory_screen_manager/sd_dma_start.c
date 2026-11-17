/* @k10d sd_dma_start @ 0x104e6920
 * name: verified (structural evidence: emulator: modelled as an immediate copy; required for card block reads)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Starts the SD block DMA channel at 0xd60: control +2 = 0x813, +0x14 source, +0x18 dest,
 *   +0x24 count = blocks<<9, start bit 0x8000; moves card buffer-port data to memory.
 * summary:
 *   VERIFIED: emulator: modelled as an immediate copy; required for card block reads
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_dma_start(void *param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  **(uint16_t **)((int)param_1 + 0xc) = 0;
  **(uint16_t **)((int)param_1 + 8) = 0x813;
  **(uint16_t **)((int)param_1 + 0x10) = 0x4a;
  **(uint32_t **)((int)param_1 + 0x14) = param_2;
  **(uint32_t **)((int)param_1 + 0x18) = param_3;
  **(uint32_t **)((int)param_1 + 0x1c) = 0;
  **(uint32_t **)((int)param_1 + 0x20) = 0;
  **(int **)((int)param_1 + 0x24) = param_4 << 9;
  **(uint32_t **)((int)param_1 + 0x28) = 0;
  **(ushort **)((int)param_1 + 0x10) = **(ushort **)((int)param_1 + 0x10) | 0x8000;
  return 1;
}
