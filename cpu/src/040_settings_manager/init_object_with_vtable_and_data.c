/* @k10d init_object_with_vtable_and_data @ 0x10392a64
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by zeroing a flag, copying 8 bytes of static data,
 *   setting a self-referential pointer, and conditionally invoking a virtual method or a
 *   setup routine.
 * summary:
 *   The function writes zero to offset 0x20 of the object, calls an unknown helper, and
 *   copies 8 bytes from a static location to offset 0x70. It sets the second field to point
 *   to the third field. It then checks a status via call_two_helpers_and_return_10394a0c;
 *   if zero, it calls virtual slot 6 (offset 0x34). If non-zero, it attempts a setup via
 *   forward_three_params_to_helper_10394a38; on success, it calls three other helpers and
 *   returns the object pointer. On failure or if the initial status was zero, it calls
 *   create_and_configure_object_10393b48 with arguments (6, 1, param_1) and returns the
 *   result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * init_object_with_vtable_and_data(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t uStack_14;
  uint32_t uStack_10;
  byte bStack_9;
  
  *(uint8_t *)(param_1 + 0x20) = 0;
  init_two_sram_objects();
  iVar1 = 8;
  do {
    iVar3 = iVar1 + -4;
    *(uint32_t *)((int)param_1 + iVar1 + 0x70) = *(uint32_t *)(iVar1 + -0x7ffe5b5c);
    iVar1 = iVar3;
  } while (iVar3 != 0);
  param_1[2] = (int)(param_1 + 3);
  iVar1 = call_two_helpers_and_return_10394a0c();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x34))((int)*(short *)(*param_1 + 0x30) + (int)param_1);
  }
  else {
    bStack_9 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    iVar1 = forward_three_params_to_helper_10394a38(param_1,&bStack_9,&uStack_14,&uStack_10);
    if (iVar1 != 0) {
      set_three_fields_at_offset_c(param_1,(uint)bStack_9,(short)uStack_14,(short)uStack_10);
      call_three_init_helpers_10392d02(param_1);
      init_object_with_two_ids_10392cb2(param_1);
      request_ui_sync_code_4((void *)param_1[2]);
      get_or_create_sram_object_1040a240();
      init_object_flag_and_subobj(__frv_reg_unset(4));
      return param_1;
    }
    (**(code **)(*param_1 + 0x34))((int)*(short *)(*param_1 + 0x30) + (int)param_1);
  }
  piVar2 = (int *)create_and_configure_object_10393b48(6,1,param_1);
  return piVar2;
}
