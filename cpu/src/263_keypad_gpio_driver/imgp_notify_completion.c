/* @k10d imgp_notify_completion @ 0x104fe30c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual callback on the image-processor object to signal completion or status
 *   update.
 * summary:
 *   Retrieves a sub-object pointer from offset 0x18 of the image-processor instance. Calls
 *   virtual slot 3 (offset 0x24) of that sub-object, passing a this-adjusted pointer and
 *   the parent object's offset 0x4. This is virtual method slot 4 of the image-processor
 *   driver class, likely used to propagate completion events or state changes to a client
 *   or event handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d48e4": ignoring multiple overlapping fields */

void imgp_notify_completion(cls_105d48e4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x18 + 4);
  (((vtbl_entry*)(iVar1))[4].fn)
            (param_1->field_0x18 + 4 + (int)((vtbl_entry*)(iVar1))[4].adj,&param_1->field_0x4);
  return;
}
