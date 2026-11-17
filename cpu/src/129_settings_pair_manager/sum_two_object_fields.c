/* @k10d sum_two_object_fields @ 0x1045c18e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_two_object_fields(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = get_second_word_of_struct(param_1);
  iVar2 = read_struct_field_at_offset_4((void *)((int)param_1 + 8));
  return iVar1 + iVar2;
}
