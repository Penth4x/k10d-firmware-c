/* @k10d write_twelve_bytes_to_mmio_block @ 0x105094b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_twelve_bytes_to_mmio_block(int param_1,uint8_t *param_2)

{
  (*(code *)0x10454d22/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*param_2);
  (*(code *)0x10454daa/*ROM*/)(*(uint32_t *)(param_1 + 0x18),param_2[1]);
  (*(code *)0x10454dee/*ROM*/)(*(uint32_t *)(param_1 + 0x18),param_2[2]);
  (*(code *)0x10454e32/*ROM*/)(*(uint32_t *)(param_1 + 0x18),0);
  (*(code *)0x10454ea2/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 4));
  (*(code *)0x10454ec4/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 6));
  (*(code *)0x10454ee6/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 8));
  (*(code *)0x10454f08/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 10));
  (*(code *)0x10454e76/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 0xc));
  (*(code *)0x10454d66/*ROM*/)(*(uint32_t *)(param_1 + 0x18),param_2[0xe]);
  (*(code *)0x10454f2a/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 0x10));
  (*(code *)0x10454f4c/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 0x12));
  return;
}
