/* @k10d dispatch_virtual_on_result @ 0x104076da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Calls a helper, then invokes a virtual method on an object with a flag based on the
 *   helper's return value.
 * summary:
 *   The function prepares a stack structure using fields from param_1 and calls
 *   configure_pipeline_with_settings. It retrieves an object pointer via
 *   menu_item_register. If configure_pipeline_with_settings returns 0, it calls virtual
 *   slot 1 of the object with argument 0. Otherwise, it copies three 4-byte values from a
 *   pointer stored at param_1+0x3c into param_1+0x44..0x4c, calls
 *   call_helper_and_set_flag_10494b88, and then calls the same virtual slot with argument
 *   1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_on_result(int param_1,uint8_t param_2)

{
  struct {
    uint8_t uStack_1c;
    uint8_t uStack_1b;
    uint32_t uStack_18;
    uint8_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_1c;
  uint32_t *puVar1;
  int iVar2;
  uintptr_t sp;
  _cfg_1c.uStack_14 = 0;
  _cfg_1c.uStack_10 = 0;
  _cfg_1c.uStack_c = 0;
  _cfg_1c.uStack_1c = 0;
  _cfg_1c.uStack_18 = *(uint32_t *)(param_1 + 0x3c);
  _cfg_1c.uStack_1b = param_2;
  puVar1 = (uint32_t *)menu_item_register(param_1 + 8);
  iVar2 = configure_pipeline_with_settings(*(uint32_t *)(param_1 + 0x38),&_cfg_1c.uStack_1c);
  if (iVar2 == 0) {
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,0);
  }
  else {
    *(uint32_t *)(param_1 + 0x44) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 4);
    *(uint32_t *)(param_1 + 0x48) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 8);
    *(uint32_t *)(param_1 + 0x4c) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 0xc);
    call_helper_and_set_flag_10494b88(puVar1);
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,1);
  }
  return;
}
