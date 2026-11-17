/* @k10d init_object_with_status_flag @ 0x105368d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling three setup helpers and storing a boolean status flag
 *   at offset 0x1b.
 * summary:
 *   This function is virtual method slot 3 of class cls_10621d20. It calls
 *   set_two_fields_to_four, enable_display_output, and clear_lens_update_flag to configure
 *   the object, then calls read_lens_firmware_and_show_info to evaluate a condition. The
 *   result is stored as a boolean at offset 0x1b in the object, and the function returns
 *   the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_status_flag(uint32_t *param_1)

{
  int iVar1;
  
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  clear_lens_update_flag(param_1);
  iVar1 = read_lens_firmware_and_show_info(param_1);
  *(bool *)(param_1 + 0x1b) = iVar1 == 0;
  return (int)param_1;
}
