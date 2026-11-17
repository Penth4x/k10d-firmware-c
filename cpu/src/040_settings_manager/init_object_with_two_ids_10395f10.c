/* @k10d init_object_with_two_ids_10395f10 @ 0x10395f10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_10395f10(void *param_1)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_10 [8];
  
  puVar1 = (uint32_t *)auStack_10;
  invoke_virtual_slot2_on_four_objects_10394478();
  *puVar1 = 0x80019e6c/*SDRAM*/;
  puVar1[1] = 0x80019c58/*SDRAM*/;
  forward_six_params_via_helper(param_1,1,(int)param_1 + 0xbc,0x8001a080/*SDRAM*/,*puVar1,puVar1[1]);
  return;
}
