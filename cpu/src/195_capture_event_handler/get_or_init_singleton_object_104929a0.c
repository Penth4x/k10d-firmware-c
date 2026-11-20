/* @k10d get_or_init_singleton_object_104929a0 @ 0x104929a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_104929a0(void)

{
  if (_DAT_80048f34/*SDRAM*/ == 0) {
    _DAT_80048f34/*SDRAM*/ = 1;
    cls_105b42fc_new((cls_105b42fc *)0x80048f30/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800104c8/*SDRAM*/);
  }
  return 0x80048f30/*SDRAM*/;
}
