/* @k10d get_or_create_singleton_object_10486db8 @ 0x10486db8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 181_test_mode_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_10486db8(void)

{
  if (iRam80048a14 == 0) {
    iRam80048a14 = 1;
    cls_105b2f20_new((cls_105b2f20 *)0x800489b8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010310/*SDRAM*/);
  }
  return 0x800489b8/*SDRAM*/;
}
