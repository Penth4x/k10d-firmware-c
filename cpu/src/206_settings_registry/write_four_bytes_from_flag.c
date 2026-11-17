/* @k10d write_four_bytes_from_flag @ 0x104a26b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_bytes_from_flag(int param_1,int param_2)

{
  bool bVar1;
  void *puVar2;
  
  bVar1 = check_flag_at_offset_0x24(param_1);
  if (bVar1) {
    puVar2 = &DAT_105b5aa4/*ROM*/;
  }
  else {
    puVar2 = &DAT_105b5aa0/*ROM*/;
  }
  copy_bytes_to_struct_field(param_2,puVar2,4);
  return;
}
