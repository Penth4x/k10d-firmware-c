/* @k10d get_or_create_singleton_1051b824 @ 0x1051b824
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_1051b824(void)

{
  if (iRam8005a158 == 0) {
    iRam8005a158 = 1;
    cls_105d67dc_new((void *)0x8005a154/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80013394/*SDRAM*/);
  }
  return 0x8005a154/*SDRAM*/;
}
