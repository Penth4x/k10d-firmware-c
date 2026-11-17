/* @k10d copy_three_fields_from_struct @ 0x1042e3ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 110_io_control_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_three_fields_from_struct(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 8) = *(uint32_t *)(iVar1 + 0x1c);
  *(uint32_t *)(param_1 + 0xc) = *(uint32_t *)(iVar1 + 0x28);
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(iVar1 + 8);
  return 1;
}
