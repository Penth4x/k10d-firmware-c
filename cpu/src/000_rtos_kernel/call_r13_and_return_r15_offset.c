/* @k10d call_r13_and_return_r15_offset @ 0x1000d530
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t call_r13_and_return_r15_offset(void)

{
  code *r13_in;
  uintptr_t sp;
  
  (*r13_in)();
  return *(uint64_t *)((int)sp + 0x10);
}
