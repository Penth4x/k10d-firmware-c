/* @k10d check_four_conditions_in_order @ 0x104db8ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_four_conditions_in_order(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = compute_struct_offset_104d6852(param_2,1);
  return_r4_passthrough_104d7940();
  iVar2 = (*(code *)0x104d7118/*ROM*/)();
  if (iVar2 != 0) {
    (*(code *)0x104d794a/*ROM*/)(uVar1);
    iVar2 = (*(code *)0x104d733e/*ROM*/)();
    if (iVar2 != 0) {
      (*(code *)0x104d7952/*ROM*/)(uVar1);
      iVar2 = (*(code *)0x104d7534/*ROM*/)();
      if (iVar2 != 0) {
        (*(code *)0x104d796a/*ROM*/)(uVar1);
        iVar2 = (*(code *)0x104d7830/*ROM*/)();
        if (iVar2 != 0) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}
