/* @k10d get_or_init_static_buffer_103fe528 @ 0x103fe528
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_static_buffer_103fe528(void)

{
  if (iRam8001ce18 == 0) {
    iRam8001ce18 = 1;
    init_font_context_struct((void *)0x8001cdbc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fadc/*SDRAM*/);
  }
  return 0x8001cdbc/*SDRAM*/;
}
