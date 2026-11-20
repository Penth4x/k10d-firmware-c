/* @k10d invoke_virtual_slot_two_10444818 @ 0x10444818
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_10444818(cls_105a1418 *param_1)

{
  void *puVar1;
  uint32_t uVar2;
  
  puVar1 = (void*)(param_1->field_0x4);
  if (puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[3].fn)
                      ((char*)puVar1 + ((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[3].adj,0);
  }
  return uVar2;
}
