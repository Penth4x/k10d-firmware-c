/* @k10d compute_sensor_readout_timing @ 0x1046cc9e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Calculates sensor readout timing parameters (line count, frame offset) based on a size
 *   value and writes them to a timing structure.
 * summary:
 *   The function takes a size parameter (param_3) and uses a series of helper calls
 *   (alloc_and_init_small_struct_1045c524, check_size_alignment, lookup_byte_from_table) to
 *   determine timing values. It performs arithmetic with constants like 0x15180 (86720),
 *   0xe10 (3600), and 0x3c (60) to derive line counts and offsets, which are then written
 *   to a structure via copy_eight_bytes_1045c584. The final call
 *   free_heap_if_flag_set_1045c56c sets a mode or flag to 2. The arithmetic pattern
 *   suggests calculation of sensor readout timing or exposure timing parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_sensor_readout_timing(uint32_t param_1,uint16_t *param_2,int param_3,uint32_t param_4,
                 uint8_t param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  bool bVar7;
  uint8_t auStack_34 [16];
  uint16_t auStack_10 [4];
  
  puVar6 = auStack_34;
  iVar2 = read_table_entry_with_offset(param_1,param_4,param_5);
  puVar6[3] = 0;
  puVar6[7] = 0;
  uVar3 = iVar2 + param_3;
  puVar6[0xb] = 0;
  puVar6[0xf] = 0;
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar6[3],puVar6[7],puVar6[0xb],puVar6[0xf]);
  uVar1 = _DAT_80048764/*SDRAM*/;
  while( true ) {
    uVar1 = uVar1 & 0xffff;
    iVar2 = check_size_alignment(auStack_10,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0x1e13380;
      bVar7 = uVar3 < 0x1e13380;
    }
    else {
      iVar2 = 0x1e28500;
      bVar7 = uVar3 < 0x1e28500;
    }
    if (bVar7) break;
    uVar3 = uVar3 - iVar2;
    uVar1 = uVar1 + 1;
  }
  store_second_word(auStack_10,uVar1);
  uVar5 = 1;
  while( true ) {
    bVar4 = lookup_byte_from_table(auStack_10,uVar1,uVar5);
    if (uVar3 < (uint)bVar4 * 0x15180) break;
    uVar3 = uVar3 + (uint)bVar4 * -0x15180;
    uVar5 = uVar5 + 1 & 0xff;
  }
  set_clamped_byte_field(auStack_10,uVar5);
  clamp_and_store_byte_at_offset3(auStack_10,uVar3 / 0x15180 + 1 & 0xff,0);
  uVar1 = (uVar3 % 0x15180) % 0xe10;
  store_capped_byte_at_offset(auStack_10,(uVar3 % 0x15180) / 0xe10);
  store_clamped_byte_at_offset_6(auStack_10,uVar1 / 0x3c);
  store_clamped_byte_at_offset_7(auStack_10,uVar1 % 0x3c);
  copy_eight_bytes_1045c584(param_2,auStack_10);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
