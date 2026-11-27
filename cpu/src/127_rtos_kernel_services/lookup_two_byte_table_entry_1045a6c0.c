/* @k10d lookup_two_byte_table_entry_1045a6c0 @ 0x1045a6c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t lookup_two_byte_table_entry_1045a6c0(uint32_t param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  void *puVar2;
  
  if (0x51 < param_2) {
    return 0;
  }
  if ((((param_3 == 0) && (param_5 != '\x0f')) && (param_5 != '\r')) && (param_5 != '\x0e')) {
    puVar2 = &DAT_105a3ede/*ROM*/;
    iVar1 = param_2 << 1;
  }
  else {
    iVar1 = param_2 * 2;
    if (param_4 == 0) {
      return *(uint16_t *)(DAT_105a4022/*ROM*/ + iVar1);
    }
    puVar2 = &DAT_105a3f80/*ROM*/;
  }
  return *(uint16_t *)((char*)puVar2 + iVar1);
}
