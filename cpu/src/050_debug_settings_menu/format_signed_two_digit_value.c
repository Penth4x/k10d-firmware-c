/* @k10d format_signed_two_digit_value @ 0x103b1ff6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_signed_two_digit_value(void *param_1,void *param_2,uint8_t *param_3)

{
  int iVar1;
  char *pcVar2;
  uint8_t *puVar3;
  
  puVar3 = param_3;
  if ((int)param_2 < -0x62) {
    pcVar2 = (char *)0x10565f50/*ROM*/;
  }
  else if ((int)param_2 < 0) {
    pcVar2 = (char *)0x10565f58/*ROM*/;
    iVar1 = -(int)param_2;
    param_2 = (void *)(iVar1 % 10);
    puVar3 = (uint8_t *)(iVar1 / 10);
  }
  else if (param_2 == 0) {
    pcVar2 = (char *)0x10565f60/*ROM*/;
  }
  else if (((int)param_2 < 1) || (0x62 < (int)param_2)) {
    if ((int)param_2 < 99) {
      return;
    }
    pcVar2 = (char *)0x10565f6c/*ROM*/;
  }
  else {
    pcVar2 = (char *)0x10565f64/*ROM*/;
    puVar3 = (uint8_t *)((int)param_2 / 10);
    param_2 = (void *)((int)param_2 % 10);
  }
  format_string_to_buffer_10545140(param_3,pcVar2,puVar3,param_2);
  return;
}
