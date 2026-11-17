/* @k10d set_two_bit_flags @ 0x104aa0cc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Sets two distinct bit positions (4 and 5) in a target object based on a 3-state input
 *   parameter.
 * summary:
 *   The function takes a pointer (param_1) and a state value (param_2). It calls
 *   set_bitfield_in_table_entry twice: first to set bit 5 (index 5) to 1 or 0 depending on
 *   whether param_2 is 1, 2, or 3, and second to set bit 4 (index 4) to 1 or 0 based on the
 *   same condition. The specific mapping is: param_2==1 sets bit5=1, bit4=0; param_2==2
 *   sets bit5=0, bit4=1; param_2==3 sets bit5=1, bit4=1; otherwise both are 0. The role of
 *   the target object and the specific hardware or logical meaning of these bits is not
 *   determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_bit_flags(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 1) {
    set_bitfield_in_table_entry(param_1,5,1);
    uVar1 = 0;
  }
  else if (param_2 == 2) {
    set_bitfield_in_table_entry(param_1,5,0);
    uVar1 = 1;
  }
  else if (param_2 == 3) {
    set_bitfield_in_table_entry(param_1,5,1);
    uVar1 = 1;
  }
  else {
    set_bitfield_in_table_entry(param_1,5,0);
    uVar1 = 0;
  }
  set_bitfield_in_table_entry(param_1,4,uVar1);
  return;
}
