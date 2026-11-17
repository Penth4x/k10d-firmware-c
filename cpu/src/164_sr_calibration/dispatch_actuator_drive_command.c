/* @k10d dispatch_actuator_drive_command @ 0x10471496
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Builds a local parameter struct with fixed constants and dispatches it to one of two
 *   callees based on a flag.
 * summary:
 *   The function initializes a 24-byte local structure using a value derived from param_1
 *   (via set_high_bit_of_read_value) and fixed constants 0x280 and 0x1e0. It branches on
 *   param_7: if zero, it calls actuator_drive with the struct and other parameters;
 *   otherwise, it sets a flag byte in the struct and calls call_helper_with_scaled_offsets.
 *   The caller is a virtual method, suggesting this is part of an object's interface, but
 *   the specific subsystem is not identifiable from the code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_actuator_drive_command(int param_1,uint32_t param_2,uint32_t param_3,byte *param_4,uint16_t param_5
                 ,uint16_t param_6,char param_7)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t local_34 [24];
  
  puVar3 = (uint32_t *)local_34;
  uVar1 = set_high_bit_of_read_value(*(uint32_t *)(param_1 + 0x54));
  if (param_7 == '\0') {
    uVar2 = get_or_init_sram_block_105343c4();
    *puVar3 = uVar1;
    *(uint16_t *)((int)puVar3 + 6) = 0x280;
    *(uint16_t *)((int)puVar3 + 10) = 0x1e0;
    *(uint16_t *)((int)puVar3 + 0xe) = param_5;
    *(uint16_t *)((int)puVar3 + 0x12) = param_6;
    actuator_drive(uVar2,param_4,((uint16_t)((uint64_t)(param_3) >> 16)),((uint16_t)((uint64_t)(param_2) >> 16)),*puVar3,
                   *(uint16_t *)((int)puVar3 + 6),*(uint16_t *)((int)puVar3 + 10),
                   *(uint16_t *)((int)puVar3 + 0xe),*(uint16_t *)((int)puVar3 + 0x12));
  }
  else {
    uVar2 = *(uint32_t *)(param_1 + 0x54);
    *puVar3 = uVar1;
    *(uint16_t *)((int)puVar3 + 6) = 0x280;
    *(uint16_t *)((int)puVar3 + 10) = 0x1e0;
    *(uint16_t *)((int)puVar3 + 0xe) = param_5;
    *(uint16_t *)((int)puVar3 + 0x12) = param_6;
    *(char *)((int)puVar3 + 0x17) = param_7;
    call_helper_with_scaled_offsets(uVar2,param_4,((uint16_t)((uint64_t)(param_3) >> 16)),((uint16_t)((uint64_t)(param_2) >> 16)),*puVar3,*(uint16_t *)((int)puVar3 + 6),
                 *(uint16_t *)((int)puVar3 + 10),*(uint16_t *)((int)puVar3 + 0xe),
                 *(uint16_t *)((int)puVar3 + 0x12),*(uint8_t *)((int)puVar3 + 0x17));
  }
  return;
}
