/* @k10d build_feature_flag_mask @ 0x10515532
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Constructs a 32-bit flag mask from a data structure and stores it in a parameter-
 *   dependent offset.
 * summary:
 *   The function calls several unknown helpers (eventflag_clr_flg, reg_framework_send,
 *   eventflag_wai_flg) on a pointer derived from param_1. It then invokes a function at
 *   0x10507948 and check_struct_has_nonzero_bytes to retrieve a pointer to a byte array. It
 *   inspects specific bytes of this array to set bits 24-31 of a local mask variable.
 *   Finally, it stores this mask at param_1 + 0x33c or param_1 + 0x340 depending on
 *   param_2, and calls a virtual method on a local object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint build_feature_flag_mask(int param_1,int param_2)

{
  struct {
    int iStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    void * puStack_c;
  } _cfg_1c;
  int iVar1;
  int iVar2;
  uint32_t *puVar3;
  uint uVar4;
  uintptr_t sp;
  _cfg_1c.puStack_c = &DAT_1059e4d0/*ROM*/;
  _cfg_1c.uStack_14 = 0x800004;
  _cfg_1c.iStack_1c = param_1 + 4;
  puVar3 = (uint32_t *)(param_1 + 0x34c);
  _cfg_1c.uStack_10 = 0;
  _cfg_1c.iStack_18 = param_2;
  eventflag_clr_flg(puVar3,0x40);
  reg_framework_send(*(int *)(param_1 + 0x44) + 8);
  uVar4 = 0;
  eventflag_wai_flg(puVar3,0x40,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar3,0x40);
  iVar1 = (*(code *)0x10507948/*ROM*/)(*(uint32_t *)(param_1 + 0x44),param_2);
  if ((iVar1 != 0) && (iVar2 = check_struct_has_nonzero_bytes(iVar1), iVar2 != 0)) {
    if (*(char *)(iVar1 + 1) == '\0') {
      uVar4 = 0x1000000;
    }
    if (*(char *)(iVar1 + 3) == '\0') {
      uVar4 = uVar4 | 0x2000000;
    }
    if (*(char *)(iVar1 + 5) == '\0') {
      uVar4 = uVar4 | 0x4000000;
    }
    if (*(char *)(iVar1 + 6) == '\x01') {
      uVar4 = uVar4 | 0x8000000;
    }
    if (*(char *)(iVar1 + 7) == '\x01') {
      uVar4 = uVar4 | 0x10000000/*ROM*/;
    }
    if (*(char *)(iVar1 + 0x10) == '\x01') {
      uVar4 = uVar4 | 0x20000000;
    }
    if (*(char *)(iVar1 + 0x11) == '\x01') {
      uVar4 = uVar4 | 0x40000000;
    }
    if (*(char *)(iVar1 + 4) == '\x01') {
      uVar4 = uVar4 | 0x80000000/*SDRAM*/;
    }
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x33c) = uVar4;
  }
  else {
    *(uint *)(param_1 + 0x340) = uVar4;
  }
  virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  return uVar4;
}
