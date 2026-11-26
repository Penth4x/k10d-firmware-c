/* @k10d read_lens_firmware_and_show_info @ 0x10536956
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Reads lens firmware data via a virtual interface, parses product/serial/version fields,
 *   and builds an OSD info screen.
 * summary:
 *   Part of the lens_firmware_update module. It displays a 'NOW LOADING' string, then calls
 *   a virtual method on an object obtained from get_or_create_camera_object to read lens
 *   data into a 0x10-byte buffer. If a size check (0x1c40) passes, it allocates a buffer
 *   and reads the full firmware image via virtual slots. It then parses the data to extract
 *   product number, serial number, and firmware version bytes into the object's fields.
 *   Finally, it formats and displays 'CURRENT INFO' and 'UPDATE INFO' screens with product,
 *   number, and version, and waits for a Cancel input.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10536d64) overlaps instruction at (ram,0x10536d62)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint read_lens_firmware_and_show_info(uint32_t *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  uint32_t uVar6;
  int iVar7;
  uint32_t uVar8;
  char *pcVar9;
  uint8_t *puVar10;
  int *piVar11;
  int iVar12;
  uint16_t *puVar13;
  uintptr_t sp;
  uint *puVar14;
  uint8_t auStackY_138 [2];
  uint uStack_11c;
  uint8_t auStack_ec [80];
  uint8_t uStack_9c;
  uint8_t uStack_9b;
  uint8_t uStack_9a;
  uint8_t uStack_99;
  uint8_t uStack_98;
  uint8_t uStack_97;
  uint8_t uStack_96;
  uint8_t uStack_95;
  uint8_t uStack_94;
  uint8_t uStack_93;
  uint8_t uStack_92;
  uint8_t uStack_91;
  uint8_t uStack_90;
  uint8_t uStack_8f;
  uint8_t uStack_8e;
  uint8_t uStack_8d;
  cls_105ab468 cStack_8c;
  cls_105a6eac cStack_6c;
  cls_105a6cfc acStack_64 [19];
  cls_105a70ec cStack_18;
  uint32_t uStack_c;
  
  puVar14 = (uint *)auStackY_138;
  build_and_dispatch_draw_params((int)param_1,4,7,s_Si6NOW_LOADING_10621d65 + 3,7,0xff,'\0');
  iVar4 = get_or_create_camera_object();
  piVar11 = *(int **)(iVar4 + 0xc);
  cls_105ab468_new(&cStack_8c);
  uStack_9c = 0x6a;
  uStack_9b = 0x13;
  uStack_9a = 0x75;
  uStack_99 = 0x75;
  uStack_98 = 0x65;
  uStack_97 = 0x6c;
  uStack_96 = 0x67;
  uStack_95 = 0x7a;
  uStack_94 = 0x6a;
  uStack_93 = 0x79;
  uStack_92 = 0x7c;
  uStack_91 = 7;
  uStack_90 = 0x4b;
  uStack_8f = 0x40;
  uStack_8e = 0x47;
  uStack_8d = 0x29;
  pvVar5 = (void *)heap_alloc_2(0x10);
  (*(code *)0x10486a2c/*ROM*/)(param_1,&uStack_9c,pvVar5,0x10);
  uStack_11c = call_with_offset_lock_1048101c(piVar11,pvVar5,&cStack_8c);
  *(uint16_t *)((int)puVar14 + 2) = 7;
  *(uint16_t *)((int)puVar14 + 6) = 0xff;
  *(uint8_t *)((int)puVar14 + 0xb) = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x12,(byte *)0x10621d84,*(uint16_t *)((int)puVar14 + 2),*(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
  if ((uStack_11c != 0) &&
     (uStack_11c = (uint)(cStack_8c.field_0x10 == 0x1c40), cStack_8c.field_0x10 == 0x1c40)) {
    uStack_c = 0;
    uStack_11c = (((vtbl_entry*)(*piVar11))[5].fn)
                           ((int)((vtbl_entry*)(*piVar11))[5].adj + (int)piVar11,pvVar5,1,&uStack_c);
    if (uStack_11c != 0) {
      uVar6 = heap_alloc_2(0x1c40);
      param_1[0x15] = uVar6;
      uStack_11c = (((vtbl_entry*)(*piVar11))[7].fn)
                             ((int)((vtbl_entry*)(*piVar11))[7].adj + (int)piVar11,uStack_c,uVar6,0x1c40)
      ;
      (((vtbl_entry*)(*piVar11))[6].fn)((int)((vtbl_entry*)(*piVar11))[6].adj + (int)piVar11,uStack_c);
    }
  }
  heap_free_2((int)pvVar5);
  *(uint16_t *)((int)puVar14 + 2) = 7;
  *(uint16_t *)((int)puVar14 + 6) = 0xff;
  *(uint8_t *)((int)puVar14 + 0xb) = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x13,(byte *)0x10621d88,*(uint16_t *)((int)puVar14 + 2),*(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
  if (uStack_11c == 0) {
    *(uint16_t *)((int)puVar14 + 2) = 7;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,4,0x14,(byte *)0x10621d90,*(uint16_t *)((int)puVar14 + 2),*(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
  }
  else {
    uStack_11c = 0;
    forward_event_to_subobject(*param_1,1);
    *(uint16_t *)((int)puVar14 + 2) = 7;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,4,0x14,(byte *)0x10621d8c,*(uint16_t *)((int)puVar14 + 2),*(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    iVar4 = initialize_singleton_object_1045d6a0();
    iVar12 = *(int *)(iVar4 + 0x1c);
    cls_105a6eac_new(&cStack_6c);
    iVar4 = 0;
    do {
      copy_four_bytes_from_struct_field_1045e59a(iVar12,&cStack_6c);
      iVar7 = test_field_bit_or_nonzero(&cStack_6c,4);
      if (iVar7 != 0) {
        uStack_11c = 1;
        break;
      }
      check_kernel_call_success_10459fea(0x10);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    if (uStack_11c != 0) {
      uStack_11c = 0;
      cls_105a6cfc_new(acStack_64);
      copy_0x45_byte_block(iVar12,acStack_64);
      iVar4 = extract_field_from_struct_1045fc62(acStack_64,1);
      if (iVar4 == 8) {
        eventflag_clr_flg(param_1 + 0x1c,1);
        iVar4 = forward_three_args_to_helper_1045e82c(iVar12,param_1 + 0x13,0x18);
        if (iVar4 != 0) {
          twai_flg_obj(param_1 + 0x1c,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
          cls_105a70ec_new(&cStack_18);
          copy_six_bytes_from_struct(iVar12,&cStack_18);
          *(uint16_t *)((int)param_1 + 0x5a) = 0;
          uVar6 = read_pair_from_buffer(&cStack_18,3);
          *(short *)(param_1 + 0x17) = (short)uVar6;
          uVar6 = read_pair_from_buffer(&cStack_18,0);
          *(char *)((int)param_1 + 0x5e) = (char)((uint)uVar6 >> 8);
          uVar6 = read_pair_from_buffer(&cStack_18,0);
          *(char *)((int)param_1 + 0x5f) = (char)uVar6;
          uVar6 = read_pair_from_buffer(&cStack_18,1);
          *(char *)(param_1 + 0x18) = (char)((uint)uVar6 >> 8);
          uVar6 = read_pair_from_buffer(&cStack_18,1);
          *(char *)((int)param_1 + 0x61) = (char)uVar6;
          puVar13 = (uint16_t *)param_1[0x15];
          *(uint16_t *)(param_1 + 0x19) = *puVar13;
          *(uint16_t *)((int)param_1 + 0x66) = puVar13[1];
          *(uint8_t *)(param_1 + 0x1a) = *(uint8_t *)(puVar13 + 8);
          *(uint8_t *)((int)param_1 + 0x69) = *(uint8_t *)((int)puVar13 + 0x11);
          *(uint8_t *)((int)param_1 + 0x6a) = *(uint8_t *)(puVar13 + 9);
          *(uint8_t *)((int)param_1 + 0x6b) = *(uint8_t *)((int)puVar13 + 0x13);
          uStack_11c = 1;
          cls_105a70ec_delete(&cStack_18,2);
        }
      }
      cls_105a6cfc_delete(acStack_64,2);
    }
    cls_105a6eac_delete(&cStack_6c,2);
  }
  *(uint16_t *)((int)puVar14 + 2) = 7;
  *(uint16_t *)((int)puVar14 + 6) = 0xff;
  *(uint8_t *)((int)puVar14 + 0xb) = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x15,(byte *)0x10621d94,*(uint16_t *)((int)puVar14 + 2),*(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
  if (uStack_11c == 0) {
    trigger_sr_cal_transfer_104867c0((int)param_1);
    pcVar9 = s_ERROR_10621e4c;
    *(uint16_t *)((int)puVar14 + 2) = 7;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    uVar6 = 4;
    uVar8 = 10;
  }
  else {
    trigger_sr_cal_transfer_104867c0((int)param_1);
    *(uint16_t *)((int)puVar14 + 2) = 6;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,1,0,s____LENS_CPU_F_W_UPDATE____10621d98,
                 *(uint16_t *)((int)puVar14 + 2),*(uint16_t *)((int)puVar14 + 6),
                 *(char *)((int)puVar14 + 0xb));
    *(uint16_t *)((int)puVar14 + 2) = 5;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    pcVar9 = s____CURRENT_INFO____10621db4;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,2,4,s____CURRENT_INFO____10621db4,*(uint16_t *)((int)puVar14 + 2),
                 *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    format_string_to_buffer_10545140(auStack_ec,s_NUMBER__04X_10621dc8,(void *)(uint)*(ushort *)(param_1 + 0x17),pcVar9)
    ;
    *(uint16_t *)((int)puVar14 + 2) = 2;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,3,6,auStack_ec,*(uint16_t *)((int)puVar14 + 2),
                 *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    bVar1 = *(byte *)((int)param_1 + 0x5e);
    bVar2 = *(byte *)((int)param_1 + 0x5f);
    bVar3 = *(byte *)((int)param_1 + 0x61);
    *puVar14 = (uint)*(byte *)(param_1 + 0x18);
    puVar14[1] = (uint)bVar3;
    format_string_to_buffer_10545140(auStack_ec,s_VER__01d__02d__02d__02d_10621dd4,(void *)(uint)bVar1,
                 (void *)(uint)bVar2);
    *(uint16_t *)((int)puVar14 + 2) = 2;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,4,6,auStack_ec,*(uint16_t *)((int)puVar14 + 2),
                 *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    *(uint16_t *)((int)puVar14 + 2) = 5;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    pcVar9 = s____UPDATE_INFO____10621dec;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,5,4,s____UPDATE_INFO____10621dec,*(uint16_t *)((int)puVar14 + 2),
                 *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    format_string_to_buffer_10545140(auStack_ec,s_PRODUCT__d_10621e00,(void *)(uint)*(ushort *)(param_1 + 0x19),pcVar9);
    *(uint16_t *)((int)puVar14 + 2) = 2;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    puVar10 = auStack_ec;
    build_and_dispatch_draw_params((int)param_1,6,6,auStack_ec,*(uint16_t *)((int)puVar14 + 2),
                 *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    format_string_to_buffer_10545140(auStack_ec,s_NUMBER__04X_10621e0c,(void *)(uint)*(ushort *)((int)param_1 + 0x66),
                 puVar10);
    *(uint16_t *)((int)puVar14 + 2) = 2;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,7,6,auStack_ec,*(uint16_t *)((int)puVar14 + 2),
                 *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    bVar1 = *(byte *)(param_1 + 0x1a);
    bVar2 = *(byte *)((int)param_1 + 0x69);
    bVar3 = *(byte *)((int)param_1 + 0x6b);
    *puVar14 = (uint)*(byte *)((int)param_1 + 0x6a);
    puVar14[1] = (uint)bVar3;
    format_string_to_buffer_10545140(auStack_ec,s_VER__01d__02d__02d__02d_10621e18,(void *)(uint)bVar1,
                 (void *)(uint)bVar2);
    *(uint16_t *)((int)puVar14 + 2) = 2;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,8,6,auStack_ec,*(uint16_t *)((int)puVar14 + 2),
                 *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    *(uint16_t *)((int)puVar14 + 2) = 7;
    *(uint16_t *)((int)puVar14 + 6) = 1;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,9,2,(byte *)0x10621e30,*(uint16_t *)((int)puVar14 + 2),*(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    *(uint16_t *)((int)puVar14 + 2) = 7;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,9,8,s_Cancel_10621e38,*(uint16_t *)((int)puVar14 + 2),
                 *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    *(uint16_t *)((int)puVar14 + 2) = 7;
    *(uint16_t *)((int)puVar14 + 6) = 1;
    *(uint8_t *)((int)puVar14 + 0xb) = 0;
    build_and_dispatch_draw_params((int)param_1,9,0x12,(byte *)0x10621e40,*(uint16_t *)((int)puVar14 + 2),*(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
    pcVar9 = (char *)0x10621e48;
    *(uint16_t *)((int)puVar14 + 2) = 7;
    *(uint16_t *)((int)puVar14 + 6) = 0xff;
    uVar6 = 9;
    uVar8 = 0x16;
  }
  *(uint8_t *)((int)puVar14 + 0xb) = 0;
  build_and_dispatch_draw_params((int)param_1,uVar6,uVar8,pcVar9,*(uint16_t *)((int)puVar14 + 2),
               *(uint16_t *)((int)puVar14 + 6),*(char *)((int)puVar14 + 0xb));
  clear_lens_update_flag(param_1);
  cls_105ab468_delete(&cStack_8c,2);
  return uStack_11c;
}
