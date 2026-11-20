/* @k10d read_and_dispatch_status_bits @ 0x104b7f54
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Reads status fields from a struct and dispatches them to a series of callback
 *   functions.
 * summary:
 *   The function first checks a condition via set_pointer_and_clear_flag. If true, it reads
 *   values from a pointer at offset 0x14 of param_1 using dispatch_virtual_query_by_index
 *   with indices 0-4. It then calls a sequence of functions at 0x104bb1da through
 *   0x104bb1fc, passing param_3 or param_4 and specific bit fields extracted from the read
 *   values. Finally, it writes a value to param_2 and calls delete_signal_semaphore.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b7f90) overlaps instruction at (ram,0x104b7f8e)
    */

uint32_t read_and_dispatch_status_bits(int param_1,uint8_t *param_2,int param_3,int param_4)

{
  bool bVar3;
  uint16_t uVar2;
  uint uVar1;
  uint8_t uVar4;
  
  bVar3 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  if (bVar3) {
    if (param_4 == 0) {
      uVar2 = dispatch_virtual_query_by_index((int *)(*(uint32_t *)(param_1 + 0x14)),(int)(2));
      (*(code *)0x104bb1da/*ROM*/)(param_3,uVar2);
      uVar1 = dispatch_virtual_query_by_index((int *)(*(uint32_t *)(param_1 + 0x14)),(int)(3));
      (*(code *)0x104bb1e4/*ROM*/)(param_3,uVar1 & 3);
      (*(code *)0x104bb1ea/*ROM*/)(param_3,(int)(uVar1 & 4) >> 2);
      (*(code *)0x104bb1f0/*ROM*/)(param_3,(int)(uVar1 & 0x18) >> 3);
      (*(code *)0x104bb1f6/*ROM*/)(param_3,(int)(uVar1 & 0x20) >> 5);
    }
    else {
      uVar2 = dispatch_virtual_query_by_index((int *)(*(uint32_t *)(param_1 + 0x14)),(int)(0));
      (*(code *)0x104bb1da/*ROM*/)(param_3,uVar2);
      uVar1 = dispatch_virtual_query_by_index((int *)(*(uint32_t *)(param_1 + 0x14)),(int)(1));
      (*(code *)0x104bb1e4/*ROM*/)(param_3,uVar1 & 3);
      (*(code *)0x104bb1ea/*ROM*/)(param_3,(int)(uVar1 & 4) >> 2);
      (*(code *)0x104bb1f0/*ROM*/)(param_3,(int)(uVar1 & 0x18) >> 3);
      (*(code *)0x104bb1f6/*ROM*/)(param_3,(int)(uVar1 & 0x20) >> 5);
      (*(code *)0x104bb1fc/*ROM*/)(param_3,(int)(uVar1 & 0xc0) >> 6);
      uVar2 = dispatch_virtual_query_by_index((int *)(*(uint32_t *)(param_1 + 0x14)),(int)(2));
      (*(code *)0x104bb1da/*ROM*/)(param_4,uVar2);
      uVar1 = dispatch_virtual_query_by_index((int *)(*(uint32_t *)(param_1 + 0x14)),(int)(3));
      (*(code *)0x104bb1e4/*ROM*/)(param_4,uVar1 & 3);
      (*(code *)0x104bb1ea/*ROM*/)(param_4,(int)(uVar1 & 4) >> 2);
      (*(code *)0x104bb1f0/*ROM*/)(param_4,(int)(uVar1 & 0x18) >> 3);
      (*(code *)0x104bb1f6/*ROM*/)(param_4,(int)(uVar1 & 0x20) >> 5);
      param_3 = param_4;
    }
    (*(code *)0x104bb1fc/*ROM*/)(param_3,(int)(uVar1 & 0xc0) >> 6);
    uVar4 = dispatch_virtual_query_by_index((int *)(*(uint32_t *)(param_1 + 0x14)),(int)(4));
    *param_2 = uVar4;
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return 1;
}
