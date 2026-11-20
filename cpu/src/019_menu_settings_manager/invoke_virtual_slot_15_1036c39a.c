/* @k10d invoke_virtual_slot_15_1036c39a @ 0x1036c39a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 15 of an object at iRam80018060 with a fixed this-adjustment and
 *   argument 0.
 * summary:
 *   The function performs a single Cfront-style virtual call on the object pointer stored
 *   at iRam80018060. It reads the vtable pointer at offset 0x3c (slot 15) and the this-
 *   adjustment at offset 0x38, then calls the method with the adjusted this pointer and an
 *   integer argument of 0. No other side effects or callees are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_15_1036c39a(void)

{
  (((vtbl_entry*)(iRam80018060))[7].fn)(((vtbl_entry*)(iRam80018060))[7].adj + -0x7ffe7fa0,0);
  return;
}
