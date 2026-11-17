/* @k10d dispatch_virtual_event_with_index @ 0x103a0f10
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on a sub-object and forwards a mapped index to a helper if
 *   state flags permit.
 * summary:
 *   Checks a byte flag at offset 0x41 and returns if set. Calls virtual slot 2 on the
 *   object pointer at offset 0x2c with constant 0x1120065. Maps the input parameter
 *   (0x2020001-0x2020006) to an index (0-5) and stores the raw parameter at offset 0x30. If
 *   the mapped index is valid and a second flag at 0x42 is clear, increments a counter at
 *   0x44, sets the flag if the counter reaches 2, calls call_helper_on_fetched_pointer, and
 *   finally calls set_setting_based_on_flag_104f142e with the pointer at 0x28 and the
 *   mapped index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_with_index(int param_1,uint32_t param_2)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x41) != '\0') {
    return;
  }
  iVar3 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar3 + 0x14))
            ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x10),0x1120065,0);
  bVar1 = false;
  *(uint32_t *)(param_1 + 0x30) = param_2;
  uVar2 = 0;
  switch(param_2) {
  case 0x2020001:
    uVar2 = 0;
    break;
  case 0x2020002:
    uVar2 = 1;
    break;
  case 0x2020003:
    uVar2 = 2;
    break;
  case 0x2020004:
    uVar2 = 3;
    break;
  case 0x2020005:
    uVar2 = 4;
    break;
  case 0x2020006:
    uVar2 = 5;
    goto LAB_103a0f7c;
  default:
    goto LAB_103a0f78;
  }
  bVar1 = true;
LAB_103a0f78:
  if (bVar1) {
LAB_103a0f7c:
    if ((*(char *)(param_1 + 0x42) == '\0') &&
       (iVar3 = *(int *)(param_1 + 0x44) + 1, *(int *)(param_1 + 0x44) = iVar3, iVar3 == 2)) {
      *(uint8_t *)(param_1 + 0x42) = 1;
      call_helper_on_fetched_pointer();
    }
    set_setting_based_on_flag_104f142e(*(uint32_t *)(param_1 + 0x28),uVar2);
  }
  return;
}
