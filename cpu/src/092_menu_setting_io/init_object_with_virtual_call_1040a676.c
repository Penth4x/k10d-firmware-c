/* @k10d init_object_with_virtual_call_1040a676 @ 0x1040a676
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by calling helpers and a virtual method, then returns a
 *   status byte.
 * summary:
 *   The function calls an unknown initializer, passes a pointer offset by 0x48 to another
 *   helper, and writes to a memory block at offset 0x18. It performs a virtual call on an
 *   object pointer stored at offset 0x2c, passing the object itself and the 0x48 offset as
 *   arguments. It then calls two more helpers on the 0x18 block and returns the byte at
 *   offset 0x54.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t init_object_with_virtual_call_1040a676(int param_1)

{
  uint32_t *puVar1;
  int iVar2;
  
  copy_two_bytes_from_helper(__frv_reg_unset(4));
  allocate_struct_from_heap((int *)(param_1 + 0x48));
  puVar1 = (uint32_t *)(param_1 + 0x18);
  eventflag_clr_flg(puVar1,0x80);
  iVar2 = **(int **)(param_1 + 0x2c);
  (((vtbl_entry*)(iVar2))[25].fn)
            ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 200),param_1,0,param_1 + 0x48)
  ;
  eventflag_wai_flg(puVar1,0x80,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x80);
  return *(uint8_t *)(param_1 + 0x54);
}
