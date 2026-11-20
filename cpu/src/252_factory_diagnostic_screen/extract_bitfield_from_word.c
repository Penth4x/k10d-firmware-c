/* @k10d extract_bitfield_from_word @ 0x104e4e18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t extract_bitfield_from_word(int param_1,uint *param_2)

{
  struct {
    int iStack_14;
    uint uStack_10;
    uint uStack_c;
  } _cfg_14;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  uintptr_t sp;
  alloc_zeroed_struct_104815e0(&_cfg_14.iStack_14);
  iVar3 = query_state_with_lock(*(uint32_t *)(param_1 + 0x4c),uRam80010bb8,&_cfg_14.iStack_14);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar2 = 0x1f;
    do {
      if ((_cfg_14.iStack_14 - 1U >> (uVar2 & 0x1f) & 1) != 0) break;
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
    uVar5 = 0x20 - (uVar2 + 1);
    *param_2 = _cfg_14.uStack_10 >> (uVar5 & 0x1f);
    bVar1 = (byte)(uVar2 + 1);
    param_2[1] = _cfg_14.uStack_10 << (bVar1 & 0xf);
    param_2[2] = _cfg_14.uStack_c >> (uVar5 & 0x1f);
    param_2[3] = _cfg_14.uStack_c << (bVar1 & 0xf);
    uVar4 = 1;
  }
  free_heap_if_flagged_10481604(&_cfg_14.iStack_14,2);
  return uVar4;
}
