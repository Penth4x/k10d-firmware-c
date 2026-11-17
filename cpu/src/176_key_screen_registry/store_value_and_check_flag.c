/* @k10d store_value_and_check_flag @ 0x10482ec4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Stores a value at offset 0x14 of a struct, calls two helpers on offset 0x20, and
 *   returns whether bit 1 of the result is clear.
 * summary:
 *   The function writes param_2 to *(param_1 + 0x14). It then initializes a local variable
 *   to 0 and calls eventflag_wai_flg with a pointer to *(param_1 + 0x20), the constant 3,
 *   the local variable, and a global data pointer. It subsequently calls eventflag_clr_flg
 *   with the same struct pointer and the local variable. Finally, it returns true if bit 1
 *   of the local variable is not set. The specific roles of the callees and the struct are
 *   not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool store_value_and_check_flag(void *param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint uStack_c;
  
  *(uint32_t *)((int)param_1 + 0x14) = param_2;
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)((int)param_1 + 0x20),3,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)((int)param_1 + 0x20),uStack_c);
  return (uStack_c & 2) == 0;
}
