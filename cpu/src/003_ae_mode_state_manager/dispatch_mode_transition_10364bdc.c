/* @k10d dispatch_mode_transition_10364bdc @ 0x10364bdc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state flag and dispatches to one of two setup routines based on a mode value.
 * summary:
 *   The function reads a byte from a sub-object at offset 0x1c and checks a global flag. If
 *   conditions are met, it calls check_and_send_status_packet_10364e9e to get a mode value.
 *   If the mode is 1, it initializes two pointers and calls
 *   retry_operation_five_times_10364f94 three times with indices 0, 1, and 2. If the mode
 *   is 2, it calls init_object_with_three_params_10364e66. Finally, if another global flag
 *   is set, it performs additional setup involving register_menu_item_with_data_10385198
 *   and set_menu_item_flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_transition_10364bdc(void *param_1)

{
  uint16_t uVar1;
  int iVar2;
  uint extraout_r4;
  int iVar3;
  uint32_t uVar4;
  void *pvVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t local_54 [8];
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint32_t auStack_18 [4];
  byte bVar5;
  
  puVar7 = (uint32_t *)local_54;
  iVar2 = (int)param_1 + 0x1c;
  bVar5 = read_byte_at_offset_five_1051e50e(iVar2);
  extraout_r4 = (uint)bVar5;
  read_array_element_at_offset(iVar2,extraout_r4);
  iVar3 = read_array_element_at_offset(iVar2,extraout_r4);
  uVar1 = *(uint16_t *)(iVar3 + 2);
  iVar3 = read_array_element_at_offset(iVar2,extraout_r4);
  if ((*(char *)(iVar3 + 4) == '\0') && (*(char *)(extraout_r4 * 0x214 + -0x7ffe9ed8) != '\0')) {
    write_six_param_config_block_10364da4((int)param_1);
    iVar3 = check_and_send_status_packet_10364e9e(param_1);
    if (iVar3 == 1) {
      *puVar7 = 0x80015af0/*SDRAM*/;
      puVar7[1] = 0x800158dc/*SDRAM*/;
      iVar3 = retry_operation_five_times_10364f94((int)param_1,0,(void *)0x80018058/*SDRAM*/,0x80015d04/*SDRAM*/,*puVar7,puVar7[1]);
      if (iVar3 == 0) {
        *puVar7 = 0x80015af0/*SDRAM*/;
        puVar7[1] = 0x800158dc/*SDRAM*/;
        iVar3 = retry_operation_five_times_10364f94((int)param_1,1,(void *)0x80018058/*SDRAM*/,0x80015d04/*SDRAM*/,*puVar7,puVar7[1]);
        if (iVar3 == 0) {
          *puVar7 = 0x80015af0/*SDRAM*/;
          puVar7[1] = 0x800158dc/*SDRAM*/;
          iVar3 = retry_operation_five_times_10364f94((int)param_1,2,(void *)0x80018058/*SDRAM*/,0x80015d04/*SDRAM*/,*puVar7,puVar7[1]);
          if (iVar3 == 0) {
            invoke_virtual_slot2_on_three_objects((int)param_1);
          }
        }
      }
    }
    else if (iVar3 == 2) {
      init_object_with_three_params_10364e66(param_1);
    }
    if (DAT_80015f14/*SDRAM*/ != '\0') {
      uStack_28 = _DAT_80015d24/*SDRAM*/;
      uStack_24 = _DAT_80015d28/*SDRAM*/;
      uStack_20 = _DAT_80015d2c/*SDRAM*/;
      copy_two_words_from_param2((int)auStack_18,-0x7ffea2fc);
      uVar4 = return_first_word_1045c514(auStack_18);
      uStack_1c = (short)uVar4;
      uVar4 = read_struct_field_at_offset_4(auStack_18);
      pvVar6 = (void *)((int)param_1 + 0x1b4);
      uStack_1a = (short)uVar4;
      register_menu_item_with_data_10385198((int)pvVar6,1,&uStack_28);
      iVar2 = read_array_element_at_offset(iVar2,extraout_r4);
      bVar5 = *(byte *)(iVar2 + 4);
      iVar2 = read_table_entry_if_valid((void *)((int)param_1 + 0x224),uVar1);
      set_menu_item_flags(pvVar6,(uint)bVar5,(uint)(iVar2 == 1));
      *(uint32_t *)((int)param_1 + 0x204) = 2;
      call_helper_on_struct_field_1036c46c();
      call_helper_on_struct_field_1036c41a(param_1,pvVar6,1);
      free_heap_if_flagged_1045c402(auStack_18,2);
    }
  }
  return;
}
