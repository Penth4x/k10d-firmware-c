/* @k10d read_value_by_type_1051e246 @ 0x1051e246
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool read_value_by_type_1051e246(uint32_t param_1,int param_2,void *param_3)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (*(short *)((int)param_3 + 2) == 4) {
    uVar1 = read_table_entry_by_index(param_3,0);
  }
  else if (*(short *)((int)param_3 + 2) == 3) {
    uVar2 = read_u16_from_struct_array((int)param_3,0);
    uVar1 = (uint)uVar2;
  }
  *(uint *)(param_2 + 4) = uVar1;
  return uVar1 != 0;
}
