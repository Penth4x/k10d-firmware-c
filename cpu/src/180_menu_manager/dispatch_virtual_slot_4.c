/* @k10d dispatch_virtual_slot_4 @ 0x10486bae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 4 on an object pointer and updates state fields based on the
 *   result.
 * summary:
 *   The function branches on param_2. If 2, it calls virtual slot 4 of the object at
 *   param_3 with argument 0x17. If the call returns non-zero, it sets a flag at offset
 *   0x31, calls set_flag_at_offset_0x12, and conditionally stores the result of
 *   get_or_create_singleton_10488998 or 0 into offset 0x1c. If param_2 is 1, it clears
 *   offset 0x1c, sets the flag, and calls set_flag_at_offset_0x12. Finally, it may redirect
 *   param_1 to the value at offset 0x1c if a byte at 0x1a is non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * dispatch_virtual_slot_4(uint32_t *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  if (param_2 == 2) {
    iVar1 = (**(code **)(*param_3 + 0x24))((int)*(short *)(*param_3 + 0x20) + (int)param_3,0x17);
    if (iVar1 != 0) {
      *(uint8_t *)((int)param_1 + 0x31) = 1;
      set_flag_at_offset_0x12(*param_1);
      if (param_1[0x1b] == 0) {
        uVar2 = get_or_create_singleton_10488998();
        param_1[0x1c] = uVar2;
      }
      else {
        param_1[0x1c] = 0;
      }
    }
    if (*(char *)(param_1 + 0x1a) != '\0') {
      param_1 = (uint32_t *)param_1[0x1c];
    }
  }
  else if (param_2 == 1) {
    param_1[0x1c] = 0;
    *(uint8_t *)((int)param_1 + 0x31) = 1;
    set_flag_at_offset_0x12(*param_1);
  }
  return param_1;
}
