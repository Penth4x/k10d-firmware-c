/* @k10d sr_dma_command @ 0x10470b2c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed build_and_send_dma_command)
 * unit: 162_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructs a 20-byte command structure on the stack and passes it to a transmission
 *   function.
 * summary:
 *   The function initializes a local 20-byte buffer with values derived from param_1,
 *   param_5, and param_6, along with fixed constants 0x280 and 0x1e0. It calls
 *   set_high_bit_of_read_value and get_or_init_sram_block_105343c4 to obtain additional
 *   parameters, then invokes actuator_drive with the buffer contents and other arguments.
 *   The specific subsystem (e.g., SR actuator) is not verifiable from the provided callee
 *   names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* SR actuator drive: builds 20-byte DMA cmd (0x280/0x1e0 + 2 u16 positions) -> FUN_105343f6. */

void sr_dma_command(int param_1,uint32_t param_2,uint32_t param_3,byte *param_4,
                   uint16_t param_5,uint16_t param_6)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t local_2c [20];
  
  puVar3 = (uint32_t *)local_2c;
  uVar1 = set_high_bit_of_read_value(*(uint32_t *)(param_1 + 0x20));
  uVar2 = get_or_init_sram_block_105343c4();
  *puVar3 = uVar1;
  *(uint16_t *)((int)puVar3 + 6) = 0x280;
  *(uint16_t *)((int)puVar3 + 10) = 0x1e0;
  *(uint16_t *)((int)puVar3 + 0xe) = param_5;
  *(uint16_t *)((int)puVar3 + 0x12) = param_6;
  actuator_drive(uVar2,param_4,((uint16_t)((uint64_t)(param_3) >> 16)),((uint16_t)((uint64_t)(param_2) >> 16)),*puVar3,*(uint16_t *)((int)puVar3 + 6),
                 *(uint16_t *)((int)puVar3 + 10),*(uint16_t *)((int)puVar3 + 0xe),
                 *(uint16_t *)((int)puVar3 + 0x12));
  return;
}
