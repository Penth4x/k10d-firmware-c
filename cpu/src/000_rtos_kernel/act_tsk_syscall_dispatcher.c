/* @k10d act_tsk_syscall_dispatcher @ 0x1000fa2c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed process_delayed_task_events)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of timed task events, decrementing counters and activating tasks
 *   when their delay expires.
 * summary:
 *   The function reads a head pointer from 0x6a0036c4 and traverses a linked list of event
 *   structures (stride 0x44). For each entry, it decrements a counter at offset 0x1c; if
 *   the counter is non-zero, it proceeds to process a secondary list at 0x6a0036bc. If the
 *   counter is zero, it calls remove_task_from_timeout_queue_1001166c and act_tsk, likely
 *   to activate the associated task or signal an event. It also manipulates flags at offset
 *   0x06 and calls virtual-like functions via pointers in the event structure. The behavior
 *   is consistent with a kernel timeout or delay queue processor in a µITRON-like RTOS.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t act_tsk_syscall_dispatcher(void)

{
  short head_idx;
  int entry_off;
  uint32_t timeout_result;
  code *task_func_ptr;
  int cur_idx;
  
  increment_timeout_counter((int *)0x6a0036c8);
  head_idx = _DAT_6a0036c4;
  do {
    cur_idx = (int)head_idx;
    _DAT_6a0036c4 = head_idx;
    if (cur_idx == -1) {
LAB_1000fb04:
      if (_DAT_6a0036bc != (uint32_t)(&DAT_6a0036bc)) {
        do {
          cur_idx = (int)*(short *)(_DAT_6a0036bc + 0xc);
          if (*(int *)(_DAT_6a0036bc + 8) != 0) {
            *(int *)(_DAT_6a0036bc + 8) = *(int *)(_DAT_6a0036bc + 8) + -1;
            return 0;
          }
          if ((*(ushort *)(_DAT_6a0036bc + 0xe) & 8) == 0) {
            entry_off = cur_idx * 0x1c;
            insert_into_timeout_queue_10011644((int *)(DAT_10011cf4/*ROM*/ + entry_off + -0x1c));
            *(uint32_t *)(DAT_10011cf4/*ROM*/ + entry_off + -0x14) =
                 *(uint32_t *)(DAT_10011cf4/*ROM*/ + entry_off + -0xc);
            insert_into_timeout_queue_1000fcd4((uint32_t *)(DAT_10011cf4/*ROM*/ + entry_off + -0x1c));
            entry_off = DAT_10011cf4/*ROM*/ + entry_off;
            if ((*(ushort *)(entry_off + -0xe) & 2) != 0) {
              task_func_ptr = *(code **)(entry_off + -8);
              timeout_result = *(uint32_t *)(entry_off + -4);
              (*(code *)0x105370b0/*ROM*/)(cur_idx);
              (*task_func_ptr)(timeout_result);
              (*(code *)0x105370be/*ROM*/)(cur_idx);
            }
          }
          else {
            entry_off = cur_idx * 0x18;
            insert_into_timeout_queue_10011644((int *)(DAT_10011cf0/*ROM*/ + entry_off + -0x18));
            *(int *)(DAT_10011cf0/*ROM*/ + entry_off + -0x18) = DAT_10011cf0/*ROM*/ + entry_off + -0x18;
            task_func_ptr = *(code **)(entry_off + DAT_10011cf0/*ROM*/ + -8);
            timeout_result = *(uint32_t *)(entry_off + DAT_10011cf0/*ROM*/ + -4);
            lens_fw_update_stub_105370cc(cur_idx);
            (*task_func_ptr)(timeout_result);
            lens_fw_update_stub_105370da(cur_idx);
          }
        } while (_DAT_6a0036bc != (uint32_t)(&DAT_6a0036bc));
      }
      return 0;
    }
    entry_off = cur_idx * 0x44;
    if (*(int *)(entry_off + 0x6a001c1c) != 0) {
      *(int *)(entry_off + 0x6a001c1c) = *(int *)(entry_off + 0x6a001c1c) + -1;
      goto LAB_1000fb04;
    }
    lens_fw_update_stub_10537094();
    remove_task_from_timeout_queue_1001166c(head_idx);
    if ((*(byte *)(entry_off + 0x6a001c06) & 8) == 0) {
      *(uint8_t *)(entry_off + 0x6a001c06) = 2;
      if ((*(char *)(entry_off + 0x6a001c07) == '\0') || (*(char *)(entry_off + 0x6a001c07) == '\x01')) {
        ready_list_insert(head_idx);
      }
    }
    else {
      *(uint8_t *)(entry_off + 0x6a001c06) = 8;
    }
    if (*(char *)(entry_off + 0x6a001c07) == '\0') {
      *(uint16_t *)(entry_off + 0x6a001c16) = 0;
      timeout_result = E_TMOUT;
    }
    else if (*(char *)(entry_off + 0x6a001c07) == '\x01') {
      timeout_result = 0;
    }
    else {
      remove_node_from_queue((int)*(short *)(entry_off + 0x6a001c08),cur_idx,0);
      timeout_result = E_TMOUT;
    }
    act_tsk(cur_idx,timeout_result);
    lens_fw_update_stub_105370a2(cur_idx);
    head_idx = _DAT_6a0036c4;
  } while( true );
}
