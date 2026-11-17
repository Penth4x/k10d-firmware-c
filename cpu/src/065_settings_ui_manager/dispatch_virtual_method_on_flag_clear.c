/* @k10d dispatch_virtual_method_on_flag_clear @ 0x103cc89e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object if a byte flag is set and a specific ID matches,
 *   then clears the flag.
 * summary:
 *   Checks if the byte at offset 0x27 of param_1 is non-zero and param_2 equals 0x1160002.
 *   If true, it retrieves an object via menu_item_register and calls a virtual method (slot
 *   at offset 0x74) with argument 1. It may call the method a second time if bits 1 and 2
 *   of the word at offset 0xc of param_1 are not both set. Finally, it clears the byte at
 *   offset 0x27.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cc900) overlaps instruction at (ram,0x103cc8fe)
    */

uint32_t dispatch_virtual_method_on_flag_clear(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)((int)param_1 + 0x27) != '\0') && (param_2 == 0x1160002)) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),1);
    iVar1 = menu_item_register(*param_1);
    if (((*(ushort *)(param_1 + 3) & 2) != 2) || ((*(ushort *)(param_1 + 3) & 4) != 4)) {
      (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))
                (*(short *)(*(int *)(iVar1 + 0xc) + 0x70) + iVar1,1);
    }
    *(uint8_t *)((int)param_1 + 0x27) = 0;
  }
  return 0;
}
