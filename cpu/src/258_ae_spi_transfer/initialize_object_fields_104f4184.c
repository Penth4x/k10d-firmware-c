/* @k10d initialize_object_fields_104f4184 @ 0x104f4184
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * purpose:
 *   Initializes several fields of a struct passed in param_1 by calling helper functions on
 *   each field.
 * summary:
 *   The function takes a pointer to a struct and initializes its members at offsets 0x14,
 *   0xc, 0x10, and 0x18. It calls set_irq_mask_by_channel on the field at 0x14 with
 *   specific parameters, calls set_dat_40128200_flag and set_bit14_in_dat_40128100 on the
 *   field at 0xc, calls write_byte_to_mmio_40100000 on the field at 0x10, and finally calls
 *   delete_signal_semaphore on the field at 0x18. It also calls
 *   get_or_init_singleton_object_1051d40e and update_camera_state_flags, which appear to be
 *   related to some kind of resource or state management, but their exact purpose is
 *   unclear without more context. The overall pattern suggests this is an initialization
 *   routine for a complex object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_fields_104f4184(int param_1)

{
  void *pvVar1;
  
  set_irq_mask_by_channel(*(int *)(param_1 + 0x14),-0x7fffffff,0x300);
  set_dat_40128200_flag(*(uint32_t *)(param_1 + 0xc),0);
  set_bit14_in_dat_40128100(*(uint32_t *)(param_1 + 0xc),0);
  write_byte_to_mmio_40100000(*(uint32_t *)(param_1 + 0x10),0);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,3,0);
  delete_signal_semaphore((int *)(param_1 + 0x18));
  return;
}
