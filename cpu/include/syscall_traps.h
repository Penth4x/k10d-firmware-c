/* syscall_traps.h (generated) — thunks that re-trap kernel syscalls via int #0x40. */
#ifndef SYSCALL_TRAPS_H
#define SYSCALL_TRAPS_H
#include "stdint.h"
uint32_t __trap_validate_and_store_task_params(uint param_1,ushort *param_2);
void __trap_rtos_sched_start_gate(void);
uint32_t __trap_check_task_state_transition(uint param_1, uint32_t param_2);
int __trap_find_free_queue_slot_1000d66c(ushort *param_1);
int __trap_find_free_tcb_slot_1000d6e4(ushort *param_1);
int __trap_find_free_tcb_slot_1000d770(ushort *param_1);
int __trap_allocate_free_task_slot(ushort *param_1);
int __trap_allocate_kernel_task_slot_1000d89c(ushort *param_1);
int __trap_find_free_queue_slot_1000d978(ushort *param_1);
int __trap_find_free_queue_slot_1000da18(ushort *param_1);
int __trap_allocate_kernel_task_slot_1000dac0(ushort *param_1);
uint32_t __trap_set_timer_channel_value(int param_1,int param_2);
uint32_t __trap_clear_task_flag_bits(int param_1,uint param_2);
uint32_t __trap_validate_task_id_and_flag(int param_1,ushort *param_2);
uint32_t __trap_validate_and_store_task_param(int param_1,ushort *param_2);
uint32_t __trap_validate_task_request(int param_1,ushort *param_2);
uint32_t __trap_validate_and_dispatch_event(int param_1,ushort *param_2);
uint32_t __trap_remove_node_from_timeout_queue_1000e46c(int param_1);
uint32_t __trap_allocate_kernel_object_1000e4e0(uint param_1);
uint32_t __trap_get_entry_status_word(int param_1,uint16_t *param_2);
uint32_t __trap_write_constant_to_param(uint16_t *param_1);
uint32_t __trap_call_kernel_service_with_param(void *param_1);
uint32_t __trap_act_tsk_syscall_dispatcher(void);
uint32_t __trap_call_kernel_service_at_0x1000d3ce(void);
uint32_t __trap_kernel_alloc_pool_block(int param_1,void *param_2,uint32_t *param_3);
uint32_t __trap_dequeue_timeout_queue_entry(int param_1,int *param_2);
uint32_t __trap_initialize_timeout_queue_node_10010304(uint16_t *param_1);
uint32_t __trap_get_timeout_queue_entry(int param_1,short *param_2);
uint32_t __trap_get_task_status_info(int param_1,ushort *param_2);
uint32_t __trap_heap_pool_free_block(int param_1,int *param_2);
uint32_t __trap_set_event_flag_bits(int param_1,uint param_2);
uint32_t __trap_dispatch_kernel_service_10010b10(void *param_1);
uint32_t __trap_kernel_sig_sem(int param_1);
uint32_t __trap_insert_into_timeout_queue_10010c18(int param_1,int *param_2);
uint32_t __trap_store_value_in_kernel_table_slot(int param_1,uint32_t param_2);
uint32_t __trap_activate_timeout_queue_entry(int param_1);
uint32_t __trap_validate_and_lock_task_slot(int param_1);
uint32_t __trap_cancel_timeout_queue_entry(int param_1);
uint32_t __trap_allocate_kernel_object_10010fe0(int param_1,int param_2);
uint32_t __trap_realos_rcv_mbx(int param_1,uint32_t *param_2,int param_3);
uint32_t __trap_kernel_wai_flg_svc(int param_1,uint param_2,uint param_3,uint32_t *param_4,int param_5);
uint32_t __trap_kernel_twai_sem(int param_1,int param_2);
uint32_t __trap_call_kernel_service_at_0x1000d3e8(void);
uint32_t __trap_terminate_task_by_id_100114c0(int param_1);
#endif
