/* @k10d query_object_via_virtual_call_104b56da @ 0x104b56da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_via_virtual_call_104b56da(int *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_2c [16];
  uint32_t uStack_1c;
  uint32_t uStack_c;
  
  uStack_c = 0;
  cls_105ab468_new(auStack_2c);
  *param_2 = 0;
  iVar2 = *(int *)*param_1;
  iVar2 = (**(code **)(iVar2 + 0x2c))
                    (*param_1 + (int)*(short *)(iVar2 + 0x28),param_1 + 1,1,&uStack_c);
  if (iVar2 == 0) {
    cls_105ab468_delete(auStack_2c,2);
    uVar1 = 0;
  }
  else {
    iVar2 = call_with_offset_lock_1048101c((void *)*param_1,param_1 + 1,auStack_2c);
    if (iVar2 == 0) {
      iVar2 = *(int *)*param_1;
      (**(code **)(iVar2 + 0x34))(*param_1 + (int)*(short *)(iVar2 + 0x30),uStack_c);
      cls_105ab468_delete(auStack_2c,2);
      uVar1 = 0;
    }
    else {
      *param_2 = uStack_1c;
      iVar2 = *(int *)*param_1;
      (**(code **)(iVar2 + 0x34))(*param_1 + (int)*(short *)(iVar2 + 0x30),uStack_c);
      cls_105ab468_delete(auStack_2c,2);
      uVar1 = 1;
    }
  }
  return uVar1;
}
