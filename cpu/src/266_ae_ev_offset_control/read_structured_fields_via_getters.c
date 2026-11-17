/* @k10d read_structured_fields_via_getters @ 0x1050269a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Calls a series of getter functions to populate an output buffer with 8 32-bit and 4
 *   16-bit values.
 * summary:
 *   The function takes a base pointer (param_1, unused in body) and an offset (param_2). It
 *   adds 8 to the offset and passes the result to 12 distinct code pointers located in the
 *   0x1045575a-0x104557c8 range. The return values are stored sequentially into the memory
 *   pointed to by param_3. The first 8 calls return 32-bit values, and the last 4 return
 *   16-bit values. The specific data retrieved depends on the unknown functions at those
 *   addresses.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_structured_fields_via_getters(uint32_t param_1,int param_2,uint32_t *param_3)

{
  uint32_t uVar1;
  uint16_t uVar2;
  
  param_2 = param_2 + 8;
  uVar1 = (*(code *)0x1045575a/*ROM*/)(param_2);
  *param_3 = uVar1;
  uVar1 = (*(code *)0x10455764/*ROM*/)(param_2);
  param_3[1] = uVar1;
  uVar1 = (*(code *)0x1045576e/*ROM*/)(param_2);
  param_3[2] = uVar1;
  uVar1 = (*(code *)0x10455778/*ROM*/)(param_2);
  param_3[3] = uVar1;
  uVar1 = (*(code *)0x10455782/*ROM*/)(param_2);
  param_3[4] = uVar1;
  uVar1 = (*(code *)0x1045578c/*ROM*/)(param_2);
  param_3[5] = uVar1;
  uVar1 = (*(code *)0x10455796/*ROM*/)(param_2);
  param_3[6] = uVar1;
  uVar1 = (*(code *)0x104557a0/*ROM*/)(param_2);
  param_3[7] = uVar1;
  uVar2 = (*(code *)0x104557aa/*ROM*/)(param_2);
  *(uint16_t *)(param_3 + 8) = uVar2;
  uVar2 = (*(code *)0x104557b4/*ROM*/)(param_2);
  *(uint16_t *)(param_3 + 8) = uVar2;
  uVar2 = (*(code *)0x104557be/*ROM*/)(param_2);
  *(uint16_t *)(param_3 + 8) = uVar2;
  uVar2 = (*(code *)0x104557c8/*ROM*/)(param_2);
  *(uint16_t *)(param_3 + 8) = uVar2;
  return;
}
