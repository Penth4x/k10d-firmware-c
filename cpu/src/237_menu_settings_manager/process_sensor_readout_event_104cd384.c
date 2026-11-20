/* @k10d process_sensor_readout_event_104cd384 @ 0x104cd384
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_sensor_readout_event_104cd384(int param_1)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  void *pvVar4;
  char cVar10;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar11;
  int iVar12;
  uintptr_t sp;
  int *piVar13;
  uint8_t auStack_30 [4];
  
  piVar13 = (int *)auStack_30;
  *(uint32_t *)(param_1 + 0x210) = 0xc0016;
  pvVar4 = (void *)(*(code *)0x1052d61a/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
  iVar12 = *(int *)((int)pvVar4 + 8);
  if (((iVar12 == 2) || (iVar12 == 3)) && (cVar10 = read_byte_at_offset_104c2842(pvVar4,3), cVar10 != '\0')) {
    piVar5 = (int *)cls_1059e05c_new((cls_1059e05c *)0x0);
    iVar6 = (*(code *)0x1052d6a8/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
    iVar7 = (*(code *)0x1052d6a0/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
    iVar6 = lookup_table_entry(piVar5,iVar6,iVar7);
    iVar7 = (*(code *)0x1042682e/*ROM*/)(piVar5);
    iVar8 = (*(code *)0x10426834/*ROM*/)(piVar5);
    if (piVar5 != (int *)0x0) {
      (((vtbl_entry*)(*piVar5))[1].fn)((int)*(short *)(*piVar5 + 8) + (int)piVar5,3);
    }
    *piVar13 = (int)pvVar4;
    iVar6 = query_setting_status_code(param_1,iVar8,iVar7,iVar6,*piVar13);
    if (iVar6 == 0) {
      return;
    }
    *(uint32_t *)(param_1 + 0x214) = 10;
    iVar6 = **(int **)(param_1 + 0x1c);
    (((vtbl_entry*)(iVar6))[2].fn)
              ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar6))[2].adj,
               *(uint32_t *)(param_1 + 0x210),10);
    iVar6 = (*(code *)0x1052d61c/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
    if ((*(int *)(iVar6 + 4) == 0) && (iVar6 = process_sensor_readout_status(param_1), iVar6 == 0)) {
      return;
    }
    process_three_string_slots_per_entry(*(int *)(param_1 + 0x48));
    iVar6 = 1;
    if (iVar12 == 3) {
      iVar6 = 5;
    }
    else {
      iVar12 = (*(code *)0x104c284c/*ROM*/)(pvVar4,3);
      if (*(int *)(iVar12 + 0x1c) == 2) {
        iVar6 = 3;
      }
    }
    write_struct_fields_to_target_1052d6d8(*(uint32_t *)(param_1 + 0x1e0));
    iVar12 = get_or_create_singleton_object_1050b118();
    iVar7 = (*(code *)0x1052d61c/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
    uVar9 = get_aligned_next_pointer(iVar7);
    uVar3 = (*(code *)0x1052d626/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
    *piVar13 = uVar3;
    bVar11 = initialize_sensor_object_from_config(iVar12,iVar6,uVar9,0,*piVar13);
    if (bVar11) {
      uVar1 = *(uint16_t *)((int)pvVar4 + 4);
      uVar2 = *(uint16_t *)((int)pvVar4 + 6);
      iVar12 = read_struct_field_at_index_104c2890(pvVar4,0);
      iVar6 = update_entry_pair_and_notify(*(uint32_t *)(param_1 + 0x48),0,0xffffffff);
      if (iVar6 != 0) {
        if (iVar12 == 1) {
          iVar12 = 0;
LAB_104cd586:
          if (iVar12 != 0) {
LAB_104cd58a:
            iVar6 = process_buffered_data_entries_104bea6c(*(uint32_t *)(param_1 + 0x48),iVar12);
          }
        }
        else {
          if (iVar12 == 8) {
            iVar12 = 2;
            goto LAB_104cd586;
          }
          if (iVar12 == 3) {
            iVar12 = 3;
            goto LAB_104cd586;
          }
          if (iVar12 == 6) {
            iVar12 = 1;
            goto LAB_104cd58a;
          }
        }
        if ((iVar6 != 0) &&
           (iVar12 = init_and_bind_object_slot(*(uint32_t *)(param_1 + 0x48),uVar1,uVar2), iVar12 != 0)) {
          uVar3 = 1;
          goto code_r0x104cd5c0;
        }
      }
    }
  }
  uVar3 = 0;
code_r0x104cd5c0:
  *(uint32_t *)(param_1 + 0x214) = uVar3;
  return;
}
