/* @k10d dereference_and_call_pointer @ 0x104e499a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Loads a pointer from an array element and calls the function it points to.
 * summary:
 *   The function calculates an offset into an array of pointers using param_1, param_4, and
 *   a fixed offset of 0x54. It dereferences the resulting address to obtain a function
 *   pointer and executes it. The return value of the called function is passed back to the
 *   caller. No other side effects or specific hardware interactions are visible in this
 *   wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dereference_and_call_pointer(int param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x104e64ea/*ROM*/)(*(uint32_t *)(param_1 + 0x54 + param_4 * 4));
  return uVar1;
}
