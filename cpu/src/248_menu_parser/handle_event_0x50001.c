/* @k10d handle_event_0x50001 @ 0x104dec4a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Stores param_3 at offset 0x90 of the object and invokes a virtual method with a boolean
 *   flag.
 * summary:
 *   The function checks if param_2 equals 0x50001. If so, it writes param_3 to the object
 *   at offset 0x90 and calls a virtual function (slot 1) on the object pointed to by the
 *   pointer at offset 0x7c, passing a boolean derived from param_3. It always returns 1.
 *   The specific subsystem or meaning of the event ID 0x50001 is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

uint32_t handle_event_0x50001(cls_105bb0ec *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0x50001) {
    param_1->field59_0x90 = (char)((uint)param_3 >> 0x18);
    param_1->field_0x91 = (char)((uint)param_3 >> 0x10);
    param_1->field_0x92 = (char)((uint)param_3 >> 8);
    param_1->field_0x93 = (char)param_3;
    iVar1 = *(int *)param_1->field_0x7c;
    (((vtbl_entry*)(iVar1))[1].fn)((int)param_1->field_0x7c + (int)*(short *)(iVar1 + 8),param_3 != 0);
  }
  return 1;
}
