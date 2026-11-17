/* @k10d update_object_state_and_data @ 0x1036fcc4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Reads two 16-bit values from a buffer and updates an object's state and data via
 *   virtual calls.
 * summary:
 *   The function initializes a local buffer using copy_two_words_from_param2 and reads two
 *   16-bit values via return_first_word_1045c514 and read_struct_field_at_offset_4. It then
 *   performs virtual calls on an object pointer stored at param_1+0x2c, invoking slots at
 *   offsets 0x7c and 0x74 to update state (0 or 1) and data. The state update to 1 is
 *   conditional on a flag at param_1+0xb8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_object_state_and_data(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_28 [2];
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint16_t uStack_14;
  uint16_t uStack_12;
  
  uStack_20 = _DAT_80015d24/*SDRAM*/;
  uStack_1c = _DAT_80015d28/*SDRAM*/;
  uStack_18 = _DAT_80015d2c/*SDRAM*/;
  copy_two_words_from_param2((int)auStack_28,-0x7ffea2fc);
  uVar1 = return_first_word_1045c514(auStack_28);
  uStack_14 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_two_words_from_param2((int)auStack_28,-0x7ffea2fc);
  uVar1 = read_struct_field_at_offset_4(auStack_28);
  uStack_12 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  iVar2 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar2 + 0x7c))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x78),0);
  iVar2 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar2 + 0x74))
            ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x70),DAT_80015f14/*SDRAM*/,&uStack_20)
  ;
  if (*(char *)(param_1 + 0xb8) != '\0') {
    iVar2 = **(int **)(param_1 + 0x2c);
    (**(code **)(iVar2 + 0x7c))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x78),1);
  }
  return;
}
