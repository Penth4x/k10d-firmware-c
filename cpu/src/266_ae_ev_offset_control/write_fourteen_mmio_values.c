/* @k10d write_fourteen_mmio_values @ 0x105023c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Writes 14 consecutive 16-bit values from a parameter array to a fixed block of MMIO
 *   addresses.
 * summary:
 *   The function iterates through 14 specific addresses in the 0x10454b00-0x10454c70 range,
 *   writing 16-bit values derived from param_3 to each. The first 8 values are written
 *   directly, while the last 6 are right-shifted by 5 bits and masked to 16 bits. No
 *   callees are identified, and the specific hardware block or camera subsystem is not
 *   determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_fourteen_mmio_values(uint32_t param_1,uint32_t param_2,uint16_t *param_3)

{
  (*(code *)0x10454b0a/*ROM*/)(param_2,*param_3);
  (*(code *)0x10454b20/*ROM*/)(param_2,param_3[1]);
  (*(code *)0x10454b38/*ROM*/)(param_2,param_3[2]);
  (*(code *)0x10454b50/*ROM*/)(param_2,param_3[3]);
  (*(code *)0x10454bae/*ROM*/)(param_2,param_3[4]);
  (*(code *)0x10454bc4/*ROM*/)(param_2,param_3[5]);
  (*(code *)0x10454bda/*ROM*/)(param_2,param_3[6]);
  (*(code *)0x10454bf0/*ROM*/)(param_2,param_3[7]);
  (*(code *)0x10454c46/*ROM*/)(param_2,*(uint *)(param_3 + 8) >> 5 & 0xffff);
  (*(code *)0x10454c54/*ROM*/)(param_2,*(uint *)(param_3 + 10) >> 5 & 0xffff);
  (*(code *)0x10454c62/*ROM*/)(param_2,*(uint *)(param_3 + 0xc) >> 5 & 0xffff);
  (*(code *)0x10454c70/*ROM*/)(param_2,*(uint *)(param_3 + 0xe) >> 5 & 0xffff);
  return;
}
