/* @k10d get_or_init_singleton_object_104c2c1e @ 0x104c2c1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_singleton_object_104c2c1e(void)

{
  if (iRam80059c88 == 0) {
    iRam80059c88 = 1;
    cls_105b9410_new((void *)0x80059be8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800107b4/*SDRAM*/);
  }
  return 0x80059be8/*SDRAM*/;
}
