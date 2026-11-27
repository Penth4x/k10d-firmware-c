/* @k10d process_buffer_entry_and_dispatch @ 0x104bee82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Validates a buffer entry, initializes state if new, and dispatches processing via a
 *   helper.
 * summary:
 *   The function first checks a status via init_buffer_with_size_0x10000. If active, it
 *   retrieves a pointer via select_and_activate_entry and calculates an offset into a large
 *   array (stride 0x2fc) to find a specific entry. It compares fields at this entry against
 *   the retrieved pointer; if they match, it calls copy_struct_fields_to_offset_104c22d4.
 *   If they do not match, it initializes several fields in the object (param_1) using
 *   values from the pointer and calls invoke_object_method_and_check_flag_104bf71e.
 *   Finally, it calls invoke_object_method_and_check_flag_104bf9c0 with a pointer to either
 *   the matched entry or the initialized state, and cleans up with
 *   invoke_virtual_slot_two_104bf5b6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool process_buffer_entry_and_dispatch(int param_1,int param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t *puVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  iVar3 = init_buffer_with_size_0x10000((uint32_t)param_1);
  if (iVar3 == 0) {
    *(uint8_t *)(param_1 + 0x30) = 1;
    bVar8 = false;
  }
  else {
    *(uint8_t *)(param_1 + 0x30) = 0;
    puVar4 = (uint32_t *)select_and_activate_entry(param_1,param_3);
    pcVar5 = (char *)(param_1 + 0xebac + (puVar4[2] + *(int *)(param_1 + 0x8d0)) * 0x2fc);
    *(char **)(param_1 + 0xfd94) = pcVar5;
    bVar1 = false;
    if ((((*pcVar5 != '\0') && (*(short *)(pcVar5 + 8) == *(short *)(puVar4 + 1))) &&
        (*(short *)(pcVar5 + 10) == *(short *)((int)puVar4 + 6))) &&
       (*(int *)(pcVar5 + 0xc) == puVar4[2])) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = copy_struct_fields_to_offset_104c22d4(pcVar5);
    }
    else {
      process_three_string_slots_per_entry(param_1);
      store_value_at_two_offsets(param_1,*puVar4);
      write_two_words_to_struct_104c1ff4(param_1,*(uint16_t *)(puVar4 + 1),*(uint16_t *)((int)puVar4 + 6));
      *(uint32_t *)(param_1 + 0x3c) = puVar4[2];
      *(uint32_t *)(param_1 + 0x23c) = *(uint32_t *)(param_1 + 0x34);
      if ((uint16_t *)(param_1 + 0x238) != (uint16_t *)(param_1 + 0x44)) {
        *(uint16_t *)(param_1 + 0x238) = *(uint16_t *)(param_1 + 0x44);
        *(uint16_t *)(param_1 + 0x23a) = *(uint16_t *)(param_1 + 0x46);
      }
      *(uint32_t *)(param_1 + 0x234) = *(uint32_t *)(param_1 + 0x3c);
      iVar6 = invoke_object_method_and_check_flag_104bf71e(param_1,param_1 + 0x230);
      iVar3 = 0;
      if (iVar6 != 0) {
        iVar3 = param_1 + 0x230;
      }
    }
    bVar8 = false;
    if (iVar3 != 0) {
      if (bVar1) {
        iVar3 = *(int *)(param_1 + 0xfd94);
        uVar2 = *(uint32_t *)(param_1 + 0x8c8);
        *(uint32_t *)(iVar3 + 0x2f0) = *(uint32_t *)(param_1 + 0x8c4);
        *(uint32_t *)(iVar3 + 0x2f4) = uVar2;
        *(uint32_t *)(param_1 + 0x40) = 0xfffffffe;
        *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 0x10) = 0xfffffffe;
        piVar7 = (int *)copy_struct_fields_to_offset_104c2310(*(uint32_t *)(param_1 + 0xfd94));
        piVar7[0x6c] = param_2;
      }
      else {
        *(uint32_t *)(param_1 + 0x40) = 0xfffffffe;
        piVar7 = (int *)(param_1 + 0x74);
        *piVar7 = param_1 + 0x230;
        *(uint32_t *)(param_1 + 0x78) = *(uint32_t *)(param_1 + 0x40);
        *(uint32_t *)(param_1 + 0x80) = *(uint32_t *)(param_1 + 0x8c4);
        *(uint32_t *)(param_1 + 0x84) = *(uint32_t *)(param_1 + 0x8c8);
        *(int *)(param_1 + 0x224) = param_2;
      }
      bVar8 = invoke_object_method_and_check_flag_104bf9c0(param_1,piVar7);
      if (!bVar1) {
        invoke_virtual_method_on_object_104bf7ee(param_1,param_1 + 0x230);
      }
    }
    invoke_virtual_slot_two_104bf5b6(param_1);
  }
  return bVar8;
}
