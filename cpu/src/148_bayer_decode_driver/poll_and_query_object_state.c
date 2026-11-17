/* @k10d poll_and_query_object_state @ 0x104688b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Polls a counter until zero, then queries an object state and conditionally updates a
 *   field.
 * summary:
 *   The function first calls check_flag_via_helper in a loop until it returns 0,
 *   effectively waiting for a condition or draining a queue. It then constructs a local
 *   structure with pointers to the input object and stack variables, and calls
 *   cpucom_spi_transaction with the object's field at offset 0x240. If the return value
 *   matches a specific constant and a local flag is 'N', it calls copy_bytes_unaligned to
 *   write data to the object at offset 0x205. The function returns 1 if this conditional
 *   update occurs, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t poll_and_query_object_state(void *param_1)

{
  int iVar1;
  int extraout_r4;
  uint32_t uVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_28 [12];
  uint32_t uStack_10;
  char cStack_9;
  
  piVar3 = (int *)auStack_28;
  iVar1 = check_flag_via_helper(*(int *)((int)param_1 + 0x240));
  uVar2 = 0;
  while (iVar1 != 0) {
    iVar1 = check_flag_via_helper(*(int *)((int)param_1 + 0x240));
  }
  cStack_9 = '\0';
  uStack_10 = 0;
  iVar1 = *(int *)((int)param_1 + 0x240);
  *piVar3 = (int)&cStack_9;
  piVar3[1] = (int)param_1 + 4;
  piVar3[2] = (int)&uStack_10;
  cpucom_spi_transaction(iVar1,0,(int)param_1 + 0x104,0,(uint8_t *)*piVar3,piVar3[1],(uint *)piVar3[2]);
  if ((extraout_r4 == _DAT_105a7ce8/*ROM*/) && (cStack_9 == 'N')) {
    uVar2 = 1;
    copy_bytes_unaligned((int)param_1 + 0x205,(int)param_1 + 4,0x4e,uStack_10);
  }
  return uVar2;
}
