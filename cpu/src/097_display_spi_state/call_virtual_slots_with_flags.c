/* @k10d call_virtual_slots_with_flags @ 0x1041bcea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Invokes two virtual methods on an object via a vtable pointer, passing 1 and 0 as
 *   arguments, and stores the return values in two output pointers.
 * summary:
 *   The function retrieves a vtable pointer from an object structure at offset 0x2c. It
 *   performs two virtual calls using the Cfront idiom, targeting the same vtable slot
 *   (offset 0x114) but with different integer arguments (1 and 0). The results of these
 *   calls are written to the memory locations pointed to by param_2 and param_3
 *   respectively. No specific camera subsystem behavior is evident from the mechanical
 *   structure alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slots_with_flags(cls_1059d1d8 *param_1,uint32_t *param_2,uint32_t *param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1->field_0x2c + 4);
  uVar1 = (((vtbl_entry*)(iVar2))[34].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[34].adj,1);
  *param_2 = uVar1;
  iVar2 = *(int *)(param_1->field_0x2c + 4);
  uVar1 = (((vtbl_entry*)(iVar2))[34].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[34].adj,0);
  *param_3 = uVar1;
  return;
}
