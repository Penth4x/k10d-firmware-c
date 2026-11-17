/* @k10d initialize_two_entry_table @ 0x104a7086
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xc6-byte buffer and populates it with two entries of 0x30 ushort values
 *   each via a helper.
 * summary:
 *   Allocates 0xc6 bytes using heap_alloc_2 and stores the pointer at param_1 + 0x68. It
 *   calls write_two_byte_value_104a7246 to initialize the header and then loops twice,
 *   calling get_field_from_struct_at_offset to retrieve a source pointer and
 *   write_two_byte_value_104a7246 to copy 0x30 ushort values into the allocated buffer. The
 *   function appears to be a constructor or initialization routine for a data structure
 *   containing two fixed-size arrays.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_two_entry_table(int param_1)

{
  ushort uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = heap_alloc_2(0xc6);
  *(uint32_t *)(param_1 + 0x68) = uVar2;
  write_two_byte_value_104a7246(param_1,(void *)uVar2,2,1);
  iVar5 = 2;
  uVar1 = 0;
  do {
    write_two_byte_value_104a7246(param_1,(void *)(*(int *)(param_1 + 0x68) + iVar5),8,1);
    iVar3 = get_field_from_struct_at_offset(param_1,uVar1);
    iVar5 = iVar5 + 2;
    if (iVar3 != 0) {
      uVar4 = 0;
      do {
        write_two_byte_value_104a7246(param_1,(void *)(*(int *)(param_1 + 0x68) + iVar5),*(uint16_t *)(iVar3 + uVar4 * 2),1);
        uVar4 = uVar4 + 1 & 0xffff;
        iVar5 = iVar5 + 2;
      } while (uVar4 < 0x30);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}
