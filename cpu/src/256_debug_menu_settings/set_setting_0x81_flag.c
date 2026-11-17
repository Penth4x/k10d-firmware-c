/* @k10d set_setting_0x81_flag @ 0x104f1928
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Sets setting ID 0x81 to 1 or 0 based on the boolean value of param_2.
 * summary:
 *   Reads a pointer from offset 0xc of param_1 and passes it to setting_set along with the
 *   constant ID 0x81. The value written is 1 if param_2 is non-zero, otherwise 0. This acts
 *   as a boolean setter for a specific configuration flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_0x81_flag(int param_1,int param_2)

{
  setting_set(*(int *)(param_1 + 0xc),0x81,(uint)(param_2 != 0));
  return;
}
