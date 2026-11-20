/* @k10d initialize_object_with_virtual_call_10446cb4 @ 0x10446cb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_virtual_call_10446cb4(void *param_1)

{
  struct {
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_2c;
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uVar1 = (uintptr_t)(cls_105c1218_new((cls_105c1218 *)0x0));
  *(uint32_t *)((int)param_1 + 0x18) = uVar1;
  _cfg_2c.uStack_2c = 0xd60;
  _cfg_2c.uStack_28 = 0xd62;
  _cfg_2c.uStack_24 = 0xd64;
  _cfg_2c.uStack_20 = 0xd68;
  _cfg_2c.uStack_1c = 0xd6c;
  _cfg_2c.uStack_18 = 0xd70;
  _cfg_2c.uStack_14 = 0xd74;
  _cfg_2c.uStack_10 = 0xd78;
  _cfg_2c.uStack_c = 0xd7c;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (((vtbl_entry*)(iVar2))[2].fn)
            (*(int *)((int)param_1 + 0x18) + (int)((vtbl_entry*)(iVar2))[2].adj,&_cfg_2c.uStack_2c);
  return;
}
