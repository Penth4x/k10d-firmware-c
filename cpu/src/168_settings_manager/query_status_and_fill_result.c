/* @k10d query_status_and_fill_result @ 0x1047c4f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_status_and_fill_result(int param_1,uint32_t *param_2)

{
  struct {
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint uStack_c;
  } _cfg_14;
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  alloc_zeroed_struct_104815e0(&_cfg_14.uStack_14);
  uVar2 = 1;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    iVar1 = query_state_with_lock(*(uint32_t *)(param_1 + 0x58),*(uint32_t *)(param_1 + 100),&_cfg_14.uStack_14);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *param_2 = _cfg_14.uStack_10;
      if (_cfg_14.uStack_c < 6) {
        iVar1 = 0;
      }
      else {
        iVar1 = _cfg_14.uStack_c - 5;
      }
      param_2[1] = iVar1;
      param_2[2] = _cfg_14.uStack_14;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  free_heap_if_flagged_10481604(&_cfg_14.uStack_14,2);
  return uVar2;
}
