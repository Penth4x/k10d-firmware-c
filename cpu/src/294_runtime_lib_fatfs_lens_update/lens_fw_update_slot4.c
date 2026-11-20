/* @k10d lens_fw_update_slot4 @ 0x10536502
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Virtual method slot 4 of the lens firmware update class, invoking three helper routines
 *   on the object.
 * summary:
 *   This function is the fourth virtual method of class cls_10621c8c, which resides in the
 *   lens_firmware_update module. It takes the object pointer as its first argument and
 *   sequentially calls three unnamed helper functions
 *   (reset_subobject_at_offset_0x2c_104706b2, trigger_sr_cal_transfer_104867c0,
 *   call_helper_with_second_field_104867ae) passing the object or its address. The specific
 *   behavior of these helpers is unknown, but the module context indicates this is part of
 *   the lens CPU firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void lens_fw_update_slot4(cls_10621c8c *param_1)

{
  reset_subobject_at_offset_0x2c_104706b2(param_1->field_0x0);
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
