/* @k10d compute_three_channel_metric @ 0x104caf6a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a derived value from three input pointers and a context object, storing
 *   intermediate results in a local struct.
 * summary:
 *   The function initializes a local 32-byte structure and calls copy_two_words_from_param2
 *   to populate it based on param_2. It retrieves two values from this structure via
 *   return_first_word_1045c514 and read_struct_field_at_offset_4, multiplies them, and uses
 *   the product to call init_buffer_with_pool_alloc on three input pointers (param_3,
 *   param_4, param_5). If any of these calls return zero, it sets a flag at param_1+0x219
 *   and returns 0. Otherwise, it gathers additional data from the input pointers via
 *   get_aligned_next_pointer, packs them into the local structure, and calls
 *   build_and_send_command_packet_104c33c2 with these values along with data from param_1
 *   and param_2. Finally, it calls free_heap_if_flagged_1045c402 to clean up the local
 *   structure and returns the result of build_and_send_command_packet_104c33c2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_three_channel_metric(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uintptr_t sp;
  uint *puVar14;
  uint8_t auStack_70 [32];
  uint32_t auStack_18 [4];
  
  puVar14 = (uint *)auStack_70;
  *(uint8_t *)(param_1 + 0x219) = 0;
  copy_two_words_from_param2((int)auStack_18,param_2);
  iVar4 = return_first_word_1045c514(auStack_18);
  iVar5 = read_struct_field_at_offset_4(auStack_18);
  iVar4 = iVar4 * iVar5;
  iVar5 = init_buffer_with_pool_alloc(param_3,iVar4);
  iVar6 = init_buffer_with_pool_alloc(param_4,iVar4);
  iVar7 = init_buffer_with_pool_alloc(param_5,iVar4);
  *(uint8_t *)(param_1 + 0x219) = 0;
  if (((iVar5 == 0) || (iVar6 == 0)) || (iVar7 == 0)) {
    if (iVar4 != 0) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    free_heap_if_flagged_1045c402(auStack_18,2);
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint32_t *)(param_1 + 0x4c);
    uVar1 = *(uint32_t *)(param_2 + 0x20);
    uVar2 = *(uint32_t *)(param_2 + 0x24);
    uVar3 = *(uint32_t *)(param_2 + 0x28);
    uVar9 = get_aligned_next_pointer((int)param_3);
    uVar10 = get_aligned_next_pointer((int)param_4);
    uVar11 = get_aligned_next_pointer((int)param_5);
    uVar12 = return_first_word_1045c514(auStack_18);
    uVar13 = read_struct_field_at_offset_4(auStack_18);
    *puVar14 = uVar9;
    puVar14[1] = uVar10;
    puVar14[2] = uVar11;
    *(short *)((int)puVar14 + 0xe) = (short)uVar12;
    *(short *)((int)puVar14 + 0x12) = (short)uVar13;
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    uVar8 = build_and_send_command_packet_104c33c2(uVar8,uVar1,uVar2,uVar3,*puVar14,puVar14[1],puVar14[2],
                         *(ushort *)((int)puVar14 + 0xe),*(uint16_t *)((int)puVar14 + 0x12),
                         puVar14[5],puVar14[6],puVar14[7]);
    free_heap_if_flagged_1045c402(auStack_18,2);
  }
  return uVar8;
}
