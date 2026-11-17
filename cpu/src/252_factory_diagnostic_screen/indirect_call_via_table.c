/* @k10d indirect_call_via_table @ 0x104e49c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Performs an indirect function call through a pointer table indexed by param_4.
 * summary:
 *   The function loads a function pointer from an array located at param_1 + 0x54, using
 *   param_4 as the index. It then calls the function at that address, passing param_2 and
 *   param_3 as arguments. The return value of the called function is returned directly. The
 *   specific role of the table or the called functions is not determinable from the
 *   provided pseudocode and lack of callee information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t indirect_call_via_table(int param_1,void *param_2,void *param_3,int param_4)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x104e652e/*ROM*/)(*(uint32_t *)(param_1 + 0x54 + param_4 * 4));
  return uVar1;
}
