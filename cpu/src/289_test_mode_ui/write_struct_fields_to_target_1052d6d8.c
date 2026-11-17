/* @k10d write_struct_fields_to_target_1052d6d8 @ 0x1052d6d8
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Writes multiple byte fields from a struct to a target address via a helper, with
 *   conditional and switch-based logic.
 * summary:
 *   The function reads several byte fields from a structure pointed to by param_1 and
 *   writes them to a target address derived from param_1 + 500 + 0x164 using field_setter.
 *   It conditionally calls send_thirty_three_bytes_1052dd40 or
 *   send_thirty_three_bytes_1052d880 based on a comparison of two struct fields. It also
 *   performs a switch on a specific field to determine additional register values to write.
 *   The pattern of writing specific offsets (0x50-0x53, 0xd, 0x84, etc.) suggests
 *   configuring a device or controller, but the specific subsystem is not identifiable from
 *   the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_struct_fields_to_target_1052d6d8(int param_1)

{
  char cVar1;
  int iVar2;
  uint8_t uVar3;
  int iVar4;
  
  field_setter(*(int *)(param_1 + 500) + 0x164,0x50,*(uint8_t *)(param_1 + 0x204));
  field_setter(*(int *)(param_1 + 500) + 0x164,0x51,0);
  field_setter(*(int *)(param_1 + 500) + 0x164,0x52,*(uint8_t *)(param_1 + 0x205));
  field_setter(*(int *)(param_1 + 500) + 0x164,0x53,*(uint8_t *)(param_1 + 0x206));
  cVar1 = *(char *)(param_1 + 0x207);
  if (cVar1 == *(char *)(param_1 + 0x22d)) {
    send_thirty_three_bytes_1052dd40(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  else {
    send_thirty_three_bytes_1052d880(param_1,*(int *)(param_1 + 500) + 0x164);
  }
  if (cVar1 == '\x0f') {
    cVar1 = '\f';
  }
  field_setter(*(int *)(param_1 + 500) + 0x164,0xd,cVar1);
  switch(cVar1) {
  default:
    goto LAB_1052d7bc;
  case '\x04':
    iVar2 = 0xe;
    uVar3 = 4;
    break;
  case '\x05':
    iVar2 = 0xe;
    uVar3 = 5;
    break;
  case '\x06':
    iVar2 = 0xe;
    uVar3 = 6;
    break;
  case '\f':
    iVar2 = 0x10;
    uVar3 = 0xc;
    break;
  case '\r':
    iVar2 = 0x10;
    uVar3 = 0xd;
    break;
  case '\x0e':
    iVar2 = 0x10;
    uVar3 = 0xe;
  }
  field_setter(*(int *)(param_1 + 500) + 0x164,iVar2,uVar3);
LAB_1052d7bc:
  field_setter(*(int *)(param_1 + 500) + 0x164,0x84,*(uint8_t *)(param_1 + 0x208));
  iVar4 = *(int *)(param_1 + 500) + 0x164;
  cVar1 = settings_getter(iVar4,0x50);
  iVar2 = 0x59;
  if (cVar1 != '\0') {
    iVar2 = 0x56;
  }
  field_setter(iVar4,iVar2,*(uint8_t *)(param_1 + 0x209));
  iVar4 = *(int *)(param_1 + 500) + 0x164;
  cVar1 = settings_getter(iVar4,0x50);
  iVar2 = 0x58;
  if (cVar1 != '\0') {
    iVar2 = 0x55;
  }
  field_setter(iVar4,iVar2,*(uint8_t *)(param_1 + 0x20a));
  iVar4 = *(int *)(param_1 + 500) + 0x164;
  cVar1 = settings_getter(iVar4,0x50);
  iVar2 = 0x5a;
  if (cVar1 != '\0') {
    iVar2 = 0x57;
  }
  field_setter(iVar4,iVar2,*(uint8_t *)(param_1 + 0x20b));
  return;
}
