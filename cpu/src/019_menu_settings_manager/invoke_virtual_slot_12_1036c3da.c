/* @k10d invoke_virtual_slot_12_1036c3da @ 0x1036c3da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 12 of the object at iRam80018060 with a this-adjustment.
 * summary:
 *   The function performs a single virtual method call using the Cfront idiom. It reads the
 *   vtable pointer from iRam80018060, accesses slot 12 (offset 100), and calls it with the
 *   object pointer adjusted by the short value at offset 0x60 plus a constant offset. No
 *   other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_1036c3da(void)

{
  (((vtbl_entry*)(iRam80018060))[12].fn)(((vtbl_entry*)(iRam80018060))[12].adj + -0x7ffe7fa0);
  return;
}
