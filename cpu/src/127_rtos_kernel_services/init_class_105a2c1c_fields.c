/* @k10d init_class_105a2c1c_fields @ 0x1045a0d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Initializes a class_105a2c1c object by setting a header and populating an array of
 *   fields based on a count.
 * summary:
 *   The function calls console_printf with a constant address (0x105a2c34) to initialize
 *   the object header. It then calls initialize_timeout_queue_node_10010304 to retrieve a
 *   structure containing a count (sStack_1e) and a pointer (piStack_28). It loops from
 *   index 2 to count-1, calling get_task_status_info for each index. If the result is zero,
 *   it calls console_printf again with either 0x105a2c94 or 0x105a2c64 depending on whether
 *   the pointer value is 0x5aa55aa5. This pattern is consistent with initializing an
 *   object's fields or slots.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_class_105a2c1c_fields(uint32_t param_1,void *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  uintptr_t sp;
  uint8_t auStack_48 [2];
  short sStack_46;
  int *piStack_28;
  uint8_t auStack_22 [4];
  short sStack_1e;
  
  console_printf((void *)0x105a2c34/*ROM*/,param_2,param_3,param_4);
  initialize_timeout_queue_node_10010304((void *)auStack_22);
  pvVar2 = (void *)0x2;
  if (2 < sStack_1e) {
    do {
      iVar1 = get_task_status_info((int)(short)pvVar2,(void *)auStack_48);
      if (iVar1 == 0) {
        if (*piStack_28 == 0x5aa55aa5) {
          console_printf((void *)0x105a2c94/*ROM*/,pvVar2,(void *)(int)sStack_46,param_4);
        }
        else {
          console_printf((void *)0x105a2c64/*ROM*/,pvVar2,(void *)(int)sStack_46,param_4);
        }
      }
      pvVar2 = (void *)((int)pvVar2 + 1);
    } while ((int)pvVar2 < (int)sStack_1e);
  }
  return;
}
