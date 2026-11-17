/* @k10d init_three_buffer_slots @ 0x10370214
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_three_buffer_slots(int param_1)

{
  int iVar1;
  void *pvVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  
  puVar3 = (uint32_t *)&stack0xffffffd8;
  if (*(char *)(param_1 + 0xc4) == '\0') {
    pvVar2 = (void *)(param_1 + 0xa8);
    iVar1 = retry_operation_five_times_1036f156(param_1,0,pvVar2,0x80015d04/*SDRAM*/,0x80015af0/*SDRAM*/,0x800158dc/*SDRAM*/);
    if (iVar1 == 0) {
      *(uint8_t *)(param_1 + 0xb9) = 1;
      *puVar3 = 0x80015af0/*SDRAM*/;
      puVar3[1] = 0x800158dc/*SDRAM*/;
      iVar1 = retry_operation_five_times_1036f156(param_1,1,pvVar2,0x80015d04/*SDRAM*/,*puVar3,puVar3[1]);
      if (iVar1 == 0) {
        *puVar3 = 0x80015af0/*SDRAM*/;
        puVar3[1] = 0x800158dc/*SDRAM*/;
        iVar1 = retry_operation_five_times_1036f156(param_1,2,pvVar2,0x80015d04/*SDRAM*/,*puVar3,puVar3[1]);
        if (iVar1 == 0) {
          *(uint8_t *)(param_1 + 0xb8) = 1;
        }
      }
    }
    if (iVar1 != 2) {
      write_second_field_via_helper_1036c4c2(param_1,1);
    }
  }
  return;
}
