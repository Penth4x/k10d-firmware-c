/* @k10d allocate_kernel_object_10010fe0 @ 0x10010fe0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Allocates or releases a kernel object from a fixed-size pool based on the requested
 *   type and index.
 * summary:
 *   The function validates the object index against a global limit and checks the state of
 *   the object slot in a table at DAT_10011d04. It manages a global pointer _DAT_6a003758
 *   which appears to track the current active object or context. Depending on the state
 *   (free, in-use, or reserved), it calls helper functions to initialize, update, or
 *   finalize the object. The source module is identified as rtos_kernel, and the logic
 *   resembles a standard kernel object allocator or manager.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t allocate_kernel_object_10010fe0(int obj_index, int timeout_ticks)

{
  short obj_index_s;
  uint32_t ret_code;
  int can_dispatch;
  int slot_offset;
  int slot_ptr;
  short prev_obj_id;

  can_dispatch = rtos_can_dispatch();
  if (can_dispatch == 0) {
    if ((obj_index < 1) || (DAT_10011d40/*ROM*/ < obj_index)) {
      ret_code = E_ID;
    }
    else if (timeout_ticks < -1) {
      ret_code = E_PAR;
    }
    else {
      obj_index_s = (short)obj_index;
      slot_offset = obj_index_s * 0xe;
      slot_ptr = DAT_10011d04/*ROM*/ + slot_offset;
      if (*(short *)(slot_ptr + -0xe) == -2) {
        ret_code = E_NOEXS;
      }
      else if ((*(short *)(slot_ptr + -6) == 3) &&
              (*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c04) < *(short *)(slot_ptr + -4))) {
        ret_code = E_ILUSE;
      }
      else if (*(short *)(slot_ptr + -2) == _DAT_6a003758) {
        ret_code = E_ILUSE;
      }
      else if (*(short *)(slot_ptr + -2) == 0) {
        if ((*(short *)(slot_ptr + -6) == 3) &&
           (*(short *)(slot_ptr + -4) < *(short *)(_DAT_6a003758 * 0x44 + 0x6a001c00))) {
          ready_list_unlink(_DAT_6a003758);
          prev_obj_id = _DAT_6a003758;
          *(uint16_t *)(_DAT_6a003758 * 0x44 + 0x6a001c00) =
               *(uint16_t *)(DAT_10011d04/*ROM*/ + slot_offset + -4);
          ready_list_insert(prev_obj_id);
        }
        *(short *)(DAT_10011d04/*ROM*/ + slot_offset + -2) = _DAT_6a003758;
        insert_into_timeout_queue_1000fc60(_DAT_6a003758, obj_index_s);
        ret_code = 0;
      }
      else {
        if (timeout_ticks == -1) {
          *(uint32_t *)(_DAT_6a003758 * 0x44 + 0x6a001c1c) = 0xffffffff;
        }
        else {
          if (timeout_ticks == 0) {
            return E_TMOUT;
          }
          subtract_timeout_from_queue(timeout_ticks);
        }
        enqueue_timeout_event_10011a74(obj_index_s);
        adjust_task_priority((int)_DAT_6a003758,
                             (int)*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c00));
        ret_code = 0;
      }
    }
  }
  else {
    ret_code = E_CTX;
  }
  return ret_code;
}
