/* @k10d dispatch_event_to_handler_103b3e88 @ 0x103b3e88
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Maps an event ID to an index and calls a handler function if the object is not in a
 *   blocked state.
 * summary:
 *   The function checks flags at offsets 0x66 and 0x67 of the object pointed to by param_1.
 *   If offset 0x67 is set, it performs a virtual call via the vtable at offset 0x2c. It
 *   stores param_2 at offset 0x30 and uses a switch statement to map specific event IDs
 *   (0x2040006-0x2040014) to indices 0-8. If a valid index is found, it increments a
 *   counter at offset 0x68, potentially sets the flag at 0x67 and calls
 *   call_helper_on_fetched_pointer when the counter reaches 2, then calls
 *   update_setting_based_on_check with the object's field at 0x28 and the mapped index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_handler_103b3e88(int param_1,uint32_t param_2)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x66) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x67) != '\0') {
    iVar3 = **(int **)(param_1 + 0x2c);
    (**(code **)(iVar3 + 0x14))
              ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x10),0x1120065,0);
  }
  *(uint32_t *)(param_1 + 0x30) = param_2;
  bVar1 = false;
  uVar2 = 0;
  switch(param_2) {
  default:
    goto LAB_103b3f06;
  case 0x2040006:
    uVar2 = 5;
    break;
  case 0x2040007:
    uVar2 = 6;
    break;
  case 0x2040008:
  case 0x204000e:
  case 0x2040012:
    uVar2 = 0;
    break;
  case 0x2040009:
  case 0x204000f:
  case 0x2040013:
    uVar2 = 1;
    break;
  case 0x204000a:
    uVar2 = 2;
    break;
  case 0x204000b:
    uVar2 = 3;
    break;
  case 0x204000c:
    uVar2 = 4;
    break;
  case 0x204000d:
  case 0x2040011:
  case 0x2040014:
    uVar2 = 8;
    goto LAB_103b3f0a;
  case 0x2040010:
    uVar2 = 7;
  }
  bVar1 = true;
LAB_103b3f06:
  if (bVar1) {
LAB_103b3f0a:
    if ((*(char *)(param_1 + 0x67) == '\0') &&
       (iVar3 = *(int *)(param_1 + 0x68) + 1, *(int *)(param_1 + 0x68) = iVar3, iVar3 == 2)) {
      *(uint8_t *)(param_1 + 0x67) = 1;
      call_helper_on_fetched_pointer();
    }
    update_setting_based_on_check(*(uint32_t *)(param_1 + 0x28),uVar2);
  }
  return;
}
