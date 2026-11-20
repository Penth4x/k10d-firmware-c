/* @k10d allocate_and_link_entry @ 0x104e51fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * allocate_and_link_entry(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)advance_pairwise_buffer_pointers((int *)(*(uint32_t *)(param_1 + 0x74)));
  *piVar1 = param_3 + 100;
  *(int **)(*(int *)(param_1 + 0x40) + param_3 * 4) = piVar1;
  (((vtbl_entry*)(piVar1[6]))[7].fn)
            ((int)((vtbl_entry*)(piVar1[6]))[7].adj + (int)piVar1,
             *(uint32_t *)(*(int *)(param_1 + 0x40) + (param_2 + -100) * 4));
  increment_field_at_offset_0x10(param_1);
  return piVar1;
}
