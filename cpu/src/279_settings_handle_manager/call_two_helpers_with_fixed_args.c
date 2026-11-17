/* @k10d call_two_helpers_with_fixed_args @ 0x10520af4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_fixed_args(void)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1052098e/*ROM*/)(0x1000c310/*ROM*/);
  (*(code *)0x105208fa/*ROM*/)(0x8005a2bc/*SDRAM*/,uVar1,0x100);
  return;
}
