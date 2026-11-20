/* @k10d format_and_render_menu_item_103b1afc @ 0x103b1afc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Constructs a status string based on object state and sends it via a communication
 *   helper.
 * summary:
 *   The function reads a pointer from param_1+0x28 and calls helpers to retrieve data. It
 *   initializes a local buffer with '99999s' and selects a specific string constant from
 *   0x10565ecc-0x10565ed4 based on the value at param_1+0x48 and a flag at param_1+0x50. It
 *   then calls format_string_to_buffer_10545140 to process the buffer with the selected
 *   string, and finally calls glyph_draw to transmit the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_render_menu_item_103b1afc(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_20 [4];
  byte abStack_13 [7];
  ushort uStack_c;
  ushort uStack_a;
  
  piVar6 = (int *)auStack_20;
  pvVar1 = (void *)query_object_property_via_temp_104f1e76(*(uint32_t *)((int)param_1 + 0x28));
  uVar2 = get_setting_0xb2(*(int *)((int)param_1 + 0x28));
  abStack_13[0] = 0x39;
  abStack_13[1] = 0x39;
  abStack_13[2] = 0x39;
  abStack_13[3] = 0x39;
  abStack_13[4] = 0x39;
  abStack_13[5] = 0x73;
  abStack_13[6] = 0;
  uStack_c = 0;
  uStack_a = 0;
  iVar3 = *(int *)((int)param_1 + 0x28);
  puVar5 = &uStack_c;
  if (*(char *)((int)param_1 + 0x50) == '\0') {
    *piVar6 = (int)&uStack_a;
    dispatch_event_with_two_objects_104f1dd8(iVar3,uVar2,(int)pvVar1,puVar5,*piVar6);
    switch(*(uint8_t *)((int)param_1 + 0x48)) {
    case 6:
    case 8:
    case 10:
    case 0xc:
      pcVar4 = &DAT_10565ecc/*ROM*/;
      break;
    default:
      format_ratio_with_special_cases(param_1,(void *)(uint)uStack_c,(void *)(uint)uStack_a,abStack_13);
      goto LAB_103b1be6;
    case 0x18:
      pcVar4 = (char *)0x10565ed4/*ROM*/;
      break;
    case 0x1c:
      pcVar4 = (char *)0x10565ed0/*ROM*/;
    }
  }
  else {
    *piVar6 = (int)&uStack_a;
    dispatch_event_with_two_objects_104f1d3a(iVar3,uVar2,(int)pvVar1,puVar5,*piVar6);
    if (*(char *)((int)param_1 + 0x48) == '\x1c') {
      pcVar4 = (char *)0x10565ec0/*ROM*/;
    }
    else {
      if (*(char *)((int)param_1 + 0x48) != '\x18') {
        format_ratio_with_special_cases(param_1,(void *)(uint)uStack_c,(void *)(uint)uStack_a,abStack_13);
        goto LAB_103b1be6;
      }
      pcVar4 = (char *)0x10565ec4/*ROM*/;
    }
  }
  format_string_to_buffer_10545140(abStack_13,pcVar4,pvVar1,puVar5);
LAB_103b1be6:
  pvVar1 = (void *)menu_item_register((int)param_1 + 8);
  glyph_draw(pvVar1,abStack_13);
  return;
}
