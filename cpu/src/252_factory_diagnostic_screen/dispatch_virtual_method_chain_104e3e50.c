/* @k10d dispatch_virtual_method_chain_104e3e50 @ 0x104e3e50
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Invokes a sequence of virtual methods on an object, passing a buffer and intermediate
 *   results.
 * summary:
 *   The function initializes a 256-byte stack buffer using fill_byte_array. It then calls a
 *   virtual method (slot 11) on the object pointed to by param_1+0x18. Subsequently, it
 *   performs a chain of virtual calls on the object at param_1+8 (slots 5, 9, 7, and 6),
 *   passing the buffer and results from previous calls. The final return value is the
 *   result of the last virtual call or zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_chain_104e3e50(int param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_10c [256];
  uint32_t uStack_c;
  
  fill_byte_array(auStack_10c,0,0x100);
  (((vtbl_entry*)(*(int *)(param_1 + 0x18)))[11].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x18)))[11].adj + param_1,auStack_10c);
  uStack_c = 0;
  iVar2 = **(int **)(param_1 + 8);
  iVar2 = (((vtbl_entry*)(iVar2))[5].fn)
                    ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar2))[5].adj,auStack_10c,1,
                     &uStack_c);
  uVar1 = 0;
  if (iVar2 != 0) {
    iVar2 = parse_structured_data_block(param_1,uStack_c);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = **(int **)(param_1 + 8);
      iVar2 = (((vtbl_entry*)(iVar3))[9].fn)
                        ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar3))[9].adj,uStack_c,
                         param_2 + iVar2,0);
      uVar1 = 0;
      if (iVar2 != 0) {
        iVar2 = **(int **)(param_1 + 8);
        uVar1 = (((vtbl_entry*)(iVar2))[7].fn)
                          ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar2))[7].adj,uStack_c,
                           param_3,param_4);
        iVar2 = **(int **)(param_1 + 8);
        (((vtbl_entry*)(iVar2))[6].fn)
                  ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar2))[6].adj,uStack_c);
      }
    }
  }
  return uVar1;
}
