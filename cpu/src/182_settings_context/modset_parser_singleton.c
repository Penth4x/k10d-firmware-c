/* @k10d modset_parser_singleton @ 0x10487298
 * name: verified (structural evidence: decomp)
 * unit: 182_settings_context (unit names are model-proposed)
 * purpose:
 *   Lazily constructs and returns the MODSET.TXT parser singleton at 0x80048a88 (flag
 *   0x80048b10).
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t modset_parser_singleton(void)

{
  if (_DAT_80048b10/*SDRAM*/ == 0) {
    _DAT_80048b10/*SDRAM*/ = 1;
    cls_105b2fd8_new((uint32_t *)0x80048a88/*SDRAM*/);
    prepend_to_singly_linked_list(0x80010338/*SDRAM*/);
  }
  return 0x80048a88/*SDRAM*/;
}
