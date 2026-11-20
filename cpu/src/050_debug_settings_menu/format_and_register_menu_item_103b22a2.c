/* @k10d format_and_register_menu_item_103b22a2 @ 0x103b22a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Formats a numeric value into a local buffer and updates an object via virtual calls.
 * summary:
 *   The function retrieves a value from param_1, formats it into a local buffer using a
 *   format string selected based on the value's magnitude, and then updates an object via
 *   virtual calls. It also checks several status flags via helper functions to determine if
 *   the update should proceed or if a specific state string should be shown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_register_menu_item_103b22a2(void *param_1,uint32_t param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  void *pvVar6;
  char *pcVar7;
  uintptr_t sp;
  char cVar8;
  char cVar9;
  bool bVar10;
  uint64_t uVar11;
  byte abStack_f [7];
  
  uVar2 = read_four_values_and_call_helper(*(uint32_t *)((int)param_1 + 0x28));
  abStack_f[0] = 0x20;
  abStack_f[1] = 0x20;
  abStack_f[2] = 0x20;
  abStack_f[3] = 0x20;
  abStack_f[4] = 0x20;
  abStack_f[5] = 0x20;
  abStack_f[6] = 0;
  iVar1 = (int)param_1 + 8;
  iVar3 = menu_item_register(iVar1);
  bVar10 = false;
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  if (uVar2 < 0xf41dd) {
    cVar8 = 1000 < uVar2;
    cVar9 = uVar2 == 1000;
    if (uVar2 < 1000) {
      uVar11 = compute_lens_fw_crc32(uVar2);
      uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
      param_4 = (uint)(void *)uVar11;
      compute_lens_fw_block_offset_10544502(0x40240000,(void *)0x0,uVar4);
      if (cVar8 == '\0' && cVar9 == '\0') {
        cVar8 = '\0';
        if (uVar2 != 0) {
          param_3 = 0x40240000;
          param_4 = 0;
          compute_lens_fw_block_offset_10544502(uVar4,(void *)uVar11,0x40240000);
          if (cVar8 != '\0') {
            pcVar7 = (char *)0x10565f94/*ROM*/;
            goto code_r0x103b244e;
          }
        }
        iVar3 = check_string_length_equals_30(*(uint32_t *)((int)param_1 + 0x28));
        if (iVar3 != 0) {
          iVar3 = query_object_via_temp_buffer_104f2788(*(uint32_t *)((int)param_1 + 0x28));
          if ((iVar3 == 1) ||
             (iVar3 = query_object_via_temp_buffer_104f2788(*(uint32_t *)((int)param_1 + 0x28)), bVar10 = false, iVar3 == 0
             )) {
            iVar3 = check_setting_0xd2_is_one(*(uint32_t *)((int)param_1 + 0x28));
            bVar10 = iVar3 != 0;
          }
          iVar3 = query_object_via_temp_buffer_104f2788(*(uint32_t *)((int)param_1 + 0x28));
          if ((iVar3 == 2) &&
             ((iVar3 = check_setting_0xd2_is_one(*(uint32_t *)((int)param_1 + 0x28)), iVar3 != 0 ||
              (iVar3 = check_string_length_limit(*(uint32_t *)((int)param_1 + 0x28)), iVar3 != 0)))) {
            bVar10 = true;
          }
          else if (!bVar10) goto LAB_103b2516;
          iVar3 = *(int *)((int)param_1 + 0x28);
          uVar5 = get_setting_99(iVar3);
          pvVar6 = (void *)(*(code *)0x104f2854/*ROM*/)(iVar3,uVar5);
          if ((int)pvVar6 < 10) {
            pcVar7 = (char *)0x10565f9c/*ROM*/;
          }
          else {
            pcVar7 = (char *)0x10565fa4/*ROM*/;
          }
          format_string_to_buffer_10545140(abStack_f,pcVar7,pvVar6,(void *)param_4);
        }
        goto LAB_103b2516;
      }
      pcVar7 = (char *)0x10565f8c/*ROM*/;
      param_3 = uVar2 / 100;
      param_4 = (uVar2 % 100) / 10;
    }
    else {
      pcVar7 = (char *)0x10565f84/*ROM*/;
      param_3 = uVar2 / 100;
    }
  }
  else {
    pcVar7 = (char *)0x10565f7c/*ROM*/;
  }
code_r0x103b244e:
  format_string_to_buffer_10545140(abStack_f,pcVar7,(void *)param_3,(void *)param_4);
  bVar10 = true;
LAB_103b2516:
  if (bVar10) {
    pvVar6 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar6,abStack_f);
    (((vtbl_entry*)(*(int *)((int)pvVar6 + 0xc)))[1].fn)
              ((int)*(short *)(*(int *)((int)pvVar6 + 0xc) + 8) + (int)pvVar6,1);
    set_struct_fields_and_flag(pvVar6,0x90,2);
  }
  else {
    iVar1 = menu_item_register(iVar1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
