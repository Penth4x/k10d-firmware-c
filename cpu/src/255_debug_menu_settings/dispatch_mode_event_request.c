/* @k10d dispatch_mode_event_request @ 0x104ea32a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Dispatches a mode event request by invoking a virtual method on one of two objects
 *   selected by the high bits of the request word.
 * summary:
 *   The function checks if the high 16 bits of param_2 equal 0x13. If so, it dereferences
 *   the object pointer at param_1+0x14 and calls its virtual slot at offset 0x5c (slot 11).
 *   Otherwise, it dereferences the object pointer at param_1+0xc and calls its virtual slot
 *   at offset 0x1c (slot 3). The this-pointer for the virtual call is adjusted by the short
 *   value stored at the corresponding offset minus 4 (0x58 or 0x18). This acts as a
 *   polymorphic dispatcher for mode events, likely routing specific event types to
 *   different handler objects within the mode state structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_event_request(void *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0xffff0000) == 0x130000) {
    iVar1 = **(int **)((int)param_1 + 0x14);
    (**(code **)(iVar1 + 0x5c))((int)*(int **)((int)param_1 + 0x14) + (int)*(short *)(iVar1 + 0x58))
    ;
  }
  else {
    iVar1 = **(int **)((int)param_1 + 0xc);
    (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 0xc) + (int)*(short *)(iVar1 + 0x18));
  }
  return;
}
