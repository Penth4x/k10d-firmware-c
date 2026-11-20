/* @k10d evaluate_exposure_conditions @ 0x104c9896
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 235_settings_menu (unit names are model-proposed)
 * purpose:
 *   Evaluates exposure parameters and returns a status code (0, 1, or 3) based on metering
 *   and lens data.
 * summary:
 *   The function reads exposure-related fields from a context object (param_1), including
 *   values at offsets 0xbc, 0xcc, 0xd0, 0xd4, and 0x118. It branches based on the value at
 *   0xcc (checking for 5) to call either process_ae_metering_update or
 *   process_event_with_state_update. Subsequent logic involves checking values via
 *   init_buffer_with_pool_alloc and updating status fields at 0x1d8-0x1de, likely
 *   representing EV or exposure compensation values. The final result is stored at 0x214
 *   and returned, with 3 indicating a specific condition (possibly under/over-exposure or
 *   error) and 0 indicating success/neutral.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t evaluate_exposure_conditions(int param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  uint8_t *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uintptr_t sp;
  int *piVar10;
  uint8_t auStack_30 [12];
  uint32_t auStack_10 [2];
  
  piVar10 = (int *)auStack_30;
  uVar3 = return_first_word_1045c514((uint32_t *)(*(int *)(param_1 + 0xe4) + 0x2c));
  uVar4 = read_struct_field_at_offset_4((void *)(*(int *)(param_1 + 0xe4) + 0x2c));
  alloc_two_word_pair_1045c3dc(auStack_10,uVar3 & 0xffff,uVar4 & 0xffff);
  iVar6 = *(int *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0xcc) == 5) {
    iVar7 = *(int *)(param_1 + 0x118);
    iVar8 = *(int *)(param_1 + 0xd4);
    *piVar10 = *(uint32_t *)(param_1 + 0xd0);
    piVar10[1] = iVar8;
    iVar6 = process_ae_metering_update(param_1,auStack_10,iVar6,iVar7,*piVar10);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x118);
    iVar8 = *(int *)(param_1 + 0xd0);
    iVar9 = *(int *)(param_1 + 0xd4);
    *piVar10 = *(int *)(param_1 + 0xcc);
    piVar10[1] = iVar8;
    piVar10[2] = iVar9;
    iVar6 = process_event_with_state_update(param_1,auStack_10,iVar6,iVar7,*piVar10,piVar10[1],piVar10[2]);
  }
  if (iVar6 == 0) {
    uVar1 = 3;
    if (*(char *)(param_1 + 0x219) == '\0') {
      uVar1 = 0;
    }
  }
  else {
    iVar6 = init_buffer_with_pool_alloc((int *)(*(uint32_t *)(param_1 + 0x124)),(int)(*(uint32_t *)(param_1 + 0x108)));
    if (iVar6 == 0) {
      if (*(int *)(param_1 + 0x108) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      *(uint16_t *)(param_1 + 0x1d8) = 0;
      uVar1 = return_first_word_1045c514(auStack_10);
      *(short *)(param_1 + 0x1da) = (short)uVar1;
      *(uint16_t *)(param_1 + 0x1dc) = 0;
      uVar1 = read_struct_field_at_offset_4(auStack_10);
      *(short *)(param_1 + 0x1de) = (short)uVar1;
      iVar7 = *(int *)(param_1 + 0x118);
      uVar2 = *(uint32_t *)(param_1 + 0x104);
      uVar1 = *(uint32_t *)(param_1 + 0x108);
      *(uint16_t *)((int)piVar10 + 2) = 4;
      *(uint32_t *)((int)piVar10 + 4) = uVar2;
      *(uint32_t *)((int)piVar10 + 8) = uVar1;
      iVar6 = build_and_send_event_packet_104c9df2(param_1,iVar7,(uint32_t *)(param_1 + 0x198),iVar6,
                           *(uint16_t *)((int)piVar10 + 2),*(uint32_t *)((int)piVar10 + 4),
                           *(uint32_t *)((int)piVar10 + 8));
      if (iVar6 == 0) goto LAB_104c9b5a;
      write_two_words_to_memory(auStack_10,*(uint16_t *)(param_1 + 0xec),*(uint16_t *)(param_1 + 0xee));
      puVar5 = *(uint8_t **)(param_1 + 0x118);
      iVar6 = *(int *)(param_1 + 0x110);
      *piVar10 = 1;
      iVar6 = process_two_point_pair(param_1,puVar5,auStack_10,iVar6,*piVar10);
      if (iVar6 == 0) goto code_r0x104c9b64;
      iVar6 = init_buffer_with_pool_alloc((int *)(*(uint32_t *)(param_1 + 0x120)),(int)(*(uint32_t *)(param_1 + 0x100)));
      if (iVar6 == 0) {
        if (*(int *)(param_1 + 0x100) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 0x110);
        uVar2 = *(uint32_t *)(param_1 + 0xfc);
        uVar1 = *(uint32_t *)(param_1 + 0x100);
        *(uint16_t *)((int)piVar10 + 2) = 0;
        *(uint32_t *)((int)piVar10 + 4) = uVar2;
        *(uint32_t *)((int)piVar10 + 8) = uVar1;
        iVar6 = build_and_send_event_packet_104c9df2(param_1,iVar7,(uint32_t *)(param_1 + 0x160),iVar6,
                             *(uint16_t *)((int)piVar10 + 2),*(uint32_t *)((int)piVar10 + 4),
                             *(uint32_t *)((int)piVar10 + 8));
        if (iVar6 != 0) {
          write_two_words_to_memory(auStack_10,*(uint16_t *)(param_1 + 0xe8),*(uint16_t *)(param_1 + 0xea));
          iVar6 = compute_buffer_size_and_init(*(void **)(param_1 + 0x10c),auStack_10,1);
          if (iVar6 == 0) {
            if (*(int *)(*(int *)(param_1 + 0x10c) + 0x10) == 2) {
              uVar1 = 3;
            }
            else {
              uVar1 = 0;
            }
            goto LAB_104c992e;
          }
          iVar6 = build_and_send_command_packet_104ca462(param_1,*(int *)(param_1 + 0x110),*(int *)(param_1 + 0x10c),0);
          if (iVar6 != 0) {
            *(short *)(param_1 + 0x1d8) = (short)((int)(uint)*(ushort *)(param_1 + 0x1d0) >> 2);
            *(short *)(param_1 + 0x1da) = (short)((int)(uint)*(ushort *)(param_1 + 0x1d2) >> 2);
            *(short *)(param_1 + 0x1dc) = (short)((int)(uint)*(ushort *)(param_1 + 0x1d4) >> 2);
            *(short *)(param_1 + 0x1de) = (short)((int)(uint)*(ushort *)(param_1 + 0x1d6) >> 2);
            iVar6 = init_buffer_with_pool_alloc((int *)(*(uint32_t *)(param_1 + 0x11c)),(int)(*(uint32_t *)(param_1 + 0xf8)));
            if (iVar6 == 0) {
              if (*(int *)(param_1 + 0xf8) == 0) {
                uVar1 = 0;
              }
              else {
                uVar1 = 3;
              }
              goto LAB_104c992e;
            }
            iVar7 = *(int *)(param_1 + 0x10c);
            uVar2 = *(uint32_t *)(param_1 + 0xf4);
            uVar1 = *(uint32_t *)(param_1 + 0xf8);
            *(uint16_t *)((int)piVar10 + 2) = 0;
            *(uint32_t *)((int)piVar10 + 4) = uVar2;
            *(uint32_t *)((int)piVar10 + 8) = uVar1;
            iVar6 = build_and_send_event_packet_104c9df2(param_1,iVar7,(uint32_t *)(param_1 + 0x128),iVar6,
                                 *(uint16_t *)((int)piVar10 + 2),*(uint32_t *)((int)piVar10 + 4)
                                 ,*(uint32_t *)((int)piVar10 + 8));
            if (iVar6 != 0) {
              free_heap_if_flagged_1045c402(auStack_10,2);
              return 1;
            }
          }
        }
LAB_104c9b5a:
        uVar1 = 0;
      }
    }
  }
LAB_104c992e:
  *(uint32_t *)(param_1 + 0x214) = uVar1;
code_r0x104c9b64:
  free_heap_if_flagged_1045c402(auStack_10,2);
  return 0;
}
