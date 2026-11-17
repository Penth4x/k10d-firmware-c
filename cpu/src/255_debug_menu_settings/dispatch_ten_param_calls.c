/* @k10d dispatch_ten_param_calls @ 0x104ef2a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_ten_param_calls(int param_1,uint16_t *param_2)

{
  (*(code *)0x1044e56a/*ROM*/)(*(uint32_t *)(param_1 + 4),*param_2);
  (*(code *)0x1044e57a/*ROM*/)(*(uint32_t *)(param_1 + 4),param_2[3]);
  (*(code *)0x1044e58a/*ROM*/)(*(uint32_t *)(param_1 + 4),param_2[1]);
  (*(code *)0x1044e59a/*ROM*/)(*(uint32_t *)(param_1 + 4),param_2[2]);
  (*(code *)0x1044d618/*ROM*/)(*(uint32_t *)(param_1 + 8),0);
  (*(code *)0x1044e2aa/*ROM*/)(*(uint32_t *)(param_1 + 4),param_2[4],0);
  (*(code *)0x1044e308/*ROM*/)(*(uint32_t *)(param_1 + 4),param_2[7],0);
  (*(code *)0x1044e366/*ROM*/)(*(uint32_t *)(param_1 + 4),param_2[5],0);
  (*(code *)0x1044e3c4/*ROM*/)(*(uint32_t *)(param_1 + 4),param_2[6],0);
  return;
}
