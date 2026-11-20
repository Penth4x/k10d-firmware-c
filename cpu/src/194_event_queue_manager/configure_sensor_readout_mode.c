/* @k10d configure_sensor_readout_mode @ 0x1049007a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Configures sensor readout parameters and display state based on mode and sub-mode
 *   indices.
 * summary:
 *   The function initializes sensor-related state via deactivate_display_state and
 *   set_high_bit_of_field, then dispatches to specific configuration routines
 *   (init_object_state_and_callers, etc.) based on param_3. It then uses param_2 to select
 *   a specific sensor configuration profile, writing a series of values to memory addresses
 *   derived from a base pointer (likely SDRAM or sensor registers) via
 *   fill_2d_region_with_byte_1049096c. Finally, it enables the display output using
 *   display_output_enable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10490128) overlaps instruction at (ram,0x10490126)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t configure_sensor_readout_mode(int param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_a0 [8];
  int iStack_88;
  int iStack_84;
  int iStack_78;
  int iStack_3c;
  uint32_t uStack_20;
  
  puVar6 = auStack_a0;
  deactivate_display_state(param_1);
  iStack_88 = set_high_bit_of_field(param_1);
  iStack_84 = iStack_88 + 0x4b000;
  iVar5 = iStack_88 + 0x5dc00;
  uVar1 = set_high_bit_of_read_value(param_1);
  uStack_20 = 1;
  if (param_3 == 0) {
    bVar2 = test_flag_set(*(void **)(param_1 + 0x1c));
    if (bVar2) {
      init_object_with_two_ids_1048fe52(param_1,uVar1,iStack_88);
    }
    else {
      activate_sr_mode_state(param_1,uVar1,iStack_88);
    }
  }
  else if (param_3 == 1) {
    activate_sr_mode_state(param_1,uVar1,iStack_88);
  }
  else if (param_3 == 2) {
    init_object_with_two_flags_1048fed8(param_1,uVar1,iStack_88);
  }
  else if (param_3 == 3) {
    init_object_with_two_ids_1048fe52(param_1,uVar1,iStack_88);
  }
  else if (param_3 == 4) {
    init_object_state_and_callers(param_1,uVar1,iStack_88);
  }
  switch(param_2) {
  case 0:
    iStack_3c = 1;
    iVar3 = 0;
    do {
      uVar1 = *(uint32_t *)(&DAT_105b3f94/*ROM*/ + iVar3);
      puVar6[3] = (char)((uint)uVar1 >> 0x10);
      *(uint16_t *)(puVar6 + 6) = 0x50;
      fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = (char)((uint)uVar1 >> 8);
      *(uint16_t *)(puVar6 + 6) = 0x28;
      fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iStack_84,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = (char)uVar1;
      *(uint16_t *)(puVar6 + 6) = 0x28;
      fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iVar5,puVar6[3],*(ushort *)(puVar6 + 6));
      uVar1 = *(uint32_t *)(&DAT_105b3f98/*ROM*/ + iVar3);
      puVar6[3] = (char)((uint)uVar1 >> 0x10);
      *(uint16_t *)(puVar6 + 6) = 0x50;
      fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88 + 0x50,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = (char)((uint)uVar1 >> 8);
      *(uint16_t *)(puVar6 + 6) = 0x28;
      fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iStack_84 + 0x28,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = (char)uVar1;
      *(uint16_t *)(puVar6 + 6) = 0x28;
      fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iVar5 + 0x28,puVar6[3],*(ushort *)(puVar6 + 6));
      uVar1 = *(uint32_t *)(&DAT_105b3f9c/*ROM*/ + iVar3);
      puVar6[3] = (char)((uint)uVar1 >> 0x10);
      *(uint16_t *)(puVar6 + 6) = 0x50;
      fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88 + 0xa0,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = (char)((uint)uVar1 >> 8);
      *(uint16_t *)(puVar6 + 6) = 0x28;
      fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iStack_84 + 0x50,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = (char)uVar1;
      *(uint16_t *)(puVar6 + 6) = 0x28;
      fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iVar5 + 0x50,puVar6[3],*(ushort *)(puVar6 + 6));
      uVar1 = *(uint32_t *)(&DAT_105b3fa0/*ROM*/ + iVar3);
      puVar6[3] = (char)((uint)uVar1 >> 0x10);
      *(uint16_t *)(puVar6 + 6) = 0x50;
      fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88 + 0xf0,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = (char)((uint)uVar1 >> 8);
      *(uint16_t *)(puVar6 + 6) = 0x28;
      fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iStack_84 + 0x78,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = (char)uVar1;
      *(uint16_t *)(puVar6 + 6) = 0x28;
      fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iVar5 + 0x78,puVar6[3],*(ushort *)(puVar6 + 6));
      iVar5 = iVar5 + 0xa0;
      iStack_84 = iStack_84 + 0xa0;
      iStack_88 = iStack_88 + 0x140;
      iVar3 = iVar3 + 0x10;
      iStack_3c = iStack_3c + -1;
    } while (-1 < iStack_3c);
    goto LAB_1049076e;
  case 1:
    cVar4 = '\x1a';
    iStack_78 = 2;
    iVar5 = iStack_88 + 0x44;
    do {
      puVar6[3] = cVar4;
      *(uint16_t *)(puVar6 + 6) = 0x38;
      fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iVar5,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = cVar4 + '\x1a';
      *(uint16_t *)(puVar6 + 6) = 0x38;
      fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iVar5 + 0x38,puVar6[3],*(ushort *)(puVar6 + 6));
      puVar6[3] = cVar4 + '4';
      *(uint16_t *)(puVar6 + 6) = 0x38;
      fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iVar5 + 0x70,puVar6[3],*(ushort *)(puVar6 + 6));
      iVar5 = iVar5 + 0xa8;
      cVar4 = cVar4 + 'N';
      iStack_78 = iStack_78 + -1;
    } while (-1 < iStack_78);
    puVar6[3] = 0;
    *(uint16_t *)(puVar6 + 6) = 0x44;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0xff;
    *(uint16_t *)(puVar6 + 6) = 0x44;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88 + 0x23c,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x80;
    iVar3 = 0x1e0;
    *(uint16_t *)(puVar6 + 6) = 0x1e0;
    goto LAB_1049075a;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    iVar3 = (param_2 + -2) * 4;
    puVar6[3] = (char)((uint)*(uint32_t *)(&DAT_105b3f94/*ROM*/ + iVar3) >> 0x10);
    *(uint16_t *)(puVar6 + 6) = 0x280;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = (char)((uint)*(uint32_t *)(&DAT_105b3f94/*ROM*/ + iVar3) >> 8);
    *(uint16_t *)(puVar6 + 6) = 0x140;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iStack_84,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = (char)*(uint32_t *)(&DAT_105b3f94/*ROM*/ + iVar3);
    *(uint16_t *)(puVar6 + 6) = 0x140;
    break;
  case 0xb:
    puVar6[3] = 0;
    *(uint16_t *)(puVar6 + 6) = 0x280;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x80;
    *(uint16_t *)(puVar6 + 6) = 0x140;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iStack_84,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x80;
    *(uint16_t *)(puVar6 + 6) = 0x140;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iVar5,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0xff;
    *(uint16_t *)(puVar6 + 6) = 0x280;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0xf0,iStack_88,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0;
    *(uint16_t *)(puVar6 + 6) = 0x140;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x32,iStack_88 + 0x1dba0,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0xa9;
    *(uint16_t *)(puVar6 + 6) = 200;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x50,iStack_88 + 0x96dc,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x14;
    *(uint16_t *)(puVar6 + 6) = 200;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x50,iStack_88 + 0x352dc,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x4c;
    *(uint16_t *)(puVar6 + 6) = 0x48;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x50,iStack_88 + 0x1f408,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x96;
    *(uint16_t *)(puVar6 + 6) = 0x28;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x50,iStack_88 + 0x1f460,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x96;
    *(uint16_t *)(puVar6 + 6) = 0x28;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x50,iStack_88 + 0x1f5f8,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x1d;
    *(uint16_t *)(puVar6 + 6) = 0x48;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x50,iStack_88 + 0x1f630,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0xff;
    *(uint16_t *)(puVar6 + 6) = 8;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x18,iStack_88 + 0x23b3c,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0xff;
    *(uint16_t *)(puVar6 + 6) = 0x18;
    fill_2d_region_with_byte_1049096c(param_1,0x280,8,iStack_88 + 0x24f34,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x55;
    *(uint16_t *)(puVar6 + 6) = 0x24;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0x28,iStack_88 + 0x52d04,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0xff;
    *(uint16_t *)(puVar6 + 6) = 0x24;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0x28,iStack_88 + 0x52e18,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x2c;
    *(uint16_t *)(puVar6 + 6) = 0x14;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0x28,iStack_88 + 0x52d30,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x2c;
    *(uint16_t *)(puVar6 + 6) = 0x14;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0x28,iStack_88 + 0x52dfc,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0xff;
    *(uint16_t *)(puVar6 + 6) = 0x24;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0x28,iStack_88 + 0x65904,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x6b;
    *(uint16_t *)(puVar6 + 6) = 0x24;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0x28,iStack_88 + 0x65a18,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x15;
    *(uint16_t *)(puVar6 + 6) = 0x14;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0x28,iStack_88 + 0x65930,puVar6[3],*(ushort *)(puVar6 + 6));
    iStack_84 = iStack_88 + 0x659fc;
    puVar6[3] = 0x15;
    *(uint16_t *)(puVar6 + 6) = 0x14;
    iVar3 = 0x28;
    goto LAB_1049075a;
  case 0xc:
    puVar6[3] = 0xff;
    *(uint16_t *)(puVar6 + 6) = 0x140;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0;
    *(uint16_t *)(puVar6 + 6) = 0x140;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88 + 0x140,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x80;
    *(uint16_t *)(puVar6 + 6) = 0x140;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iStack_84,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = 0x80;
    *(uint16_t *)(puVar6 + 6) = 0x140;
    break;
  case 0xd:
    puVar6[3] = (char)((uint)_DAT_105b3fb8/*ROM*/ >> 0x10);
    *(uint16_t *)(puVar6 + 6) = 0x280;
    fill_2d_region_with_byte_1049096c(param_1,0x280,0x1e0,iStack_88,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = (char)((uint)_DAT_105b3fb8/*ROM*/ >> 8);
    *(uint16_t *)(puVar6 + 6) = 0x140;
    fill_2d_region_with_byte_1049096c(param_1,0x140,0xf0,iStack_84,puVar6[3],*(ushort *)(puVar6 + 6));
    puVar6[3] = (char)_DAT_105b3fb8/*ROM*/;
    *(uint16_t *)(puVar6 + 6) = 0x140;
    break;
  default:
    uStack_20 = 0;
    goto LAB_10490778;
  }
  iVar3 = 0xf0;
  iStack_84 = iVar5;
LAB_1049075a:
  fill_2d_region_with_byte_1049096c(param_1,0x140,iVar3,iStack_84,puVar6[3],*(ushort *)(puVar6 + 6));
LAB_1049076e:
  sr_enable_channels(param_1,0);
LAB_10490778:
  display_output_enable(param_1);
  return uStack_20;
}
