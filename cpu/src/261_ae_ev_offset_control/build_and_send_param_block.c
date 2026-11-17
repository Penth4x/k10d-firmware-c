/* @k10d build_and_send_param_block @ 0x104f907e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Copies a parameter array into a local struct and passes it to a handler function.
 * summary:
 *   The function takes a pointer to a parameter array (param_2) and copies its fields into
 *   a local stack structure, normalizing the first two fields via switch/if chains. It then
 *   calls apply_param_struct_to_object with a pointer from param_1 and the local structure,
 *   followed by calls to eventflag_clr_flg, eventflag_wai_flg, and
 *   reset_object_three_fields. The specific subsystem is not identifiable from the
 *   available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_and_send_param_block(int param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint8_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint32_t uStack_24;
  uint16_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_34 = 2;
  uStack_30 = 0;
  switch(*param_2) {
  case 0:
    uStack_34 = 0;
    break;
  case 1:
    uStack_34 = 1;
    break;
  case 2:
    uStack_34 = 2;
    break;
  case 3:
    uStack_34 = 3;
    break;
  case 4:
    uStack_34 = 4;
    break;
  case 5:
    uStack_34 = 5;
  }
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    uStack_30 = 0;
  }
  else if (iVar1 == 1) {
    uStack_30 = 1;
  }
  else if (iVar1 == 2) {
    uStack_30 = 2;
  }
  else if (iVar1 == 3) {
    uStack_30 = 3;
  }
  uStack_2c = *(uint8_t *)(param_2 + 2);
  uStack_2a = *(uint16_t *)((int)param_2 + 10);
  uStack_28 = *(uint16_t *)(param_2 + 3);
  uStack_26 = *(uint16_t *)((int)param_2 + 0xe);
  uStack_24 = param_2[4];
  uStack_20 = *(uint16_t *)(param_2 + 5);
  uStack_1c = param_2[6];
  uStack_18 = param_2[7];
  uStack_14 = param_2[8];
  uStack_10 = param_2[9];
  puVar2 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar2,1);
  apply_param_struct_to_object(*(uint32_t *)(param_1 + 0x28),param_1 + 4,&uStack_34);
  eventflag_wai_flg(puVar2,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,1);
  reset_object_three_fields(*(uint32_t *)(param_1 + 0x28));
  return;
}
