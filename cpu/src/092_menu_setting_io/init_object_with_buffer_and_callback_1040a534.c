/* @k10d init_object_with_buffer_and_callback_1040a534 @ 0x1040a534
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes an object at param_1 by setting up a 0x200-byte buffer at offset 0x18 and
 *   calling a setup routine.
 * summary:
 *   The function treats param_1 as a struct pointer. It calls eventflag_clr_flg on the
 *   pointer at offset 0x18 with size 0x200, likely allocating or initializing a buffer. It
 *   then calls init_object_with_two_ids_104c4728 with the value at offset 0x28, the object
 *   pointer, and the other arguments. It calls eventflag_wai_flg on the buffer pointer with
 *   size 0x200, a null pointer, and a global data pointer. Finally, it calls
 *   eventflag_clr_flg again on the buffer and returns the value at offset 0x44.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_object_with_buffer_and_callback_1040a534(int param_1,void *param_2,uint32_t param_3)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)(param_1 + 0x18);
  eventflag_clr_flg(puVar1,0x200);
  init_object_with_two_ids_104c4728(*(int *)(param_1 + 0x28),param_1,param_2,param_3);
  eventflag_wai_flg(puVar1,0x200,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x200);
  return *(uint32_t *)(param_1 + 0x44);
}
