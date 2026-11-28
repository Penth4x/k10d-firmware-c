/* @k10d grow_dynamic_buffer_1045cb38 @ 0x1045cb38
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Expands a dynamic buffer by allocating new memory and copying data when capacity is
 *   exceeded.
 * summary:
 *   The function checks if the current size (param_1[2] - param_1[1]) is less than 1. If
 *   so, it calculates a new size, calls a virtual method (slot 2) on the object at
 *   param_1[3] to allocate memory, and then uses helper functions to copy data and update
 *   pointers. If the buffer is not empty, it calls memmove_downward to handle the existing
 *   data. The logic is consistent with a dynamic array or buffer growth routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t grow_dynamic_buffer_1045cb38(int *param_1,uint32_t *param_2,uint32_t *param_3)

{
  uint32_t *new_base;
  int grow_size;
  int vtbl_ptr;

  new_base = (uint32_t *)param_1[1];
  if ((int)(((uint)(param_1[2] - (int)new_base >> 1) >> 0x1e) + (param_1[2] - (int)new_base)) >> 2 < 1)
  {
    grow_size = ((int)(((uint)((int)new_base - *param_1 >> 1) >> 0x1e) + ((int)new_base - *param_1)) >> 2)
                << 1;
    if (grow_size == 0) {
      grow_size = 1;
    }
    vtbl_ptr = *(int *)param_1[3];
    new_base = (uint32_t *)
               (((vtbl_entry*)(vtbl_ptr))[2].fn)(param_1[3] + (int)((vtbl_entry*)(vtbl_ptr))[2].adj,grow_size);
    if (new_base == (uint32_t *)0x0) {
      return 0;
    }
    copy_word_array_1045cd06(param_1,(uint32_t *)*param_1,param_2,new_base);
    copy_word_array_1045cd46(param_1,(uint32_t *)
                         ((((uint)((int)param_2 - *param_1 >> 1) >> 0x1e) +
                           ((int)param_2 - *param_1) & 0xfffffffc) + (int)new_base),1,param_3);
    copy_word_array_1045cd06(param_1,param_2,(uint32_t *)param_1[1],
                 (uint32_t *)
                 ((int)new_base +
                 (((uint)((int)param_2 - *param_1 >> 1) >> 0x1e) + ((int)param_2 - *param_1) &
                 0xfffffffc) + 4));
    zero_memory_range(param_1,(uint32_t *)*param_1,(uint32_t *)param_1[1]);
    vtbl_ptr = *(int *)param_1[3];
    (((vtbl_entry*)(vtbl_ptr))[3].fn)(param_1[3] + (int)((vtbl_entry*)(vtbl_ptr))[3].adj,*param_1);
    param_1[2] = (int)(new_base + grow_size);
    param_1[1] = (int)(new_base + ((int)(((uint)(param_1[1] - *param_1 >> 1) >> 0x1e) +
                                      (param_1[1] - *param_1)) >> 2) + 1);
    *param_1 = (int)new_base;
  }
  else {
    memmove_downward(param_1,(int)param_2,new_base,(int)(param_2 + 1));
    copy_word_array_1045cd46(param_1,param_2,1,param_3);
    param_1[1] = param_1[1] + 4;
  }
  return 1;
}
