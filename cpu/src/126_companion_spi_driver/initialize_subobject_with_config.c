/* @k10d initialize_subobject_with_config @ 0x10446c1c
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a subobject, stores it at offset 0x14, and calls its virtual slot 2 with a
 *   9-element config array.
 * summary:
 *   Calls cls_105c11c8_new(0) to allocate an object and stores the pointer at param_1+0x14.
 *   Constructs a stack array of 9 consecutive 4-byte values (0xd60 through 0xd7c) and
 *   passes it as an argument to virtual slot 2 of the newly allocated object. The caller is
 *   a virtual method of class cls_105a18b4, but no camera-specific subsystem is
 *   identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subobject_with_config(void *param_1)

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
  uVar1 = (uintptr_t)(cls_105c11c8_new((cls_105c11c8 *)0x0));
  *(uint32_t *)((int)param_1 + 0x14) = uVar1;
  _cfg_2c.uStack_2c = 0xd60;
  _cfg_2c.uStack_28 = 0xd62;
  _cfg_2c.uStack_24 = 0xd64;
  _cfg_2c.uStack_20 = 0xd68;
  _cfg_2c.uStack_1c = 0xd6c;
  _cfg_2c.uStack_18 = 0xd70;
  _cfg_2c.uStack_14 = 0xd74;
  _cfg_2c.uStack_10 = 0xd78;
  _cfg_2c.uStack_c = 0xd7c;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  (((vtbl_entry*)(iVar2))[2].fn)
            (*(int *)((int)param_1 + 0x14) + (int)((vtbl_entry*)(iVar2))[2].adj,&_cfg_2c.uStack_2c);
  return;
}
