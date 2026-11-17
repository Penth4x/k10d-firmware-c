/* @k10d get_or_create_singleton_object_104a2fde @ 0x104a2fde
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104a2fde(void)

{
  if (iRam8004905c == 0) {
    iRam8004905c = 1;
    cls_105b6424_new((void *)0x80049020/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800105b0/*SDRAM*/);
  }
  return 0x80049020/*SDRAM*/;
}
