/* @k10d lens_fw_update_state_transition @ 0x1053652c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * lens_fw_update_state_transition(uint32_t *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_20 [12];
  
  puVar4 = auStack_20;
  iVar1 = (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,2);
  if (iVar1 != 0) {
    return (uint32_t *)0x0;
  }
  if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)((int)param_1 + 0x4d) == '\0')) {
    iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,10);
    if (iVar1 != 0) {
      *(uint8_t *)(param_1 + 0x13) = 1;
      set_flag_at_offset_0x2c(*param_1,1);
      uVar3 = 0x10621cc0;
      *(uint16_t *)(puVar4 + 2) = 7;
      *(uint16_t *)(puVar4 + 6) = 0xff;
      puVar4[0xb] = 0;
      uVar2 = 4;
      goto LAB_1053670a;
    }
    iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,9);
    if (iVar1 == 0) {
      return param_1;
    }
    *(uint8_t *)((int)param_1 + 0x4d) = 1;
    set_flag_from_bool_104706f6(*param_1,1);
    uVar3 = 0x10621ccc;
    *(uint16_t *)(puVar4 + 2) = 7;
    *(uint16_t *)(puVar4 + 6) = 0xff;
    puVar4[0xb] = 0;
  }
  else if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)((int)param_1 + 0x4d) != '\0')) {
    iVar1 = (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,9);
    if (iVar1 == 0) {
      return param_1;
    }
    *(uint8_t *)((int)param_1 + 0x4d) = 0;
    set_flag_from_bool_104706f6(*param_1,0);
    uVar3 = 0x10621cd8;
    *(uint16_t *)(puVar4 + 2) = 7;
    *(uint16_t *)(puVar4 + 6) = 0xff;
    puVar4[0xb] = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)((int)param_1 + 0x4d) == '\0')) {
      iVar1 = (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,10);
      if (iVar1 == 0) {
        return param_1;
      }
      *(uint8_t *)(param_1 + 0x13) = 0;
      set_flag_at_offset_0x2c(*param_1,0);
      uVar3 = 0x10621ce4;
      *(uint16_t *)(puVar4 + 2) = 7;
      *(uint16_t *)(puVar4 + 6) = 0xff;
      puVar4[0xb] = 0;
      uVar2 = 4;
      goto LAB_1053670a;
    }
    *(uint8_t *)(param_1 + 0x13) = 1;
    *(uint8_t *)((int)param_1 + 0x4d) = 0;
    set_flag_at_offset_0x2c(*param_1,0);
    set_flag_from_bool_104706f6(*param_1,0);
    *(uint16_t *)(puVar4 + 2) = 7;
    *(uint16_t *)(puVar4 + 6) = 0xff;
    puVar4[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,4,7,(byte *)0x10621cf0,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),puVar4[0xb]);
    uVar3 = 0x10621cfc;
    *(uint16_t *)(puVar4 + 2) = 7;
    *(uint16_t *)(puVar4 + 6) = 0xff;
    puVar4[0xb] = 0;
  }
  uVar2 = 5;
LAB_1053670a:
  build_and_dispatch_draw_params((int)param_1,uVar2,7,(byte *)uVar3,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),
               puVar4[0xb]);
  return param_1;
}
