/* @k10d poll_virtual_status_flag @ 0x10497198
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object to check a status condition and returns a cached
 *   value if the condition is met.
 * summary:
 *   The function checks if the global variable _DAT_8001053c is not 0xffff. If so, it calls
 *   virtual slot 2 of the object pointed to by param_1. If the virtual call returns 0, it
 *   resets _DAT_8001053c to 0xffff and returns the previous value of _DAT_8001053c.
 *   Otherwise, it returns 0xffff. This pattern suggests a one-shot status check or event
 *   consumption mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int poll_virtual_status_flag(cls_105b5410 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0xffff;
  if ((_DAT_8001053c/*SDRAM*/ != 0xffff) &&
     (iVar2 = (((vtbl_entry*)(param_1->field_0x0))[2].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[2].adj),
     iVar1 = _DAT_8001053c/*SDRAM*/, iVar2 == 0)) {
    _DAT_8001053c/*SDRAM*/ = 0xffff;
    iVar3 = iVar1;
  }
  return iVar3;
}
