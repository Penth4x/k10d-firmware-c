/* @k10d invoke_virtual_slot_8_1036c3ba @ 0x1036c3ba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 8 of an object at iRam80018060 with a fixed this-adjustment and
 *   argument 0.
 * summary:
 *   The function performs a Cfront-style virtual call on the object pointer stored at
 *   iRam80018060. It reads the vtable pointer at offset 0x44 (slot 8) and the this-
 *   adjustment short at offset 0x40, then calls the method with the adjusted this pointer
 *   and a single argument of 0. No other side effects or callees are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_1036c3ba(void)

{
  (((vtbl_entry*)(iRam80018060))[8].fn)(((vtbl_entry*)(iRam80018060))[8].adj + -0x7ffe7fa0,0);
  return;
}
