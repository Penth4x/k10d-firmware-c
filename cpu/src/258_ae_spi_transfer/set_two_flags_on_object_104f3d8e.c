/* @k10d set_two_flags_on_object_104f3d8e @ 0x104f3d8e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_two_flags_on_object_104f3d8e(int param_1,int param_2,uint param_3)

{
  if (param_2 == -0x7fffffff) {
    if ((param_3 & 0x100) != 0) {
      invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x18),0x200001,1);
    }
    if ((param_3 & 0x200) != 0) {
      invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x18),0x200001,0);
    }
  }
  return 0;
}
