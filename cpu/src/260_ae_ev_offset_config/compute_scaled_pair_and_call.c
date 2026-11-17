/* @k10d compute_scaled_pair_and_call @ 0x104f6a68
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * purpose:
 *   Selects a pair of shorts from a table based on param_3, scales them by (param_3%3)+2,
 *   and passes the result to a helper.
 * summary:
 *   The function initializes a local struct with several 0x100 and 0 fields. It calls
 *   get_or_init_sram_buffer_1052c5b8 to get a base pointer, then indexes into an array of
 *   pointers at offset 0x80 using param_3/3 to select one of six entries. It reads two
 *   consecutive shorts from the selected entry, multiplies both by (param_3 % 3) + 2,
 *   stores them in the local struct, and finally calls build_and_send_event_packet_104f87d0
 *   with param_1, param_2, and a pointer to the struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_scaled_pair_and_call(int param_1,int param_2,uint param_3)

{
  uint32_t *puVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  uintptr_t sp;
  uint16_t local_20;
  uint16_t uStack_1e;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  short sStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  short sStack_a;
  
  local_20 = 0x100;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  sStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  sStack_a = 0;
  sVar3 = 0;
  uStack_16 = 0x100;
  uStack_c = 0x100;
  sVar4 = 0;
  iVar2 = get_or_init_sram_buffer_1052c5b8();
  puVar1 = *(uint32_t **)(iVar2 + 0x80);
  switch(param_3 / 3) {
  case 0:
    sVar3 = *(short *)*puVar1;
    sVar4 = ((short *)*puVar1)[1];
    break;
  case 1:
    sVar3 = *(short *)puVar1[1];
    sVar4 = ((short *)puVar1[1])[1];
    break;
  case 2:
    sVar3 = *(short *)puVar1[2];
    sVar4 = ((short *)puVar1[2])[1];
    break;
  case 3:
    sVar3 = *(short *)puVar1[3];
    sVar4 = ((short *)puVar1[3])[1];
    break;
  case 4:
    sVar3 = *(short *)puVar1[4];
    sVar4 = ((short *)puVar1[4])[1];
    break;
  case 5:
    sVar3 = *(short *)puVar1[5];
    sVar4 = ((short *)puVar1[5])[1];
  }
  sStack_a = (short)(param_3 % 3) + 2;
  sStack_12 = sStack_a * sVar3;
  sStack_a = sStack_a * sVar4;
  build_and_send_event_packet_104f87d0(param_1,param_2,&local_20);
  return;
}
