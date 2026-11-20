/* @k10d get_or_create_singleton_object_104cfcea @ 0x104cfcea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104cfcea(void)

{
  if (iRam80059cbc == 0) {
    iRam80059cbc = 1;
    cls_105b9afc_new((cls_105b9afc *)0x80059ca4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800107f0/*SDRAM*/);
  }
  return 0x80059ca4/*SDRAM*/;
}
