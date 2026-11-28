/* @k10d copy_564_bytes_to_sram @ 0x100080f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_564_bytes_to_sram(void)

{
  int next_idx;
  int idx;

  /* Copy 564 bytes from ROM 0x10008154 down to SDRAM 0x80000448,
   * iterating from the top of the block toward the bottom. */
  idx = 0x234;
  do {
    next_idx = idx + -1;
    (&DAT_80000447/*SDRAM*/)[idx] = *(uint8_t *)(idx + 0x10008153/*ROM*/);
    idx = next_idx;
  } while (next_idx != 0);
  return;
}
