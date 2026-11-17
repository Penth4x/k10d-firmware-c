/* @k10d classic_menu_reg @ 0x10486770
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed cls_105b2e98_delete)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b2e98: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   This is virtual slot 1 of class cls_105b2e98. It writes the vtable address 0x105b2e98
 *   into the object's vtable pointer at offset 0x48 (standard C++ deleting destructor
 *   pattern to mark the object as destroyed). If param_2 has bit 0 set, it calls heap_free
 *   to deallocate the object. The prior notes about 'service-menu registration' are
 *   incorrect; the code matches the standard deleting destructor idiom seen in all other
 *   cls_*_delete functions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Classic service-menu registration: if obj && (gate&1) -> [obj+0x48]=0x105b2e98 menu table; call
   0x10459e30. */

void classic_menu_reg(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x48) = &DAT_105b2e98/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
