/* @k10d check_flag_and_call_helper_10515bb2 @ 0x10515bb2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_flag_and_call_helper_10515bb2(int param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)((int)param_2 + 0x30) != '\0';
  if (bVar1) {
    call_two_helpers_on_object_10514cfa(param_1);
  }
  return bVar1;
}
