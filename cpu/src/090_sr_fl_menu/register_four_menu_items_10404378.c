/* @k10d register_four_menu_items_10404378 @ 0x10404378
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object retrieved via menu_item_register, passing four
 *   distinct arguments in sequence.
 * summary:
 *   The function switches on param_2 (values 0-7) but executes identical logic for all
 *   cases. It repeatedly calls menu_item_register(param_1) to obtain an object pointer,
 *   then performs a virtual call to slot 2 (offset 0xc) of the object's vtable. The 'this'
 *   pointer is adjusted by a short offset stored in the object, and the arguments param_3
 *   through param_6 are passed sequentially in four separate calls. The switch statement
 *   appears to be redundant or a placeholder for future differentiation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10404390) overlaps instruction at (ram,0x1040438e)
    */

void register_four_menu_items_10404378(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint8_t param_5,uint8_t param_6)

{
  int iVar1;
  
  switch(param_2) {
  case 0:
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_4);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_5);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_6);
    break;
  case 1:
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_4);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_5);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_6);
    break;
  case 2:
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_4);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_5);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_6);
    break;
  case 3:
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_4);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_5);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_6);
    break;
  case 4:
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_4);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_5);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_6);
    break;
  case 5:
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_4);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_5);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_6);
    break;
  case 6:
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_4);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_5);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_6);
    break;
  case 7:
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_4);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_5);
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_6);
    break;
  default:
  }
  return;
}
