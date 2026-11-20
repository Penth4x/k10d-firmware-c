/* @k10d get_or_create_singleton_object_104898cc @ 0x104898cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104898cc(void)

{
  if (iRam80048c3c == 0) {
    iRam80048c3c = 1;
    cls_105b38d0_new((cls_105b38d0 *)0x80048c24/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800103b8/*SDRAM*/);
  }
  return 0x80048c24/*SDRAM*/;
}
