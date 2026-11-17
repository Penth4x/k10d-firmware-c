/* @k10d set_object_field_by_index_1039abb0 @ 0x1039abb0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects a field offset from a 12-entry table based on param_2, calls a helper with the
 *   field value, then stores param_3 into a byte at param_1+param_2+0x28.
 * summary:
 *   The function maps param_2 (0..11) to a byte offset (0x34..0x60, step 4) and reads the
 *   32-bit value at param_1+offset, passing it along with param_3 to
 *   invoke_virtual_slot_14_1039cab4. After the call (or if param_2 is out of range), it
 *   writes the low byte of param_3 into the object at param_1+param_2+0x28. The callee
 *   invoke_virtual_slot_14_1039cab4 is not named, so the specific subsystem role is not
 *   determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_by_index_1039abb0(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  switch(param_2) {
  case 0:
    iVar1 = 0x34;
    break;
  case 1:
    iVar1 = 0x38;
    break;
  case 2:
    iVar1 = 0x3c;
    break;
  case 3:
    iVar1 = 0x40;
    break;
  case 4:
    iVar1 = 0x44;
    break;
  case 5:
    iVar1 = 0x48;
    break;
  case 6:
    iVar1 = 0x4c;
    break;
  case 7:
    iVar1 = 0x50;
    break;
  case 8:
    iVar1 = 0x54;
    break;
  case 9:
    iVar1 = 0x58;
    break;
  case 10:
    iVar1 = 0x5c;
    break;
  case 0xb:
    iVar1 = 0x60;
    break;
  default:
    goto LAB_1039ac08;
  }
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)(iVar1 + (int)param_1),param_3);
LAB_1039ac08:
  *(char *)((int)param_1 + param_2 + 0x28) = (char)param_3;
  return;
}
