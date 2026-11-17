/* @k10d configure_object_via_pointer_table @ 0x10501908
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_object_via_pointer_table(int param_1,void *param_2,uint8_t *param_3)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x14),param_2);
  (*(code *)0x104537f0/*ROM*/)(*(uint32_t *)(param_1 + 0xc),1);
  (*(code *)0x104537f0/*ROM*/)(*(uint32_t *)(param_1 + 0xc),0);
  (*(code *)0x104538e2/*ROM*/)(*(uint32_t *)(param_1 + 0xc),param_3[1]);
  (*(code *)0x104538a2/*ROM*/)(*(uint32_t *)(param_1 + 0xc),param_3[2]);
  (*(code *)0x1045385e/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*param_3);
  return;
}
