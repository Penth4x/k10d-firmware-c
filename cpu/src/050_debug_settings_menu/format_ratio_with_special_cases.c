/* @k10d format_ratio_with_special_cases @ 0x103b1c0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_ratio_with_special_cases(void *param_1,void *param_2,void *param_3,uint8_t *param_4)

{
  char *pcVar1;
  uint8_t *puVar2;
  void *pvVar3;
  
  pvVar3 = (void *)((uint)((int)param_2 << 0x10) / (uint)param_3);
  puVar2 = param_4;
  if ((int)pvVar3 < 99999) {
    if ((int)((uint)((int)param_3 << 0x10) / (uint)param_2) < 99999) {
      if (param_3 == (void *)0x1) {
        pcVar1 = (char *)&DAT_10565eec/*ROM*/;
        param_3 = param_2;
      }
      else if (param_3 == (void *)0xa) {
        if (param_2 != (void *)0x1) {
          pcVar1 = (char *)&DAT_10565ef8/*ROM*/;
          param_3 = pvVar3;
          puVar2 = (uint8_t *)((int)param_2 % 10);
        }
        else {
          pcVar1 = (char *)&DAT_10565ef0/*ROM*/;
        }
      }
      else {
        if (param_2 != (void *)0x1) {
          return;
        }
        pcVar1 = (char *)&DAT_10565f00/*ROM*/;
      }
    }
    else {
      pcVar1 = (char *)&DAT_10565ee4/*ROM*/;
    }
  }
  else {
    pcVar1 = (char *)&DAT_10565edc/*ROM*/;
  }
  format_string_to_buffer_10545140(param_4,pcVar1,param_3,puVar2);
  return;
}
