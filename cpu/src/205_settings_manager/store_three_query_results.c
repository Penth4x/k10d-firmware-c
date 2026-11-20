/* @k10d store_three_query_results @ 0x104a12b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with three different indices and stores the results in consecutive
 *   struct fields.
 * summary:
 *   The function takes a pointer to a struct (param_1), dereferences its first word as an
 *   object pointer, and calls read_struct_field_by_index_104a2a78 three times with that
 *   object and indices 3, 0, and 2. The return values are stored at offsets 0x58, 0x5c, and
 *   0x60 (indices 0x16, 0x17, 0x18) of the struct. It returns 1 unconditionally. The
 *   specific role of the helper and the struct fields is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_three_query_results(cls_105b5c6c *param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_struct_field_by_index_104a2a78((char*)(param_1) ->field_0x0,3);
  param_1->field_0x58 = uVar1;
  uVar1 = read_struct_field_by_index_104a2a78((char*)(param_1) ->field_0x0,0);
  param_1->field_0x5c = uVar1;
  uVar1 = read_struct_field_by_index_104a2a78((char*)(param_1) ->field_0x0,2);
  param_1->field_0x60 = uVar1;
  return 1;
}
