/* @k10d init_image_processor_channel @ 0x104ff3ee
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Initializes an image processor channel by resetting a control field and configuring a
 *   transfer descriptor.
 * summary:
 *   This function is virtual slot 2 of class cls_105d49dc, which resides in the
 *   image_processor_driver module. It calls wait_flg_obj to write 0 to the object's field
 *   at offset 0x3c, likely resetting a status or enable flag. It then calls
 *   alloc_pool_and_init_task with parameters (0xe, 0x1000, 4) on the field at offset 8,
 *   which appears to set up a DMA or memory transfer configuration for the image processor
 *   engine. The function returns 1, indicating successful initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_image_processor_channel(int param_1)

{
  wait_flg_obj((void *)(param_1 + 0x3c),0);
  alloc_pool_and_init_task((int *)(param_1 + 8),0xe,0x1000,4);
  return 1;
}
