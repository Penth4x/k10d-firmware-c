/* @k10d set_flag_if_event_id_matches_1040b88c @ 0x1040b88c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * note: B-15 merged-case fix (d328). The decompiler collapsed four event codes that each
 *   raise a DIFFERENT bit of &field_0x14 into one branch keeping only 0x8. Recovered from
 *   the original disasm (0x1040b88c): 0xa00003->0x8, 0xa00002->0x2, 0xa00006->0x1,
 *   0x10f0001->0x4 (each leaf's ldi #k,r5 verified).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_if_event_id_matches_1040b88c(cls_1059a294 *param_1,int param_2)

{
  if (param_2 == 0xa00003) {
    set_flg_obj((void *)&param_1->field_0x14, 0x8);
  }
  else if (param_2 == 0xa00002) {
    set_flg_obj((void *)&param_1->field_0x14, 0x2);
  }
  else if (param_2 == 0xa00006) {
    set_flg_obj((void *)&param_1->field_0x14, 0x1);
  }
  else if (param_2 == 0x10f0001) {
    set_flg_obj((void *)&param_1->field_0x14, 0x4);
  }
  return 0;
}
