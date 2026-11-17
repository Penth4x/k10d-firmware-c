/* @k10d get_or_create_singleton_object_104bcd88 @ 0x104bcd88
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_104bcd88(void)

{
  if (iRam80059be4 == 0) {
    iRam80059be4 = 1;
    cls_105b93b8_new((void *)0x80049e48/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800107a0/*SDRAM*/);
  }
  return 0x80049e48/*SDRAM*/;
}
