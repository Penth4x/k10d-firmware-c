/* @k10d cls_105b93b8_new @ 0x104bf02c
 * name: verified (structural evidence: heap_alloc(0xfd9c) when NULL; stores vtable 0x105b93b8; returns param_1)
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b93b8 (vtable 0x105b93b8, 0xfd9c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xfd9c) when NULL; stores vtable 0x105b93b8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t * cls_105b93b8_new(uint32_t *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t *puVar3;
  uint8_t auStack_3c [16];
  
  puVar2 = auStack_3c;
  puVar3 = auStack_3c;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xfd9c), puVar3 = puVar2, param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    *param_1 = 0x105b93b8/*ROM*/;
    cls_1059e288_new(param_1 + 1);
    *(uint8_t *)(param_1 + 7) = 0;
    *(uint8_t *)((int)param_1 + 0x1d) = 0;
    *(uint8_t *)((int)param_1 + 0x1e) = 1;
    cls_105a2af8_new(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(uint8_t *)(param_1 + 0xc) = 0;
    param_1[0xd] = 0xffffffff;
    param_1[0xe] = 0;
    param_1[0xf] = 0xffffffff;
    param_1[0x10] = 4;
    *(uint16_t *)(param_1 + 0x11) = 0;
    *(uint16_t *)((int)param_1 + 0x46) = 0;
    param_1[0x12] = 0;
    cls_105ab468_new(param_1 + 0x13);
    zero_init_six_bytes(param_1 + 0x1b);
    cls_105b572c_new(param_1 + 0x1d);
    param_1[0x8b] = 0;
    cls_105aae7c_new(param_1 + 0x8c);
    cls_105aadf4_new(param_1 + 0xd4);
    param_1[0x120] = 0;
    param_1[0x121] = 0;
    param_1[0x122] = 0;
    init_small_struct_fields(param_1 + 0x123);
    param_1[0x129] = 0;
    zero_four_byte_buffer(param_1 + 0x12a);
    cls_105d67cc_new(param_1 + 299);
    alloc_and_init_small_object(param_1 + 0x137);
    cls_105b9a6c_new(param_1 + 0x13c);
    initialize_lens_update_object(param_1 + 0x14a,0x344);
    puVar3[3] = 0;
    puVar3[7] = 0;
    puVar3[0xb] = 0;
    puVar3[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)(param_1 + 0x21b),(uint)_DAT_105a5c18/*ROM*/,1,1,puVar3[3],puVar3[7],
                 puVar3[0xb],puVar3[0xf]);
    cls_105aae94_new(param_1 + 0x21d);
    *(uint8_t *)(param_1 + 0x223) = 0;
    cls_105aae94_new(param_1 + 0x224);
    *(uint8_t *)(param_1 + 0x22a) = 0;
    cls_105b934c_new(param_1 + 0x22b);
    param_1[0x231] = 0;
    param_1[0x232] = 0;
    param_1[0x233] = 0xffffffff;
    param_1[0x234] = 0xffffffff;
    alloc_and_zero_struct_1051ec28(param_1 + 0x235);
    cls_105b9400_new(param_1 + 0x502);
    get_lens_fw_update_status((int)param_1 + 0x15e4, 1, 0xb34, (code *)alloc_and_zero_struct_1051ec28);
    get_lens_fw_update_status((int)param_1 + 0x2118, 1, 0xb34, (code *)alloc_and_zero_struct_1051ec28);
    get_lens_fw_update_status((int)param_1 + 0x2c4c, 0x10, 0xb34, (code *)alloc_and_zero_struct_1051ec28);
    get_lens_fw_update_status((int)param_1 + 0xdf8c, 0x10, 0xc, (code *)alloc_and_zero_twelve_bytes_1051ef2e);
    get_lens_fw_update_status((int)param_1 + 0xe04c, 1, 0xb34, (code *)alloc_and_zero_struct_1051ec28);
    *(uint16_t *)(param_1 + 0x3ae0) = 0;
    *(uint16_t *)((int)param_1 + 0xeb82) = 0;
    *(uint16_t *)(param_1 + 0x3ae1) = 0;
    *(uint16_t *)((int)param_1 + 0xeb86) = 0;
    *(uint8_t *)(param_1 + 0x3ae2) = 0;
    *(uint16_t *)((int)param_1 + 0xeb8a) = 0;
    *(uint16_t *)(param_1 + 0x3ae3) = 0;
    *(uint8_t *)((int)param_1 + 0xeb8e) = 0;
    *(uint8_t *)((int)param_1 + 0xeb8f) = 0;
    *(uint8_t *)(param_1 + 0x3ae4) = 0;
    *(uint8_t *)((int)param_1 + 0xeb91) = 0;
    *(uint16_t *)((int)param_1 + 0xeb92) = 0;
    *(uint16_t *)(param_1 + 0x3ae5) = 0;
    *(uint16_t *)((int)param_1 + 0xeb96) = 0;
    *(uint8_t *)(param_1 + 0x3ae6) = 0;
    *(uint16_t *)((int)param_1 + 0xeb9a) = 0;
    *(uint16_t *)(param_1 + 0x3ae7) = 0;
    *(uint8_t *)((int)param_1 + 0xeb9e) = 0;
    *(uint8_t *)((int)param_1 + 0xeb9f) = 0;
    *(uint8_t *)(param_1 + 0x3ae8) = 1;
    *(uint8_t *)((int)param_1 + 0xeba1) = 0;
    *(uint8_t *)((int)param_1 + 0xeba2) = 0;
    *(uint16_t *)(param_1 + 0x3ae9) = 0;
    *(uint16_t *)((int)param_1 + 0xeba6) = 0;
    param_1[0x3aea] = 0;
    get_lens_fw_update_status((int)param_1 + 0xebac, 6, 0x2fc, (code *)init_0x2fc_struct_with_two_objects);
    param_1[0x3f65] = 0;
    *(uint8_t *)(param_1 + 0x3f66) = 0;
    *(uint8_t *)((int)param_1 + 0xfd99) = 0;
    wait_flg_obj(param_1 + 8,0);
    iVar1 = get_or_create_camera_object();
    param_1[0x120] = *(uint32_t *)(iVar1 + 4);
    iVar1 = get_or_create_camera_object();
    param_1[0x122] = *(uint32_t *)(iVar1 + 8);
    iVar1 = get_or_create_camera_object();
    param_1[0x121] = *(uint32_t *)(iVar1 + 0xc);
    forward_three_args_to_helper_10459edc(param_1 + 2,1,1);
  }
  return param_1;
}
