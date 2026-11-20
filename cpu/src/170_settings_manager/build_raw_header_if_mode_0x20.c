/* @k10d build_raw_header_if_mode_0x20 @ 0x1047eb94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Populates a 0x200-byte buffer with a 'RarrA' header and computed length when
 *   param_1[10] is 0x20.
 * summary:
 *   Checks if the short at offset 0x14 of param_1 equals 0x20. If so, calls fill_byte_array
 *   to initialize the buffer, writes the ASCII string 'RarrA' at the start and end,
 *   calculates a 32-bit value from fields in param_1, and writes it along with fixed bytes.
 *   Finally, calls call_virtual_slot_6_and_helper twice with offsets derived from
 *   param_1[5] and returns 1 if both succeed or if the initial check failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1047ebac) overlaps instruction at (ram,0x1047ebaa)
    */

uint32_t build_raw_header_if_mode_0x20(cls_105aaebc *param_1,uint8_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if (param_1->field_0x28 == 0x20) {
    fill_byte_array(param_2,0,0x200);
    *param_2 = 0x52;
    param_2[1] = 0x52;
    param_2[2] = 0x61;
    param_2[3] = 0x41;
    param_2[0x1e4] = 0x72;
    param_2[0x1e5] = 0x72;
    param_2[0x1e6] = 0x41;
    param_2[0x1e7] = 0x61;
    iVar1 = ((param_1->field_0x18 - (uint)param_1->field_0x1e) -
            (uint)param_1->field_0x20 * param_1->field_0x24) / (uint)param_1->field_0x1c - 1;
    param_2[0x1e8] = (char)iVar1;
    param_2[0x1e9] = (char)((uint)iVar1 >> 8);
    param_2[0x1ea] = (char)((uint)iVar1 >> 0x10);
    param_2[0x1eb] = (char)((uint)iVar1 >> 0x18);
    param_2[0x1ec] = 2;
    param_2[0x1ed] = 0;
    param_2[0x1ee] = 0;
    param_2[0x1ef] = 0;
    param_2[0x1fc] = 0;
    param_2[0x1fd] = 0;
    param_2[0x1fe] = 0x55;
    param_2[0x1ff] = 0xaa;
    uVar2 = 0;
    iVar1 = call_virtual_slot_6_and_helper((int *)param_1,param_1->field_0x14 + 1,1);
    if ((iVar1 != 0) && (iVar1 = call_virtual_slot_6_and_helper((int *)param_1,param_1->field_0x14 + 7,1), iVar1 != 0)
       ) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
