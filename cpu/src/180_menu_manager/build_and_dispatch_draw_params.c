/* @k10d build_and_dispatch_draw_params @ 0x104867e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_dispatch_draw_params(int param_1,uint32_t param_2,uint32_t param_3,byte *param_4,uint16_t param_5
                 ,uint16_t param_6,char param_7)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t local_34 [24];
  
  puVar3 = (uint32_t *)local_34;
  uVar1 = set_high_bit_of_read_value(*(uint32_t *)(param_1 + 4));
  if (param_7 == '\0') {
    uVar2 = get_or_init_sram_block_105343c4();
    *puVar3 = uVar1;
    *(uint16_t *)((int)puVar3 + 6) = 0x280;
    *(uint16_t *)((int)puVar3 + 10) = 0x1e0;
    *(uint16_t *)((int)puVar3 + 0xe) = param_5;
    *(uint16_t *)((int)puVar3 + 0x12) = param_6;
    actuator_drive(uVar2,param_4,((uint16_t)param_3),((uint16_t)param_2),*puVar3,
                   *(uint16_t *)((int)puVar3 + 6),*(uint16_t *)((int)puVar3 + 10),
                   *(uint16_t *)((int)puVar3 + 0xe),*(uint16_t *)((int)puVar3 + 0x12));
  }
  else {
    uVar2 = *(uint32_t *)(param_1 + 4);
    *puVar3 = uVar1;
    *(uint16_t *)((int)puVar3 + 6) = 0x280;
    *(uint16_t *)((int)puVar3 + 10) = 0x1e0;
    *(uint16_t *)((int)puVar3 + 0xe) = param_5;
    *(uint16_t *)((int)puVar3 + 0x12) = param_6;
    *(char *)((int)puVar3 + 0x17) = param_7;
    call_helper_with_scaled_offsets(uVar2,param_4,((uint16_t)param_3),((uint16_t)param_2),*puVar3,*(uint16_t *)((int)puVar3 + 6),
                 *(uint16_t *)((int)puVar3 + 10),*(uint16_t *)((int)puVar3 + 0xe),
                 *(uint16_t *)((int)puVar3 + 0x12),*(uint8_t *)((int)puVar3 + 0x17));
  }
  return;
}
