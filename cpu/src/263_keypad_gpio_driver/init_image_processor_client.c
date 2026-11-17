/* @k10d init_image_processor_client @ 0x104fcd54
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Initializes an image processor client object by setting a flag and configuring a buffer
 *   descriptor.
 * summary:
 *   This function is virtual slot 2 of class cls_105d47d4, which resides in the
 *   image_processor_driver module. It calls wait_flg_obj with the object's member at offset
 *   0x2c and a zero argument, likely initializing a state or flag. It then calls
 *   alloc_pool_and_init_task with the member at offset 8, passing parameters 0xf, 0x1000,
 *   and 4, which suggests setting up a buffer or queue configuration. The function returns
 *   1, indicating success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_image_processor_client(int param_1)

{
  wait_flg_obj((void *)(param_1 + 0x2c),0);
  alloc_pool_and_init_task((int *)(param_1 + 8),0xf,0x1000,4);
  return 1;
}
