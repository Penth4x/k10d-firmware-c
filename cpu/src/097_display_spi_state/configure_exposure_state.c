/* @k10d configure_exposure_state @ 0x1041668e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_exposure_state(int param_1)

{
  uint8_t *puVar1;
  char cVar6;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uintptr_t sp;
  cls_105a6eac cStack_10;
  
  puVar1 = (uint8_t *)get_sysparam_store_instance();
  cVar6 = read_sysparam_byte(puVar1);
  if (cVar6 != '\0') {
    uVar2 = get_sysparam_store_instance();
    iVar3 = get_sysparam_store_byte((uint8_t *)(uVar2),(uint32_t)(0x10));
    if (iVar3 != 0) {
      run_test_mode_sequence(param_1);
    }
  }
  *(uint8_t *)(param_1 + 0x92) = 1;
  store_word_at_offset_0x1500(param_1,2);
  cls_105a6eac_new(&cStack_10);
  iVar3 = initialize_singleton_object_1045d6a0();
  copy_four_bytes_from_struct_field_1045e59a(*(int *)(iVar3 + 0x1c),&cStack_10);
  pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
  uVar5 = read_bounded_array_element_1051d696(pvVar4,0x18);
  if ((uVar5 & 2) == 0) {
    iVar3 = test_field_bit_or_nonzero(&cStack_10,9);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
      uVar5 = read_bounded_array_element_1051d696(pvVar4,0x18);
      uVar2 = 1;
      if ((uVar5 & 1) != 0) {
        *(uint32_t *)(param_1 + 0x1514) = 2;
        goto LAB_10416762;
      }
    }
LAB_1041675c:
    *(uint32_t *)(param_1 + 0x1514) = uVar2;
  }
  else {
    iVar3 = test_field_bit_or_nonzero(&cStack_10,9);
    if (iVar3 == 0) {
      uVar2 = 3;
      goto LAB_1041675c;
    }
    *(uint32_t *)(param_1 + 0x1514) = 2;
  }
LAB_10416762:
  *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x8c8) = *(uint32_t *)(param_1 + 0x1514);
  set_flg_obj((uint32_t *)(param_1 + 0x1538));
  *(uint8_t *)(*(int *)(param_1 + 0x50) + 0x354) = 1;
  set_flag_at_offset_0x34c(*(uint32_t *)(param_1 + 0x50));
  *(uint32_t *)(param_1 + 0x14d8) = 0;
  if ((*(char *)(param_1 + 0x14f4) != '\0') || (*(int *)(param_1 + 0x1564) == 1)) {
    if (*(int *)(param_1 + 0x1564) == 1) {
      *(uint8_t *)(*(int *)(param_1 + 0x84) + 0x8c4) = *(uint8_t *)(param_1 + 0x1570);
      *(uint8_t *)(*(int *)(param_1 + 0x84) + 0x8c5) = *(uint8_t *)(param_1 + 0x1571);
      iVar3 = get_or_create_singleton_object_104fb12e();
      iVar3 = *(int *)(iVar3 + 0x78);
      *(uint8_t *)(*(int *)(param_1 + 0x84) + 0x6b9) = *(uint8_t *)(iVar3 + 0x20);
      *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x6bc) = *(uint32_t *)(iVar3 + 0x30);
      *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x6c0) = *(uint32_t *)(iVar3 + 0x34);
      *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x6c4) = *(uint32_t *)(iVar3 + 0x38);
      *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x6c8) = *(uint32_t *)(iVar3 + 0x3c);
      if (*(char *)(param_1 + 0x1576) != '\0') {
        *(uint8_t *)(*(int *)(param_1 + 0x84) + 0x6b9) = 0;
        *(uint8_t *)(param_1 + 0x1576) = 0;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
      (((vtbl_entry*)(iVar3))[14].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[14].adj,5);
      iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
      (((vtbl_entry*)(iVar3))[10].fn)
                (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[10].adj,
                 *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x54));
      iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
      (((vtbl_entry*)(iVar3))[6].fn)
                (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[6].adj,
                 *(uint32_t *)(param_1 + 0x156c));
      set_object_field_0x20(*(int *)(param_1 + 0x84),(void *)(param_1 + 0x10f6));
      iVar3 = (*(code *)0x1041a6a2/*ROM*/)(param_1,*(uint32_t *)(param_1 + 0x84));
      *(int *)(param_1 + 0x15d0) = iVar3;
      if (iVar3 == -1) {
        *(uint32_t *)(param_1 + 0x15d0) = 100;
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
      (((vtbl_entry*)(iVar3))[16].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[16].adj);
      iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
      (((vtbl_entry*)(iVar3))[17].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[17].adj);
      *(uint8_t *)(param_1 + 0x14fc) = 0;
    }
    goto code_r0x10416bb2;
  }
  *(uint8_t *)(*(int *)(param_1 + 0x84) + 0x8c4) = *(uint8_t *)(param_1 + 0x1570);
  *(uint8_t *)(*(int *)(param_1 + 0x84) + 0x8c5) = *(uint8_t *)(param_1 + 0x1571);
  if (*(int *)(param_1 + 0x1514) == 3) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
    (((vtbl_entry*)(iVar3))[14].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[14].adj,2);
    iVar3 = 0x1de;
