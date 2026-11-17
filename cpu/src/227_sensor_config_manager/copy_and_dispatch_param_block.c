/* @k10d copy_and_dispatch_param_block @ 0x104c1abc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool copy_and_dispatch_param_block(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  
  if (param_2[2] == -1) {
    bVar4 = false;
  }
  else {
    *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 4) = *param_2;
    *(uint16_t *)(*(int *)(param_1 + 0xfd94) + 8) = *(uint16_t *)(param_2 + 1);
    *(uint16_t *)(*(int *)(param_1 + 0xfd94) + 10) = *(uint16_t *)((int)param_2 + 6);
    *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 0xc) = param_2[2];
    iVar2 = copy_struct_fields_to_offset_104c22d4(*(void **)(param_1 + 0xfd94));
    iVar2 = invoke_object_method_and_check_flag_104bf71e(param_1,iVar2);
    bVar4 = false;
    if (iVar2 != 0) {
      **(uint8_t **)(param_1 + 0xfd94) = 1;
      iVar2 = *(int *)(param_1 + 0xfd94);
      uVar1 = *(uint32_t *)(param_1 + 0x8c8);
      *(uint32_t *)(iVar2 + 0x2f0) = *(uint32_t *)(param_1 + 0x8c4);
      *(uint32_t *)(iVar2 + 0x2f4) = uVar1;
      *(uint32_t *)(param_1 + 0x40) = 0xffffffff;
      *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 0x10) = 0xffffffff;
      pvVar3 = (void *)copy_struct_fields_to_offset_104c2310(*(uint32_t *)(param_1 + 0xfd94));
      *(uint32_t *)((int)pvVar3 + 0x1b0) = 0;
      bVar4 = invoke_object_method_and_check_flag_104bf9c0(param_1,pvVar3);
      if (bVar4) {
        copy_four_channel_params(param_1,param_2,pvVar3);
      }
      if (*(char *)(param_1 + 0xfd99) == '\0') {
        iVar2 = copy_struct_fields_to_offset_104c22d4(*(void **)(param_1 + 0xfd94));
        invoke_virtual_method_on_object_104bf7ee(param_1,iVar2);
        **(uint8_t **)(param_1 + 0xfd94) = 0;
      }
    }
  }
  return bVar4;
}
