/* @k10d build_exposure_param_block @ 0x104c3296
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Constructs a 32-byte parameter structure from values in param_3 and passes it to a
 *   handler.
 * summary:
 *   The function reads multiple values from param_3 using return_first_word_1045c514 and
 *   read_struct_field_at_offset_4. It initializes a local stack structure with fixed values
 *   (0x20, 0xffffffff) and computed values derived from dividing the read values by 4000
 *   via compute_byte_mask_from_bit_count. It then calls initialize_event_queue with param_1
 *   and the address of this structure, and writes a zero value to param_5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
build_exposure_param_block(int param_1,uint32_t param_2,uint32_t *param_3,void *param_4,uint16_t *param_5)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t uStack_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  void *pvStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uVar1 = return_first_word_1045c514(param_3);
  uVar2 = read_struct_field_at_offset_4(param_3);
  pvStack_1c = (void *)0x0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_16 = 0x20;
  uStack_14 = 0x20;
  uStack_10 = 0xffffffff;
  uStack_c = 0xffffffff;
  uStack_28 = param_2;
  uVar3 = return_first_word_1045c514(param_3);
  uStack_24 = (short)uVar3;
  uVar3 = return_first_word_1045c514(param_3);
  uStack_22 = (short)uVar3;
  uVar3 = read_struct_field_at_offset_4(param_3);
  uStack_16 = 0x20;
  uStack_14 = 0x20;
  uStack_20 = (short)uVar3;
  pvStack_1c = param_4;
  uStack_10 = compute_byte_mask_from_bit_count(uVar1 / 4000);
  uStack_c = compute_byte_mask_from_bit_count(uVar2 / 4000);
  initialize_event_queue(param_1,&uStack_28,1);
  *param_5 = uStack_18;
  return 1;
}
