/* @k10d write_data_to_stream_object @ 0x10478cb0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a buffer to a stream object via virtual calls, gated by a size check.
 * summary:
 *   The function calls clear_struct_fields_and_subblock, then constructs a temporary object
 *   (cls_105ab468). It calls call_with_offset_lock_1048101c with fields from param_1 and
 *   the temporary object. If the result is non-zero and a size field (uStack_1c) is less
 *   than 150000, it performs a sequence of virtual calls on the object at param_1+0x14
 *   (slots 5, 7, and 6) to process data, passing a pointer to a local variable. Finally, it
 *   calls parse_eeprom_calibration_data and cleans up the temporary object. The pattern
 *   suggests writing or committing data to a stream or file-like interface.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_data_to_stream_object(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105ab468 cStack_2c;
  uint32_t uStack_c;
  
  uVar2 = 0;
  clear_struct_fields_and_subblock(param_1);
  cls_105ab468_new(&cStack_2c);
  iVar1 = call_with_offset_lock_1048101c(*(void **)(param_1 + 0x14),*(void **)(param_1 + 0xc),&cStack_2c);
  if ((iVar1 != 0) && (cStack_2c.field_0x10 < 150000)) {
    uStack_c = 0;
    iVar1 = **(int **)(param_1 + 0x14);
    iVar1 = (((vtbl_entry*)(iVar1))[5].fn)
                      ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar1))[5].adj,
                       *(uint32_t *)(param_1 + 0xc),1,&uStack_c);
    if (iVar1 != 0) {
      iVar1 = **(int **)(param_1 + 0x14);
      iVar1 = (((vtbl_entry*)(iVar1))[7].fn)
                        ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar1))[7].adj,uStack_c,
                         *(uint32_t *)(param_1 + 0x18),cStack_2c.field_0x10);
      if (iVar1 != 0) {
        iVar1 = parse_eeprom_calibration_data(param_1,(void*)(*(uint32_t *)(param_1 + 0x18)));
        if (iVar1 == 0) {
          clear_struct_fields_and_subblock(param_1);
        }
        else {
          uVar2 = 1;
        }
      }
      iVar1 = **(int **)(param_1 + 0x14);
      (((vtbl_entry*)(iVar1))[6].fn)
                ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar1))[6].adj,uStack_c);
    }
  }
  cls_105ab468_delete(&cStack_2c,2);
  return uVar2;
}
