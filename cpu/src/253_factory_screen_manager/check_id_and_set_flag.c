/* @k10d check_id_and_set_flag @ 0x104e8082
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Validates a specific ID and optional parameter, then sets a flag at a fixed offset in
 *   the object.
 * summary:
 *   The function checks if param_2 matches one of three specific values (0xf00003,
 *   0x600001, or 0xf0000a). If param_2 is 0xf0000a, it additionally verifies that the value
 *   at param_1 + 0x180 equals param_3. If the checks pass, it calls set_flg_obj on the
 *   pointer at param_1 + 0x188. Returns 0 in all cases.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_id_and_set_flag(cls_105c1610 *param_1,int param_2,int param_3)

{
  if (param_2 != 0xf00003) {
    if (param_2 < 0xf00004) {
      if (param_2 != 0x600001) {
        return 0;
      }
    }
    else {
      if (param_2 != 0xf0000a) {
        return 0;
      }
      if (param_1->field_0x180 != param_3) {
        return 0;
      }
    }
  }
  set_flg_obj(&param_1->field_0x188, 0x40);
  return 0;
}
