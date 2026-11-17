/* @k10d set_flag_on_lens_update_object @ 0x10536936
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x70 of the lens firmware update object when the event ID is
 *   0xa0017.
 * summary:
 *   This is virtual method slot 5 of class cls_10621d20, which resides in the
 *   lens_firmware_update module. It checks if param_2 equals the constant 0xa0017; if so,
 *   it calls set_flg_obj on the memory location at param_1 + 0x70. The function returns 0
 *   unconditionally. The specific meaning of the flag and the event ID 0xa0017 is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_lens_update_object(int param_1,int param_2)

{
  if (param_2 == 0xa0017) {
    set_flg_obj((uint32_t *)(param_1 + 0x70));
  }
  return 0;
}
