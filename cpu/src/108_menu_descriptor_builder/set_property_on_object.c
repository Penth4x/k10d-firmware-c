/* @k10d set_property_on_object @ 0x1042a78e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Sets a property on an object retrieved from a container if a status check passes.
 * summary:
 *   Checks if param_2 is less than 0x1e and if read_virtual_property_field returns 1. If
 *   so, it retrieves an object via module_array_getter and calls a virtual method (slot 11)
 *   on it with param_3. Returns 0 on success, 0x82 if the status check fails, or 0x83 if
 *   the index is out of range.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_property_on_object(int param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0x83;
  if (param_2 < 0x1e) {
    iVar2 = read_virtual_property_field(*(uint32_t *)(param_1 + 0x14),0);
    if (iVar2 == 1) {
      piVar3 = (int *)module_array_getter(*(void **)(param_1 + 8),param_2);
      (**(code **)(*piVar3 + 0x5c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x58),param_3);
      uVar1 = 0;
    }
    else {
      uVar1 = 0x82;
    }
  }
  return uVar1;
}
