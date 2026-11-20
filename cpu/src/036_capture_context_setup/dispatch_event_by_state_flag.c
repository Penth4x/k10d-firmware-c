/* @k10d dispatch_event_by_state_flag @ 0x10390728
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 036_capture_context_setup (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_state_flag(cls_1055a304 *param_1,uint param_2,uint32_t param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (param_1->field_0x80 == '\0') {
    update_three_field_record(&param_1->field_0x68,4,param_2,param_3);
    piVar2 = (int *)param_1->field_0x60;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0x20);
      swap_three_words_with_callbacks_10390e74(auStack_14,(int)&param_1->field_0x68);
      (((vtbl_entry*)(iVar3))[4].fn)((int)sVar1 + (int)piVar2,auStack_14);
      set_flg_obj(&param_1->field_0x4c);
    }
  }
  else {
    uVar4 = _DAT_105bb5f4/*ROM*/;
    if (param_2 != 3) {
      if (param_2 < 4) {
        if ((param_2 != 0) && (param_2 != 1)) {
          return;
        }
      }
      else if ((param_2 != 7) && (param_2 != 10)) {
        if (param_2 != 0x29) {
          return;
        }
        iVar3 = (*(code *)0x1036b8e8/*ROM*/)();
        uVar4 = _DAT_105bb5f4/*ROM*/;
        if (iVar3 != 0) {
          uVar4 = _DAT_105bb5f8/*ROM*/;
        }
      }
    }
    call_helper_with_0x50000((uint32_t)(param_1),(uint32_t)(uVar4));
  }
  return;
}
