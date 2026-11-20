/* @k10d allocate_and_init_buffer_struct_104f711e @ 0x104f711e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f715a) overlaps instruction at (ram,0x104f7158)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allocate_and_init_buffer_struct_104f711e(int param_1, int param_2, uint32_t param_x2)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  void *pvVar4;
  uint32_t *puVar5;
  uintptr_t sp;
  uint16_t uStack_6e;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint16_t uStack_66;
  uint16_t uStack_64;
  uint16_t uStack_62;
  uint16_t uStack_60;
  uint16_t uStack_5e;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint16_t uStack_54;
  void *pvStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint16_t uStack_46;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint16_t uStack_40;
  uint16_t *puStack_3c;
  uint16_t uStack_38;
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint8_t uStack_2c;
  uint32_t uStack_28;
  void *pvStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  
  uVar1 = *(ushort *)(param_2 + 0x10);
  uVar2 = *(ushort *)(param_2 + 0x12);
  pvVar3 = (void *)get_system_heap();
  pvVar3 = (void *)mempool_get_block(pvVar3,(void *)((uint)uVar1 * (uint)uVar2),0);
  if (pvVar3 != 0) {
    uStack_46 = 0;
    uStack_44 = 0;
    uStack_42 = 0;
    uStack_40 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_5c = 1;
    uStack_58 = *(uint32_t *)(param_2 + 4);
    uStack_54 = *(uint16_t *)(param_2 + 0x14);
    uStack_4c = *(uint16_t *)(param_2 + 0x10);
    uStack_4a = *(uint16_t *)(param_2 + 0x10);
    uStack_48 = *(uint16_t *)(param_2 + 0x12);
    uStack_6e = 0xff80;
    uStack_6c = 0xff80;
    uStack_6a = 0xff80;
    uStack_68 = 0xff80;
    uStack_66 = 0x100;
    uStack_64 = 0xff80;
    uStack_62 = 0xff80;
    uStack_60 = 0xff80;
    uStack_5e = 0xff80;
    puStack_3c = &uStack_6e;
    puVar5 = (uint32_t *)(param_1 + 0x38);
    uStack_36 = 0;
    uStack_34 = 0;
    uStack_32 = 0;
    uStack_30 = 0;
    uStack_2e = 0;
    uStack_38 = 0;
    uStack_c = 0;
    pvStack_50 = pvVar3;
    eventflag_clr_flg(puVar5,1);
    build_and_send_param_struct_10505a10((int)(*(uint32_t *)(param_1 + 0x28)),(int)(0),(void *)(param_1 + 4),(int *)(&uStack_5c));
    eventflag_wai_flg(puVar5,1,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar5,1);
    configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),0);
    uStack_14 = 0;
    uStack_12 = 0;
    uStack_10 = 0;
    uStack_e = 0;
    uStack_20 = *(uint32_t *)(param_2 + 4);
    uStack_1c = *(uint16_t *)(param_2 + 0x10);
    uStack_1a = *(uint16_t *)(param_2 + 0x12);
    uStack_18 = *(uint16_t *)(param_2 + 0x10);
    uStack_16 = *(uint16_t *)(param_2 + 0x14);
    pvStack_24 = pvVar3;
    eventflag_clr_flg(puVar5,1);
    imgp_c_program_and_start_104fe5ce((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(uint32_t *)(&pvStack_24));
    eventflag_wai_flg(puVar5,1,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar5,1);
    imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
    pvVar4 = (void *)get_system_heap();
    mempool_release_block(pvVar4,pvVar3);
  }
  return;
}
