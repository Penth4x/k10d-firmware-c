/* @k10d select_value_by_two_indices @ 0x10434dbc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 123_menu_state_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t select_value_by_two_indices(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 0x30),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x2b);
  if (param_2 == 1) {
    uVar2 = _DAT_105bb5b4/*ROM*/;
    if (((iVar1 != 1) && (uVar2 = _DAT_105bb5b4/*ROM*/, iVar1 != 2)) && (uVar2 = _DAT_105bb5a0/*ROM*/, iVar1 == 3)
       ) {
      uVar2 = _DAT_105bb5b4/*ROM*/;
    }
  }
  else {
    uVar2 = _DAT_105bb5a4/*ROM*/;
    if (param_2 != 2) {
      if (param_2 == 3) {
        uVar2 = _DAT_105bb5b8/*ROM*/;
        if (((iVar1 != 1) && (uVar2 = _DAT_105bb5b8/*ROM*/, iVar1 != 2)) &&
           (uVar2 = _DAT_105bb5a8/*ROM*/, iVar1 == 3)) {
          uVar2 = _DAT_105bb5b8/*ROM*/;
        }
      }
      else if (param_2 == 4) {
        uVar2 = _DAT_105bb5bc/*ROM*/;
        if (((iVar1 != 1) && (iVar1 != 2)) && (uVar2 = _DAT_105bb5ac/*ROM*/, iVar1 == 3)) {
          uVar2 = _DAT_105bb5bc/*ROM*/;
        }
      }
      else {
        uVar2 = _DAT_105bb5b0/*ROM*/;
        if (param_2 != 5) {
          uVar2 = 0;
        }
      }
    }
  }
  cls_105a6d8c_delete(auStack_24,2);
  return uVar2;
}
