/* @k10d process_object_event_10476c66 @ 0x10476c66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_object_event_10476c66(int param_1,uint32_t param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  uint32_t uVar4;
  
  uVar4 = 0;
  piVar1 = (int *)read_bounded_array_element_10477358(param_1 + 0xc, __frv_reg_unset(5));
  if ((piVar1 != (int *)0x0) && (iVar2 = clear_and_set_flag_bit_1047712a(piVar1,param_3), iVar2 != 0)) {
    iVar2 = invoke_virtual_slot_4_10477064(piVar1);
    if (iVar2 == 0) {
      sVar3 = count_set_bits_in_mask(piVar1);
      if (sVar3 != 0) {
        update_short_max_value(param_1,param_2);
      }
      if (piVar1 != (int *)0x0) {
        (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
      }
      decrement_index_and_update_bounds((int *)(param_1 + 0xc),(uint)(param_2));
    }
    uVar4 = 1;
  }
  return uVar4;
}
