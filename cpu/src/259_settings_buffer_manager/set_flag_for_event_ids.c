/* @k10d set_flag_for_event_ids @ 0x104f4d7e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x38 of an object if the event ID matches one of eight specific
 *   values.
 * summary:
 *   Checks param_2 against a hardcoded list of eight event identifiers (0x400001, 0x400003,
 *   0x300002, 0x300001, 0x1010000, 0x1130001, 0x900001). If a match is found, it calls
 *   set_flg_obj on the pointer at param_1 + 0x38. Returns 0 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_for_event_ids(cls_105d3f20 *param_1,int param_2)

{
  if ((((param_2 == 0x400001) || (param_2 == 0x400003)) || (param_2 == 0x300002)) ||
     (((param_2 == 0x300001 || (param_2 == 0x1010000)) ||
      ((param_2 == 0x1130001 || (param_2 == 0x900001)))))) {
    set_flg_obj((void *)&param_1->field_0x38, 0x1);
  }
  return 0;
}
