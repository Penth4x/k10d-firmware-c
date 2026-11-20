/* @k10d lookup_two_byte_table_entry_1045a690 @ 0x1045a690
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t lookup_two_byte_table_entry_1045a690(uint32_t param_1,int param_2,int param_3,int param_4)

{
  uint16_t uVar1;
  void *puVar2;
  
  uVar1 = 0;
  if (param_2 < 0x52) {
    if (param_3 == 0) {
      puVar2 = &DAT_105a3ede/*ROM*/;
      param_2 = param_2 << 1;
    }
    else {
      param_2 = param_2 * 2;
      if (param_4 == 0) {
        return *(uint16_t *)(&DAT_105a4022/*ROM*/ + param_2);
      }
      puVar2 = &DAT_105a3f80/*ROM*/;
    }
    uVar1 = *(uint16_t *)((char*)puVar2 + param_2);
  }
  return uVar1;
}
