/* @k10d iterate_and_dispatch_byte_records @ 0x104b070c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a count of byte records in param_2, calling check_and_copy_buffer_region
 *   for each with a pointer and length.
 * summary:
 *   The function reads a count from offset 5 of param_2. It loops, calling an unknown
 *   function at 0x1052081e to retrieve a pointer to a record, then calls
 *   check_and_copy_buffer_region with param_1, the record pointer, the record length (byte
 *   at offset 1 of the record), and an accumulator param_3. The accumulator is updated by
 *   adding the record length and masking to 8 bits. The final accumulator value is
 *   returned. The specific role of the records and the dispatch function is not clear from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint iterate_and_dispatch_byte_records(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint32_t *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*(char *)(param_2 + 5) != '\0') {
    do {
      puVar2 = (uint32_t *)(*(code *)0x1052081e/*ROM*/)(param_2,bVar3,0);
      bVar1 = *(byte *)(puVar2 + 1);
      check_and_copy_buffer_region(param_1,(uint8_t *)*puVar2,(uint)bVar1,param_3);
      param_3 = bVar1 + param_3 & 0xff;
      bVar3 = bVar3 + 1;
    } while (bVar3 < *(byte *)(param_2 + 5));
  }
  return param_3;
}
