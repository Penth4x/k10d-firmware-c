/* @k10d register_menu_item_with_flags @ 0x103c8960
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 060_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes an object by storing a pointer, setting a flag, and conditionally invoking
 *   a virtual method based on a status check.
 * summary:
 *   The function stores a pointer derived from param_1 into a global structure obtained via
 *   get_or_create_singleton_object_1050b118. It retrieves an object via menu_item_register
 *   and calls virtual slot 11 (offset 0x74) with argument 0. It sets a 16-bit field in
 *   param_1 to param_2. If bit 1 of param_2 is clear, it checks a status via
 *   get_field_at_offset_0x28; if zero, it calls the same virtual slot with argument 1,
 *   otherwise it sets a byte at offset 0x27 in param_1 to 1. Finally, it calls
 *   check_mode_transition_validity with param_1 and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_flags(int *param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = get_or_create_singleton_object_1050b118();
  *(int **)(iVar1 + 0x58) = param_1 + 5;
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(*(short *)(*(int *)(iVar1 + 0xc) + 0x70) + iVar1,0);
  *(ushort *)(param_1 + 3) = param_2;
  if ((param_2 & 2) != 2) {
    iVar2 = get_or_create_singleton_object_1050b118();
    iVar2 = get_field_at_offset_0x28(iVar2);
    if (iVar2 == 0) {
      (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))
                (*(short *)(*(int *)(iVar1 + 0xc) + 0x70) + iVar1,1);
    }
    else {
      *(uint8_t *)((int)param_1 + 0x27) = 1;
    }
  }
  check_mode_transition_validity(param_1,0);
  return;
}
