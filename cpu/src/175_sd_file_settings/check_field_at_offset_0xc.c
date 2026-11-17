/* @k10d check_field_at_offset_0xc @ 0x10480cb8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_field_at_offset_0xc(int param_1)

{
  int iVar1;
  
  iVar1 = forward_three_args_to_helper_10459d64((void *)(param_1 + 0xc),1,0x1f);
  return 0 < iVar1;
}