LAB_104168c8:
    set_object_field_0x20(*(int *)(param_1 + 0x84),(void *)(iVar3 + param_1));
  }
  else {
    if (*(int *)(param_1 + 0x1514) == 1) {
      pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
      uVar5 = read_bounded_array_element_1051d696(pvVar4,0x18);
      iVar3 = *(int *)(param_1 + 0x84);
      if ((uVar5 & 2) == 0) {
        (((vtbl_entry*)(*(int *)(iVar3 + 0x8d4)))[14].fn)
                  (iVar3 + ((vtbl_entry*)(*(int *)(iVar3 + 0x8d4)))[14].adj,1);
        goto LAB_1041686c;
      }
      (((vtbl_entry*)(*(int *)(iVar3 + 0x8d4)))[14].fn)
                (iVar3 + ((vtbl_entry*)(*(int *)(iVar3 + 0x8d4)))[14].adj,2);
      iVar3 = 0x1de;
      goto LAB_104168c8;
    }
    if (*(int *)(param_1 + 0x1514) == 2) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
      (((vtbl_entry*)(iVar3))[14].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[14].adj,1);
LAB_1041686c:
      iVar3 = 0x9c;
      goto LAB_104168c8;
    }
    if ((*(uint *)(param_1 + 0x1508) & 0x2000000) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
      (((vtbl_entry*)(iVar3))[14].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[14].adj,3);
      goto LAB_1041686c;
    }
    iVar3 = get_or_create_singleton_object_104fb12e();
    iVar3 = *(int *)(iVar3 + 0x78);
    *(uint8_t *)(*(int *)(param_1 + 0x84) + 0x6b9) = *(uint8_t *)(iVar3 + 0x20);
    *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x6bc) = *(uint32_t *)(iVar3 + 0x30);
    *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x6c0) = *(uint32_t *)(iVar3 + 0x34);
    *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x6c4) = *(uint32_t *)(iVar3 + 0x38);
    *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x6c8) = *(uint32_t *)(iVar3 + 0x3c);
    uVar2 = get_sysparam_store_instance();
    iVar3 = get_sysparam_store_byte((uint8_t *)(uVar2),(uint32_t)(0x14));
    if (iVar3 != 0) {
      *(uint8_t *)(*(int *)(param_1 + 0x84) + 0x6b9) = 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
    (((vtbl_entry*)(iVar3))[14].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[14].adj,0);
    if (*(char *)(*(int *)(param_1 + 0x84) + 0x2d) == '\0') {
      *(uint8_t *)(param_1 + 0x14fd) = 0;
    }
    else {
      initialize_settings_context(param_1);
    }
    copy_flagged_data_blocks(param_1);
  }
  if (*(int *)(*(int *)(param_1 + 0x84) + 0x74) == *(int *)(*(int *)(param_1 + 0x84) + 0x70)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
    (((vtbl_entry*)(iVar3))[10].fn)
              (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[10].adj,
               *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x54));
  }
  else {
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
    pvVar4 = (void *)get_system_heap();
    mempool_release_block(pvVar4,*(void **)(*(int *)(param_1 + 0x84) + 0x54));
    pvVar4 = (void *)get_system_heap();
    uVar2 = mempool_get_block(pvVar4,*(void **)(*(int *)(param_1 + 0x84) + 0x70),0);
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
    iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
    (((vtbl_entry*)(iVar3))[10].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[10].adj,uVar2);
  }
code_r0x10416bb2:
  uVar2 = *(uint32_t *)(*(int *)(param_1 + 0x84) + 0x7e4);
  cls_105a6eac_delete(&cStack_10,2);
  return uVar2;
}
