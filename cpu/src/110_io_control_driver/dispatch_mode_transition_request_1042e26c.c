/* @k10d dispatch_mode_transition_request_1042e26c @ 0x1042e26c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Checks a state code and a flag byte to route a mode change request to a specific
 *   handler or return an error code.
 * summary:
 *   The function reads a flag byte from param_3 and queries a state via
 *   read_virtual_property_field. If the state is 2 or 3, it branches based on the flag: 0
 *   triggers a check via read_struct_field_at_index_1046c7ca and a call to
 *   configure_sensor_readout_mode, while 1 updates fields in param_1, calls a virtual
 *   method on an object at param_1+0x10, and invokes twai_flg_obj. Other states or flags
 *   return specific error codes (0x81, 0x83, 0x84).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_mode_transition_request_1042e26c(int param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x34)),(int)(1));
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (cVar1 == '\0') {
      set_struct_field_at_offset_4(param_3,0);
      uVar5 = read_struct_field_at_index_1046c7ca(param_3,0);
      if (uVar5 < 0xe) {
        configure_sensor_readout_mode(*(uint32_t *)(param_1 + 0xc),uVar5 & 0xffff,0);
        uVar4 = 0;
      }
      else {
        uVar4 = 0x83;
      }
    }
    else if (cVar1 == '\x01') {
      set_struct_field_at_offset_4(param_3,0);
      eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),1);
      *(uint32_t *)(param_1 + 0x14) = 1;
      *(uint32_t *)(param_1 + 0x18) = 3;
      iVar3 = **(int **)(param_1 + 0x10);
      (((vtbl_entry*)(iVar3))[14].fn)
                ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar3))[14].adj,param_1 + 8,0);
      twai_flg_obj((uint32_t *)(param_1 + 0x2c),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      uVar4 = 0;
    }
    else {
      uVar4 = 0x81;
    }
  }
  else {
    uVar4 = 0x84;
  }
  return uVar4;
}
