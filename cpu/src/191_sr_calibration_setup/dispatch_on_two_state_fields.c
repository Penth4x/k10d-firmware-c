/* @k10d dispatch_on_two_state_fields @ 0x1048dc9c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Checks two masked state fields in a struct and calls one of two handlers based on their
 *   values.
 * summary:
 *   The function reads an int at offset 8 (param_1+2) as a guard; if non-zero it inspects
 *   the low 5 bits of the first ushort and the low 5 bits of the ushort at offset 0x26. If
 *   both are zero (or the first is exactly 4) it calls issue_nine_region_draw_commands,
 *   otherwise it calls configure_metering_regions. It is virtual slot 2 of cls_105b3e68.
 *   The callees are unnamed, so the specific subsystem role is not determinable from this
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_two_state_fields(cls_105b3e68 *param_1)

{
  uint uVar1;
  
  if (param_1->field_0x4 != 0) {
    uVar1 = (ushort)param_1->field_0x0 - 4;
    if (((uVar1 & 0x1f) == 0) || (uVar1 == 0)) {
      if ((param_1->field_0x26 - 4 & 0x1f) == 0) {
        issue_nine_region_draw_commands((ushort *)(uint32_t)param_1);
      }
      else {
        configure_metering_regions((ushort *)(uint32_t)param_1);
      }
    }
    else {
      configure_metering_regions((ushort *)(uint32_t)param_1);
    }
  }
  return;
}
