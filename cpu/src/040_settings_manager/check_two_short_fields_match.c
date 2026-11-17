/* @k10d check_two_short_fields_match @ 0x1039600e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Compares two 16-bit fields in a struct against constants and returns a match status.
 * summary:
 *   The function checks if two short values at offsets 4 and 6 of a pointer (located at
 *   param_1+0xb8) match specific global constants. If they match and a global flag is 2, it
 *   initializes a local buffer, compares two values derived from param_1+0xbc and the local
 *   buffer using helper functions, and returns 0 if they match or 1 otherwise. If the
 *   initial check fails, it returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_short_fields_match(void *param_1)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  if ((*(short *)(*(int *)((int)param_1 + 0xb8) + 4) == sRam8001a0b8) &&
     (*(short *)(*(int *)((int)param_1 + 0xb8) + 6) == sRam8001a0ba)) {
    if (iRam8001a098 != 2) {
      return 0;
    }
    copy_two_words_from_param2((int)auStack_18,-0x7ffe5f80);
    iVar1 = read_struct_field_at_offset_4((uint32_t *)((int)param_1 + 0xbc));
    iVar2 = read_struct_field_at_offset_4(auStack_18);
    if (iVar1 == iVar2) {
      iVar1 = return_first_word_1045c514((uint32_t *)((int)param_1 + 0xbc));
      iVar2 = return_first_word_1045c514(auStack_18);
      if (iVar1 == iVar2) {
        free_heap_if_flagged_1045c402(auStack_18,2);
        return 0;
      }
    }
    free_heap_if_flagged_1045c402(auStack_18,2);
  }
  return 1;
}
