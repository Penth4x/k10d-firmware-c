/* @k10d handle_event_0x2e @ 0x1040fbc8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040fbda) overlaps instruction at (ram,0x1040fbd8)
    */

uint32_t handle_event_0x2e(cls_1059be70 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  if (param_2 != 0x2e) {
    return 0;
  }
  empty_noop_stub_103b76f2();
  if (param_1->field_0xc0 != '\0') {
    iVar4 = *(int *)(param_1->field_0x6c + 4);
    (((vtbl_entry*)(iVar4))[11].fn)(param_1->field_0x6c + (int)((vtbl_entry*)(iVar4))[11].adj);
    set_flg_obj(&param_1->field_0x74);
    return 0;
  }
  uVar1 = param_1->field_0x70;
  if (uVar1 == (uVar1 - ((int)uVar1 >> 0x1f) & 0xfffffffe)) {
    set_flag_with_notify((char*)(param_1) ->field_0x44);
    iVar2 = param_1->field_0x70;
    if (iVar2 < 6) {
      iVar4 = param_1->field_0x6c;
      uVar3 = 0x50;
    }
    else if (iVar2 < 0xc) {
      iVar4 = param_1->field_0x6c;
      uVar3 = 0x6e;
    }
    else {
      iVar4 = param_1->field_0x6c;
      if (0x11 < iVar2) {
        (((vtbl_entry*)(*(int *)(iVar4 + 4)))[11].fn)(iVar4 + ((vtbl_entry*)(*(int *)(iVar4 + 4)))[11].adj);
        goto code_r0x1040fcca;
      }
      uVar3 = 0x8c;
    }
  }
  else {
    if (0x12 < (int)uVar1) {
      iVar4 = *(int *)(param_1->field_0x6c + 4);
      (((vtbl_entry*)(iVar4))[11].fn)(param_1->field_0x6c + (int)((vtbl_entry*)(iVar4))[11].adj);
      set_flag_with_notify((char*)(param_1) ->field_0x44);
code_r0x1040fcca:
      set_flg_obj(&param_1->field_0x74);
      goto code_r0x1040fcd8;
    }
    clear_flag_with_notify((char*)(param_1) ->field_0x44);
    iVar4 = param_1->field_0x6c;
    uVar3 = 10;
  }
  write_offset_to_object_field(iVar4,uVar3);
  set_bit0_in_word_at_offset_0x18(param_1->field_0x6c);
code_r0x1040fcd8:
  param_1->field_0x70 = param_1->field_0x70 + 1;
  return 0;
}
