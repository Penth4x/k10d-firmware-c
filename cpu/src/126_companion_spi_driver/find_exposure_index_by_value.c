/* @k10d find_exposure_index_by_value @ 0x10449cd0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Searches a divisor table to find an index where a shifted power-of-two divided by the
 *   divisor falls within a target range.
 * summary:
 *   The function checks a boolean flag at offset 0x110 and a non-zero divisor at offset
 *   0xe8. It iterates through indices 0-14, calculating (1 << (index + 13)) / divisor, and
 *   breaks when the target value (param_2) is greater than or equal to the current value
 *   and less than or equal to the next value. It then calls an unknown function at
 *   0x1044b222 with the found index and returns 1 on success, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t find_exposure_index_by_value(void *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  uint32_t uVar4;
  
  bVar2 = check_bit7_of_nested_pointer(*(void **)((int)param_1 + 0x110));
  uVar4 = 0;
  if ((bVar2) && (*(int *)((int)param_1 + 0xe8) != 0)) {
    bVar1 = 0;
    do {
      bVar3 = bVar1;
      if (((uint)(1 << (bVar3 + 0xd & 0xf)) / *(uint *)((int)param_1 + 0xe8) < param_2) &&
         (param_2 <= (uint)(1 << (bVar3 + 0xe & 0xf)) / *(uint *)((int)param_1 + 0xe8))) break;
      bVar1 = bVar3 + 1;
    } while ((byte)(bVar3 + 1) < 0xf);
    (*(code *)0x1044b222/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),bVar3 + 1);
    uVar4 = 1;
  }
  return uVar4;
}
