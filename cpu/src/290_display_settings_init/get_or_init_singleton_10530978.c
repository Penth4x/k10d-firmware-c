/* @k10d get_or_init_singleton_10530978 @ 0x10530978
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 290_display_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_singleton_10530978(void)

{
  if (iRam8005b104 == 0) {
    iRam8005b104 = 1;
    alloc_one_byte_if_null_10530a18(0x8005b100/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001487c/*SDRAM*/);
  }
  return 0x8005b100/*SDRAM*/;
}
