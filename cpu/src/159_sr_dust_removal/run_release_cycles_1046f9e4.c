/* @k10d run_release_cycles_1046f9e4 @ 0x1046f9e4
 * name: verified (structural evidence: shows "RELEASE TIMES" and "%4d" / "%4d / %4d" (0x105a95d8..) when param_3 != 0; loops param_2 times, or until stopped when param_2 < 1)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Debug-menu repeated release test: runs param_2 release cycles (param_2 < 1: until
 *   stopped, i.e. aging) and, if param_3 is set, shows "RELEASE TIMES n / m".
 * summary:
 *   VERIFIED: shows "RELEASE TIMES" and "%4d" / "%4d / %4d" (0x105a95d8..) when param_3 !=
 *   0; loops param_2 times, or until stopped when param_2 < 1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046fc76) overlaps instruction at (ram,0x1046fc74)
    */

void run_release_cycles_1046f9e4(int param_1,uint8_t *param_2,int param_3,uint8_t *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  char *pcVar5;
  void *pvVar6;
  void *pvVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStack_84 [8];
  uint8_t auStack_60 [80];
  cls_105a6eac cStack_10;
  
  puVar8 = auStack_84;
  iVar3 = get_or_create_singleton_object_104bb22a();
  uVar4 = *(uint32_t *)(iVar3 + 4);
  *(uint8_t *)(param_1 + 0x10) = 0;
  forward_event_to_subobject(param_1,1);
  release_context_two_fields(*(void **)(param_1 + 0x38));
  release_three_sub_objects(*(uint32_t *)(param_1 + 0x38));
  configure_object_subsystem(param_1,0);
  cls_105a6eac_new(&cStack_10);
  if (*(char *)(param_1 + 0x10) == '\0') {
    do {
      copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0x30),&cStack_10);
      iVar3 = test_field_bit_or_nonzero(&cStack_10,4);
      if (iVar3 != 0) break;
      check_kernel_call_success_10459fea(0xa);
    } while (*(char *)(param_1 + 0x10) == '\0');
  }
  if (param_3 != 0) {
    param_4 = (uint8_t *)0x105a95d8/*ROM*/;
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = 0xff;
    sr_dma_command((int)(param_1),(uint32_t)(2),(uint32_t)(5),(byte *)(0x105a95d8/*ROM*/),(uint16_t)(*(uint16_t *)(puVar8 + 2)),(uint16_t)(*(uint16_t *)(puVar8 + 6)));
  }
  bVar2 = 0 < (int)param_2;
  pvVar6 = (void *)0x0;
  if ((!bVar2) || (0 < (int)param_2)) {
    do {
      pvVar7 = pvVar6;
      pvVar6 = (void *)((int)pvVar7 + 1);
      if (*(char *)(param_1 + 0x10) != '\0') break;
      if (param_3 != 0) {
        if (bVar2) {
          pcVar5 = (char *)0x105a95ec/*ROM*/;
          param_4 = param_2;
        }
        else {
          pcVar5 = (char *)0x105a95e8/*ROM*/;
        }
        format_string_to_buffer_10545140(auStack_60,pcVar5,pvVar6,param_4);
        param_4 = auStack_60;
        *(uint16_t *)(puVar8 + 2) = 7;
        *(uint16_t *)(puVar8 + 6) = 0xff;
        sr_dma_command(param_1,4,7,param_4,*(uint16_t *)(puVar8 + 2),*(uint16_t *)(puVar8 + 6));
      }
      release_three_sub_objects(*(uint32_t *)(param_1 + 0x38));
      if (bVar2) {
        dispatch_mode_transition_104b7cd0((int)(uVar4),(void *)(param_1 + 4),(int)(0));
      }
      iVar3 = check_transaction_context_flag(*(int *)(param_1 + 0x38));
      if (iVar3 != 0) {
        cVar1 = *(char *)(param_1 + 0x10);
        while (cVar1 == '\0') {
          check_kernel_call_success_10459fea(0x1);
          iVar3 = check_transaction_context_flag(*(int *)(param_1 + 0x38));
          if (iVar3 == 0) break;
          cVar1 = *(char *)(param_1 + 0x10);
        }
      }
      release_struct_fields_10466d06(*(void **)(param_1 + 0x38));
      iVar3 = check_transaction_context_valid(*(int *)(param_1 + 0x38));
      if (iVar3 != 0) {
        cVar1 = *(char *)(param_1 + 0x10);
        while (cVar1 == '\0') {
          check_kernel_call_success_10459fea(0x1);
          iVar3 = check_transaction_context_valid(*(int *)(param_1 + 0x38));
          if (iVar3 == 0) break;
          cVar1 = *(char *)(param_1 + 0x10);
        }
      }
      release_context_two_fields(*(void **)(param_1 + 0x38));
      iVar3 = check_transaction_context_flag(*(int *)(param_1 + 0x38));
      if (iVar3 != 0) {
        cVar1 = *(char *)(param_1 + 0x10);
        while (cVar1 == '\0') {
          check_kernel_call_success_10459fea(0x1);
          iVar3 = check_transaction_context_flag(*(int *)(param_1 + 0x38));
          if (iVar3 == 0) break;
          cVar1 = *(char *)(param_1 + 0x10);
        }
      }
      release_struct_fields_10466d06(*(void **)(param_1 + 0x38));
      iVar3 = check_transaction_context_valid(*(int *)(param_1 + 0x38));
      if (iVar3 != 0) {
        cVar1 = *(char *)(param_1 + 0x10);
        while (cVar1 == '\0') {
          check_kernel_call_success_10459fea(0x1);
          iVar3 = check_transaction_context_valid(*(int *)(param_1 + 0x38));
          if (iVar3 == 0) break;
          cVar1 = *(char *)(param_1 + 0x10);
        }
      }
      release_context_two_fields(*(void **)(param_1 + 0x38));
      release_struct_fields_10466d8a(*(void **)(param_1 + 0x38));
      check_kernel_call_success_10459fea(0x64);
    } while (((int)param_2 < 1) || (pvVar6 = (void *)((int)pvVar7 + 1), (int)pvVar6 < (int)param_2))
    ;
  }
  configure_object_subsystem(param_1,1);
  release_struct_fields_10466d8a(*(void **)(param_1 + 0x38));
  release_context_two_fields(*(void **)(param_1 + 0x38));
  forward_event_to_subobject(param_1,0);
  if (param_3 != 0) {
    *(uint16_t *)(puVar8 + 2) = 2;
    *(uint16_t *)(puVar8 + 6) = 0xff;
    sr_dma_command((int)(param_1),(uint32_t)(6),(uint32_t)(8),(byte *)(0x105a95f8/*ROM*/),(uint16_t)(*(uint16_t *)(puVar8 + 2)),(uint16_t)(*(uint16_t *)(puVar8 + 6)));
  }
  *(uint8_t *)(param_1 + 0x10) = 0;
  forward_event_to_subobject(param_1,0);
  cls_105a6eac_delete(&cStack_10,2);
  return;
}
