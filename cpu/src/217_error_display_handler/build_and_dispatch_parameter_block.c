/* @k10d build_and_dispatch_parameter_block @ 0x104b532c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Constructs a 24-byte parameter block with fixed constants and dispatches it via a
 *   helper selected by a flag.
 * summary:
 *   The function initializes a local 24-byte buffer, setting specific 16-bit fields to
 *   constants 0x280 and 0x1e0 and copying parameters into other fields. It calls
 *   set_high_bit_of_read_value to retrieve a value for the first field. Depending on the
 *   boolean parameter param_7, it either calls actuator_drive or
 *   call_helper_with_scaled_offsets, passing the constructed buffer and other arguments.
 *   The specific subsystem is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_dispatch_parameter_block(uint32_t *param_1,uint32_t param_2,uint32_t param_3,byte *param_4,
                 uint16_t param_5,uint16_t param_6,char param_7)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t local_30 [24];
  
  puVar3 = (uint32_t *)local_30;
  uVar1 = set_high_bit_of_read_value(*param_1);
  if (param_7 == '\0') {
    uVar2 = param_1[1];
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
    uVar2 = *param_1;
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
