/* @k10d initialize_object_subsystems_104f3ce6 @ 0x104f3ce6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * purpose:
 *   Resets and configures two sub-objects within the class instance and initializes a local
 *   buffer.
 * summary:
 *   The function calls initialization routines on the pointers stored at offsets 0xc and
 *   0x10 of the object. It zeroes out a local 16-byte buffer and passes it to
 *   write_masked_shorts_to_mmio_block. Finally, it retrieves a pointer from
 *   get_or_init_singleton_object_1051d40e and passes it to update_camera_state_flags with
 *   arguments 3 and 0. The specific roles of the sub-objects and the final initialization
 *   step are not determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105c3a34": ignoring multiple overlapping fields */

uint32_t initialize_object_subsystems_104f3ce6(cls_105c3a34 *param_1)

{
  void *pvVar1;
  uintptr_t sp;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  set_flag_bit_8_in_dat_40128202(((uint32_t *)&(param_1->field_0x4))[2],0);
  set_bit15_of_dat_40100002(((uint32_t *)&(param_1->field_0x4))[3],0);
  set_bit15_of_dat_40100d00(((uint32_t *)&(param_1->field_0x4))[3],0);
  write_mmio_control_word(((uint32_t *)&(param_1->field_0x4))[3],1,1);
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  write_masked_shorts_to_mmio_block(((uint32_t *)&(param_1->field_0x4))[3],&uStack_18,&uStack_18);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,3,0);
  return 1;
}
