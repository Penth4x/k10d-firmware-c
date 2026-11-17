/* @k10d update_object_link_and_flags @ 0x1051646e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Updates a pointer at offset 700 and clears a flag at 0x354 based on a comparison of
 *   param_2 with a value from a sub-object.
 * summary:
 *   The function reads a value from param_1+0x2b8 via get_field_at_offset_four_10516bec and
 *   compares it to param_2. If they match and param_2 is non-zero, it clears the byte at
 *   param_1+0x354. In both branches, if the int at param_1+700 is non-zero, it either loops
 *   through ushort entries at param_1+0x2c8 calling release_buffer_slot_by_index or calls
 *   iterate_and_release_entry_list, followed by zero_initialize_struct_fields. In the
 *   mismatch branch, it may also assign param_2 to param_1+700 if specific conditions on
 *   param_2 and param_1+0x355 are met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_link_and_flags(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(param_1 + 0x2b8);
  iVar1 = get_field_at_offset_four_10516bec((int)pvVar3);
  if ((iVar1 == param_2) && (param_2 != 0)) {
    if ((*(char *)(param_1 + 0x354) != '\0') &&
       (*(uint8_t *)(param_1 + 0x354) = 0, *(int *)(param_1 + 700) != 0)) {
      if (*(char *)(param_1 + 0x2c0) == '\0') {
        iVar1 = 0;
        do {
          uVar2 = (uint)*(ushort *)(param_1 + 0x2c8 + iVar1);
          if (uVar2 == 0) break;
          release_buffer_slot_by_index(param_1,*(int *)(param_1 + 700),uVar2);
          iVar1 = iVar1 + 2;
        } while (iVar1 < 0x20);
        zero_initialize_struct_fields((void *)(param_1 + 0x2b8));
      }
      else {
        iterate_and_release_entry_list(param_1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 700) != 0) {
      if (*(char *)(param_1 + 0x2c0) == '\0') {
        iVar1 = 0;
        do {
          uVar2 = (uint)*(ushort *)(param_1 + 0x2c8 + iVar1);
          if (uVar2 == 0) break;
          release_buffer_slot_by_index(param_1,*(int *)(param_1 + 700),uVar2);
          iVar1 = iVar1 + 2;
        } while (iVar1 < 0x20);
        zero_initialize_struct_fields(pvVar3);
      }
      else {
        iterate_and_release_entry_list(param_1);
      }
    }
    if (((param_2 != 0) && (*(short *)(*(int *)(param_2 + 0x20) + 0x140) != 3)) &&
       (*(char *)(param_1 + 0x355) == '\0')) {
      zero_initialize_struct_fields(pvVar3);
      *(int *)(param_1 + 700) = param_2;
    }
  }
  return;
}
