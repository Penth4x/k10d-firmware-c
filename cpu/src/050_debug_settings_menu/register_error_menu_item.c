/* @k10d register_error_menu_item @ 0x103b1d16
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Formats and logs an error message using a context object and a status code.
 * summary:
 *   The function constructs the string 'error' and selects a message template based on a
 *   status code stored at offset 0x49 in the context object (param_1). It calls
 *   format_string_to_buffer_10545140 to format the message, passing the selected template
 *   and additional parameters. Finally, it retrieves a logging handle from the context and
 *   calls glyph_draw to output the formatted message.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_error_menu_item(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  char *pcVar4;
  uint32_t uVar5;
  uintptr_t sp;
  byte abStack_d [5];
  
  abStack_d[0] = 0x65;
  abStack_d[1] = 0x72;
  abStack_d[2] = 0x72;
  abStack_d[3] = 0x6f;
  abStack_d[4] = 0;
  uVar5 = *(uint32_t *)((int)param_1 + 0x28);
  if (*(char *)((int)param_1 + 0x50) == '\0') {
    uVar2 = query_object_byte_property_104f1f0e(uVar5);
    pvVar3 = (void *)build_and_send_sensor_config(uVar5,uVar2);
    switch(*(uint8_t *)((int)param_1 + 0x49)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 10:
    case 0xb:
    case 0xc:
    case 0xf:
      pcVar4 = (char *)&DAT_10565f18/*ROM*/;
      break;
    default:
      format_number_with_digit_placeholders(param_1,pvVar3,abStack_d);
      goto LAB_103b1dc6;
    }
  }
  else {
    uVar2 = query_object_via_temp_buffer_104f1ec2(__frv_reg_unset(4));
    pvVar3 = (void *)build_and_send_sensor_config(uVar5,uVar2);
    cVar1 = *(char *)((int)param_1 + 0x49);
    if ((((cVar1 != '\n') && (cVar1 != '\v')) && (cVar1 != '\f')) && (cVar1 != '\x11')) {
      format_number_with_digit_placeholders(param_1,pvVar3,abStack_d);
      goto LAB_103b1dc6;
    }
    pcVar4 = (char *)0x10565f10/*ROM*/;
  }
  format_string_to_buffer_10545140(abStack_d,pcVar4,param_3,param_4);
LAB_103b1dc6:
  pvVar3 = (void *)menu_item_register((int)param_1 + 8);
  glyph_draw(pvVar3,abStack_d);
  return;
}
