/* @k10d invoke_virtual_slot_13_10371722 @ 0x10371722
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 13 of an object referenced at offset 0x20 of param_1.
 * summary:
 *   The function performs a Cfront-style virtual call. It loads a vtable pointer from
 *   param_1+0x20, selects the function pointer at offset 100 (slot 13), and calls it with
 *   an adjusted this pointer computed from the vtable's this-adjustment field at offset
 *   0x60. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_13_10371722(cls_10558104 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x20))[12].fn)
            ((int)&param_1->field_0x20 + (int)((vtbl_entry*)(param_1->field_0x20))[12].adj);
  return;
}
