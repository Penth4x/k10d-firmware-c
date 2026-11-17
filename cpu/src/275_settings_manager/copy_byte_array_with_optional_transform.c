/* @k10d copy_byte_array_with_optional_transform @ 0x1051bfd8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 275_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_byte_array_with_optional_transform(ushort *param_1,byte *param_2,void *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  void *pvStack_c;
  
  pvStack_c = param_3;
  if (param_3 == (void *)0x0) {
    pvStack_c = (void *)count_string_length(param_2);
  }
  uVar2 = 0;
  if (0 < (int)pvStack_c) {
    do {
      uVar1 = (ushort)*param_2;
      if (param_4 == 0) {
        uVar1 = swap_byte_order(__frv_reg_unset(4));
      }
      *param_1 = uVar1;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1 & 0xff;
      param_1 = param_1 + 1;
    } while ((int)uVar2 < (int)pvStack_c);
  }
  return (int)pvStack_c;
}
