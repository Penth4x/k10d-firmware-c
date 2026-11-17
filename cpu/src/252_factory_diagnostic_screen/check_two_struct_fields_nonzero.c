/* @k10d check_two_struct_fields_nonzero @ 0x104e52be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_struct_fields_nonzero(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
