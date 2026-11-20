/* @k10d send_two_param_updates @ 0x104f8166
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Builds and sends two sequential update packets containing values derived from param_2
 *   and param_3/param_4.
 * summary:
 *   The function constructs a local struct (uStack_1c) by calling compute_scaled_offset_sum
 *   and compute_scaled_sum_from_struct on param_2, and copying fields from param_2 (offsets
 *   0x08, 0x0a, 0x12). It then performs two similar sequences: it calls eventflag_clr_flg
 *   on a pointer at param_1+0x38, sends the struct via imgp_b_program_and_start_104fe680
 *   using a pointer at param_1+0x24, calls eventflag_wai_flg with a constant _DAT_105a2af0,
 *   and finally calls imgp_a_stop_and_reset. The first sequence uses param_3, the second
 *   uses param_4. The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_two_param_updates(int param_1,int *param_2,uint16_t param_3,uint16_t param_4)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  
  uStack_1c = 0;
  uStack_16 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_18 = (uint16_t)((int)(uint)*(ushort *)(param_2 + 4) >> 1);
  uStack_14 = (uint16_t)((int)(uint)*(ushort *)(param_2 + 5) >> 1);
  uStack_1c = compute_scaled_offset_sum(param_2);
  uStack_16 = *(uint16_t *)((int)param_2 + 0x12);
  uStack_c = 0;
  puVar1 = (uint32_t *)(param_1 + 0x38);
  uStack_e = param_3;
  eventflag_clr_flg(puVar1,1);
  imgp_b_program_and_start_104fe680((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(uint32_t *)(&uStack_1c));
  eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  uStack_1c = compute_scaled_sum_from_struct(param_2);
  uStack_e = param_4;
  eventflag_clr_flg(puVar1,1);
  imgp_b_program_and_start_104fe680((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(uint32_t *)(&uStack_1c));
  eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  return;
}
