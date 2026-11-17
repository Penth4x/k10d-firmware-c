/* @k10d format_and_register_menu_item_103b1ed8 @ 0x103b1ed8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Constructs a 4-digit numeric string based on a status flag and sends it via a
 *   communication helper.
 * summary:
 *   The function initializes a local buffer with '0000'. It checks a byte at offset 0x50 in
 *   the object passed in param_1. Depending on this flag and a second byte at offset 0x48,
 *   it either calls format_signed_two_digit_value or format_string_to_buffer_10545140 with
 *   specific string pointers (0x10565f4c or 0x10565f44). Finally, it retrieves a pointer
 *   from offset 8 of the object and calls glyph_draw and set_struct_fields_and_flag, likely
 *   to transmit or update the formatted data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_register_menu_item_103b1ed8(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  char cVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  uintptr_t sp;
  byte abStack_d [5];
  
  uVar2 = get_setting_0xb2(*(int *)((int)param_1 + 0x28));
  abStack_d[0] = 0x30;
  abStack_d[1] = 0x30;
  abStack_d[2] = 0x30;
  abStack_d[3] = 0x30;
  abStack_d[4] = 0;
  if (*(char *)((int)param_1 + 0x50) == '\0') {
    uVar3 = get_or_init_heap_block();
    pvVar4 = (void *)query_object_byte_property_104f20a2(*(uint32_t *)((int)param_1 + 0x28));
    pvVar5 = (void *)lookup_two_byte_table_entry_1045a89c(uVar3,uVar2, __frv_reg_unset(6));
    cVar1 = *(char *)((int)param_1 + 0x48);
    if ((((cVar1 != '\n') && (cVar1 != '\x18')) && (cVar1 != '\x1c')) && (cVar1 != '\x1e')) {
      format_signed_two_digit_value(param_1,pvVar5,abStack_d);
      goto LAB_103b1fb4;
    }
    pcVar6 = (char *)0x10565f4c/*ROM*/;
  }
  else {
    uVar3 = get_or_init_heap_block();
    pvVar4 = (void *)query_object_via_temp_buffer_104f2056(*(uint32_t *)((int)param_1 + 0x28));
    pvVar5 = (void *)lookup_two_byte_table_entry_1045a89c(uVar3,uVar2, __frv_reg_unset(6));
    cVar1 = *(char *)((int)param_1 + 0x48);
    if (((cVar1 != '\n') && (cVar1 != '\x18')) && ((cVar1 != '\x1c' && (cVar1 != '\x1e')))) {
      format_signed_two_digit_value(param_1,pvVar5,abStack_d);
      goto LAB_103b1fb4;
    }
    pcVar6 = (char *)0x10565f44/*ROM*/;
  }
  format_string_to_buffer_10545140(abStack_d,pcVar6,pvVar4,param_4);
LAB_103b1fb4:
  pvVar4 = (void *)menu_item_register((int)param_1 + 8);
  glyph_draw(pvVar4,abStack_d);
  pvVar4 = (void *)menu_item_register((int)param_1 + 8);
  set_struct_fields_and_flag(pvVar4,0x60,2);
  return;
}
