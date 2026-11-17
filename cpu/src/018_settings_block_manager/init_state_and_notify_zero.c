/* @k10d init_state_and_notify_zero @ 0x1036b382
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_state_and_notify_zero(void)

{
  int iVar1;
  
  if (_DAT_8000439c/*SDRAM*/ == 0) {
    iVar1 = get_or_create_singleton_104ce316();
    _DAT_8000439c/*SDRAM*/ = *(int *)(iVar1 + 4);
  }
  if (iRam80018088 == 0) {
    wait_flg_obj((void *)0x80018088/*SDRAM*/,0);
  }
  copy_word_from_struct_at_offset_0x14((void *)0x800158d4/*SDRAM*/,0);
  return;
}
