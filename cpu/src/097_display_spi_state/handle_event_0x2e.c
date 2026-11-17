/* @k10d handle_event_0x2e @ 0x1040fbc8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040fbda) overlaps instruction at (ram,0x1040fbd8)
    */

uint32_t handle_event_0x2e(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  if (param_2 != 0x2e) {
    return 0;
  }
  empty_noop_stub_103b76f2();
  if (*(char *)(param_1 + 0xc0) != '\0') {
    iVar4 = *(int *)(*(int *)(param_1 + 0x6c) + 4);
    (**(code **)(iVar4 + 0x5c))(*(int *)(param_1 + 0x6c) + (int)*(short *)(iVar4 + 0x58));
    set_flg_obj((uint32_t *)(param_1 + 0x74));
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 == (uVar1 - ((int)uVar1 >> 0x1f) & 0xfffffffe)) {
    set_flag_with_notify(*(void **)(param_1 + 0x44));
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 < 6) {
      iVar4 = *(int *)(param_1 + 0x6c);
      uVar3 = 0x50;
    }
    else if (iVar2 < 0xc) {
      iVar4 = *(int *)(param_1 + 0x6c);
      uVar3 = 0x6e;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x6c);
      if (0x11 < iVar2) {
        (**(code **)(*(int *)(iVar4 + 4) + 0x5c))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x58));
        goto code_r0x1040fcca;
      }
      uVar3 = 0x8c;
    }
  }
  else {
    if (0x12 < (int)uVar1) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x6c) + 4);
      (**(code **)(iVar4 + 0x5c))(*(int *)(param_1 + 0x6c) + (int)*(short *)(iVar4 + 0x58));
      set_flag_with_notify(*(void **)(param_1 + 0x44));
code_r0x1040fcca:
      set_flg_obj((uint32_t *)(param_1 + 0x74));
      goto code_r0x1040fcd8;
    }
    clear_flag_with_notify(*(void **)(param_1 + 0x44));
    iVar4 = *(int *)(param_1 + 0x6c);
    uVar3 = 10;
  }
  write_offset_to_object_field(iVar4,uVar3);
  set_bit0_in_word_at_offset_0x18(*(uint32_t *)(param_1 + 0x6c));
code_r0x1040fcd8:
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return 0;
}
