/* @k10d initialize_object_with_virtual_call_10446cb4 @ 0x10446cb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_virtual_call_10446cb4(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uVar1 = cls_105c1218_new(0);
  *(uint32_t *)((int)param_1 + 0x18) = uVar1;
  uStack_2c = 0xd60;
  uStack_28 = 0xd62;
  uStack_24 = 0xd64;
  uStack_20 = 0xd68;
  uStack_1c = 0xd6c;
  uStack_18 = 0xd70;
  uStack_14 = 0xd74;
  uStack_10 = 0xd78;
  uStack_c = 0xd7c;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (**(code **)(iVar2 + 0x14))
            (*(int *)((int)param_1 + 0x18) + (int)*(short *)(iVar2 + 0x10),&uStack_2c);
  return;
}
