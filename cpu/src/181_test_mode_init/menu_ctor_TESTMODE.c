/* @k10d menu_ctor_TESTMODE @ 0x10486ff6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_or_init_test_mode_obj)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a singleton object at 0x80048a18 using a flag at 0x80048a84 and
 *   returns its pointer.
 * summary:
 *   Checks if the global flag _DAT_80048a84 is zero. If so, sets it to 1, calls
 *   cls_105b2f68_new to construct an object at 0x80048a18, and calls
 *   prepend_to_singly_linked_list with 0x80010324. Returns the pointer 0x80048a18. The
 *   prior notes suggest this is related to a 'TEST MODE' family constructor, but the code
 *   itself only shows a standard lazy-initialization pattern for a singleton object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TEST MODE family ctor (works on Andrew's body via Image A reader patch). Latch 0x80048a84 */

uint32_t menu_ctor_TESTMODE(void)

{
  if (_DAT_80048a84/*SDRAM*/ == 0) {
    _DAT_80048a84/*SDRAM*/ = 1;
    cls_105b2f68_new((cls_105b2f68 *)0x80048a18/*SDRAM*/);
    prepend_to_singly_linked_list((uint32_t *)(0x80010324/*SDRAM*/));
  }
  return 0x80048a18/*SDRAM*/;
}
