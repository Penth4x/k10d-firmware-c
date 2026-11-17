/* @k10d set_mode_and_update_byte @ 0x103e449a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into a struct field and conditionally updates another byte field based
 *   on specific mode values.
 * summary:
 *   The function writes param_2 to offset 0x28 of the object pointed to by param_1. If the
 *   byte at offset 0x36 is zero, it checks the value at 0x28 against several specific
 *   integers (0xc, 0x11, 7, 0, 1, 3, 0x19, 9, 0x18, 0x2c, 10). For matching values, it
 *   calls check_kernel_object_id_valid with a pointer to offset 0x18 and writes a specific
 *   constant (0x50, 0x8c, 0xb4, or 200) to offset 0x48. It returns 0 if any condition
 *   matched, otherwise it returns the original param_1 pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int set_mode_and_update_byte(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x28) = param_2;
  iVar2 = param_1;
  if (*(char *)(param_1 + 0x36) == '\0') {
    if ((param_2 == 0xc) || (param_2 == 0x11)) {
      check_kernel_object_id_valid((void *)(param_1 + 0x18));
      *(uint8_t *)(param_1 + 0x48) = 0x50;
      iVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
      check_kernel_object_id_valid((void *)(param_1 + 0x18));
      *(uint8_t *)(param_1 + 0x48) = 0x8c;
      iVar2 = 0;
    }
    if ((*(int *)(param_1 + 0x28) == 0x19) || (*(int *)(param_1 + 0x28) == 9)) {
      check_kernel_object_id_valid((void *)(param_1 + 0x18));
      *(uint8_t *)(param_1 + 0x48) = 0x50;
      iVar2 = 0;
    }
    if (*(int *)(param_1 + 0x28) == 0x18) {
      check_kernel_object_id_valid((void *)(param_1 + 0x18));
      *(uint8_t *)(param_1 + 0x48) = 0xb4;
      iVar2 = 0;
    }
    if (*(int *)(param_1 + 0x28) == 0x2c) {
      check_kernel_object_id_valid((void *)(param_1 + 0x18));
      *(uint8_t *)(param_1 + 0x48) = 0x8c;
      iVar2 = 0;
    }
    if (*(int *)(param_1 + 0x28) == 10) {
      check_kernel_object_id_valid((void *)(param_1 + 0x18));
      *(uint8_t *)(param_1 + 0x48) = 200;
      iVar2 = 0;
    }
  }
  return iVar2;
}
