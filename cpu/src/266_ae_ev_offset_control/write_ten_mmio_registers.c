/* @k10d write_ten_mmio_registers @ 0x105029fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Writes ten consecutive values from a memory buffer to a fixed set of MMIO addresses.
 * summary:
 *   The function reads ten values (mix of bytes, halfwords, and words) from the buffer
 *   pointed to by param_3 and writes them to ten hardcoded addresses in the 0x10456xxx
 *   range. It passes param_2 as the first argument to each write operation. The specific
 *   hardware block or subsystem controlled by these addresses is not identifiable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_ten_mmio_registers(uint32_t param_1,uint32_t param_2,uint8_t *param_3)

{
  (*(code *)0x10456d4c/*ROM*/)(param_2,*param_3);
  (*(code *)0x10456d8c/*ROM*/)(param_2,param_3[1]);
  (*(code *)0x10456dc6/*ROM*/)(param_2,param_3[2]);
  (*(code *)0x10456e00/*ROM*/)(param_2,*(uint16_t *)(param_3 + 4));
  (*(code *)0x10456e1e/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x12));
  (*(code *)0x10456e3c/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x10));
  (*(code *)0x10456e5a/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x16));
  (*(code *)0x10456e78/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x14));
  (*(code *)0x10456e96/*ROM*/)(param_2,*(uint32_t *)(param_3 + 0xc));
  (*(code *)0x10456eb6/*ROM*/)(param_2,*(uint32_t *)(param_3 + 8));
  return;
}
