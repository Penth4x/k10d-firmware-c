/* @k10d finalize_object_and_invoke_virtual @ 0x10494d62
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally calls a cleanup routine, invokes a helper, retrieves a pointer, and calls
 *   a virtual method on the retrieved object.
 * summary:
 *   The function checks a flag at offset 0xac of the input object. If set, it calls
 *   iterate_and_dispatch_object_list and clears the flag. It then calls
 *   invoke_virtual_destroy_on_range. It retrieves a pointer via find_matching_list_entry,
 *   stores it at offset 0x60, and performs a virtual call on the object pointed to by that
 *   pointer using the vtable entry at offset 0x44.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void finalize_object_and_invoke_virtual(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xac) != '\0') {
    iterate_and_dispatch_object_list(param_1);
    *(uint8_t *)(param_1 + 0xac) = 0;
  }
  invoke_virtual_destroy_on_range(param_1);
  piVar1 = (int *)find_matching_list_entry(param_1);
  *(int **)(param_1 + 0x60) = piVar1;
  iVar2 = *(int *)(*piVar1 + 0xc);
  (**(code **)(iVar2 + 0x44))(*piVar1 + (int)*(short *)(iVar2 + 0x40));
  return;
}
