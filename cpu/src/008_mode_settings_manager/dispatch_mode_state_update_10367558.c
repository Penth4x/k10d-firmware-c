/* @k10d dispatch_mode_state_update_10367558 @ 0x10367558
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates object fields based on a mode selector and calls a virtual method with the new
 *   state.
 * summary:
 *   The function reads a mode value from offset 0x18 of the input object. It uses a switch
 *   statement to set values at offsets 0x5c and 0x60, and copies a byte to offset 0x64 (100
 *   decimal). It then calls a virtual method (slot 2) on an object at offset 0x280.
 *   Finally, it packs these values into a local array and calls
 *   pack_and_forward_event_params, returning true if the result is 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_mode_state_update_10367558(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t local_24 [24];
  
  piVar5 = (int *)local_24;
  *(uint32_t *)((int)param_1 + 0x5c) = 0;
  uVar1 = 0;
  *(uint32_t *)((int)param_1 + 0x60) = 0;
  switch(*(uint32_t *)((int)param_1 + 0x18)) {
  case 1:
    *(uint32_t *)((int)param_1 + 0x5c) = 0;
    iVar2 = 0x54;
    break;
  case 2:
    *(uint32_t *)((int)param_1 + 0x5c) = 1;
    iVar2 = 0x55;
    break;
  case 3:
    *(uint32_t *)((int)param_1 + 0x5c) = 2;
    *(uint *)((int)param_1 + 0x60) = (uint)*(byte *)((int)param_1 + 0x56);
    uVar1 = (uint)*(byte *)((int)param_1 + 0x57);
    goto LAB_103675cc;
  case 4:
    *(uint32_t *)((int)param_1 + 0x5c) = 3;
    iVar2 = 0x58;
    break;
  case 5:
    *(uint32_t *)((int)param_1 + 0x5c) = 5;
    iVar2 = 0x59;
    break;
  case 6:
    *(uint32_t *)((int)param_1 + 0x5c) = 4;
    iVar2 = 0x5a;
    break;
  default:
    goto switchD_10367580_default;
  }
  *(uint *)((int)param_1 + 0x60) = (uint)*(byte *)(iVar2 + (int)param_1);
LAB_103675cc:
  *(uint *)((int)param_1 + 100) = uVar1;
switchD_10367580_default:
  reset_object_fields_and_call_base((void *)((int)param_1 + 0x280));
  iVar3 = *(int *)((int)param_1 + 0x60);
  iVar2 = *(int *)((int)param_1 + 100);
  iVar4 = *(int *)((int)param_1 + 0x68);
  *piVar5 = *(uint32_t *)((int)param_1 + 0x5c);
  piVar5[3] = iVar4;
  piVar5[4] = 3;
  piVar5[1] = iVar3;
  piVar5[2] = iVar2;
  *(uint8_t *)((int)piVar5 + 0x17) = DAT_800043a0/*SDRAM*/;
  iVar2 = pack_and_forward_event_params((int)param_1,(int)param_1 + 0x6c,(void *)((int)param_1 + 0x280),0x80018058/*SDRAM*/,
                       *piVar5,piVar5[1],piVar5[2],piVar5[3],piVar5[4],
                       *(uint8_t *)((int)piVar5 + 0x17));
  return iVar2 == 1;
}
