/* @k10d BootMenu_ctor_retail_r5_0 @ 0x104864fa
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_object_with_heap_subobject)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xac byte sub-object, initializes it, stores its pointer in param_1+4, and
 *   invokes a virtual method on it.
 * summary:
 *   The function allocates 0xac bytes from the heap and initializes the memory with
 *   cls_105b2b70_new. It stores the resulting pointer at offset 4 of the input parameter.
 *   It then copies a value from get_sensor_singleton into the sub-object at offset 0xa0 and
 *   calls virtual slot 2 of the sub-object with argument 0. Finally, it calls
 *   modset_parser_singleton and four other functions (get_or_init_singleton_10489b4e,
 *   menu_ctor_TESTMODE, menu_ctor_classic_wrapper, get_or_create_singleton_object_1048a800)
 *   before returning the result of the virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* PATH-1: ctor chain with gate flag r5=0 (retail). Calls
   0x10487298/0x10489b4e/0x10486ff6(TESTMODE)/0x10486b7c(classic)/0x1048a800 */

uint32_t BootMenu_ctor_retail_r5_0(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar1 = heap_alloc((void *)0xac);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105b2b70_new((void *)iVar1);
  }
  *(int *)(param_1 + 4) = iVar1;
  iVar2 = get_sensor_singleton();
  *(uint32_t *)(iVar1 + 0xa0) = *(uint32_t *)(iVar2 + 4);
  iVar1 = **(int **)(param_1 + 4);
  uVar3 = (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x10),0)
  ;
  modset_parser_singleton();
  get_or_init_singleton_10489b4e();
  menu_ctor_TESTMODE();
  menu_ctor_classic_wrapper();
  get_or_create_singleton_object_1048a800();
  return uVar3;
}
