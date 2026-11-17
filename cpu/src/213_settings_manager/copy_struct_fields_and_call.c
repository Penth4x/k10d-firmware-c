/* @k10d copy_struct_fields_and_call @ 0x104ae88e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_fields_and_call(int param_1,int param_2)

{
  (*(code *)0x105361fc/*ROM*/)(param_2,0xd,*(uint32_t *)(param_1 + 4),*(uint32_t *)(param_1 + 8));
  *(uint32_t *)(param_2 + 0x20) = *(uint32_t *)(param_1 + 0xc);
  *(uint32_t *)(param_2 + 0x24) = *(uint32_t *)(param_1 + 0x10);
  return;
}
