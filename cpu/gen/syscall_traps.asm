; syscall_traps.asm (generated) — restore the int #0x40 REALOS trap that recompiled
; direct calls bypass. Each thunk is byte-identical to the original trap + a RET.
	.SECTION	SYSTRAP, CODE
	.GLOBAL	___trap_validate_and_store_task_params
___trap_validate_and_store_task_params:
	LDI:32	#0x1000d100, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_rtos_sched_start_gate
___trap_rtos_sched_start_gate:
	LDI:32	#0x1000d208, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_check_task_state_transition
___trap_check_task_state_transition:
	LDI:32	#0x1000d540, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_find_free_queue_slot_1000d66c
___trap_find_free_queue_slot_1000d66c:
	LDI:32	#0x1000d66c, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_find_free_tcb_slot_1000d6e4
___trap_find_free_tcb_slot_1000d6e4:
	LDI:32	#0x1000d6e4, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_find_free_tcb_slot_1000d770
___trap_find_free_tcb_slot_1000d770:
	LDI:32	#0x1000d770, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_allocate_free_task_slot
___trap_allocate_free_task_slot:
	LDI:32	#0x1000d7f0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_allocate_kernel_task_slot_1000d89c
___trap_allocate_kernel_task_slot_1000d89c:
	LDI:32	#0x1000d89c, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_find_free_queue_slot_1000d978
___trap_find_free_queue_slot_1000d978:
	LDI:32	#0x1000d978, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_find_free_queue_slot_1000da18
___trap_find_free_queue_slot_1000da18:
	LDI:32	#0x1000da18, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_allocate_kernel_task_slot_1000dac0
___trap_allocate_kernel_task_slot_1000dac0:
	LDI:32	#0x1000dac0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_set_timer_channel_value
___trap_set_timer_channel_value:
	LDI:32	#0x1000dfc8, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_clear_task_flag_bits
___trap_clear_task_flag_bits:
	LDI:32	#0x1000e1d0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_validate_task_id_and_flag
___trap_validate_task_id_and_flag:
	LDI:32	#0x1000e23c, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_validate_and_store_task_param
___trap_validate_and_store_task_param:
	LDI:32	#0x1000e2b0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_validate_task_request
___trap_validate_task_request:
	LDI:32	#0x1000e344, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_validate_and_dispatch_event
___trap_validate_and_dispatch_event:
	LDI:32	#0x1000e3d8, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_remove_node_from_timeout_queue_1000e46c
___trap_remove_node_from_timeout_queue_1000e46c:
	LDI:32	#0x1000e46c, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_allocate_kernel_object_1000e4e0
___trap_allocate_kernel_object_1000e4e0:
	LDI:32	#0x1000e4e0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_get_entry_status_word
___trap_get_entry_status_word:
	LDI:32	#0x1000e924, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_write_constant_to_param
___trap_write_constant_to_param:
	LDI:32	#0x1000e9b4, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_call_kernel_service_with_param
___trap_call_kernel_service_with_param:
	LDI:32	#0x1000e9d8, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_act_tsk_syscall_dispatcher
___trap_act_tsk_syscall_dispatcher:
	LDI:32	#0x1000fa2c, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_call_kernel_service_at_0x1000d3ce
___trap_call_kernel_service_at_0x1000d3ce:
	LDI:32	#0x1000fe60, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_kernel_alloc_pool_block
___trap_kernel_alloc_pool_block:
	LDI:32	#0x10010138, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_dequeue_timeout_queue_entry
___trap_dequeue_timeout_queue_entry:
	LDI:32	#0x10010278, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_initialize_timeout_queue_node_10010304
___trap_initialize_timeout_queue_node_10010304:
	LDI:32	#0x10010304, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_get_timeout_queue_entry
___trap_get_timeout_queue_entry:
	LDI:32	#0x10010498, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_get_task_status_info
___trap_get_task_status_info:
	LDI:32	#0x10010504, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_heap_pool_free_block
___trap_heap_pool_free_block:
	LDI:32	#0x10010660, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_set_event_flag_bits
___trap_set_event_flag_bits:
	LDI:32	#0x10010984, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_dispatch_kernel_service_10010b10
___trap_dispatch_kernel_service_10010b10:
	LDI:32	#0x10010b10, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_kernel_sig_sem
___trap_kernel_sig_sem:
	LDI:32	#0x10010b38, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_insert_into_timeout_queue_10010c18
___trap_insert_into_timeout_queue_10010c18:
	LDI:32	#0x10010c18, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_store_value_in_kernel_table_slot
___trap_store_value_in_kernel_table_slot:
	LDI:32	#0x10010db0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_activate_timeout_queue_entry
___trap_activate_timeout_queue_entry:
	LDI:32	#0x10010e38, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_validate_and_lock_task_slot
___trap_validate_and_lock_task_slot:
	LDI:32	#0x10010edc, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_cancel_timeout_queue_entry
___trap_cancel_timeout_queue_entry:
	LDI:32	#0x10010f50, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_allocate_kernel_object_10010fe0
___trap_allocate_kernel_object_10010fe0:
	LDI:32	#0x10010fe0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_realos_rcv_mbx
___trap_realos_rcv_mbx:
	LDI:32	#0x100111b0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_kernel_wai_flg_svc
___trap_kernel_wai_flg_svc:
	LDI:32	#0x100112a4, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_kernel_twai_sem
___trap_kernel_twai_sem:
	LDI:32	#0x100113dc, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_call_kernel_service_at_0x1000d3e8
___trap_call_kernel_service_at_0x1000d3e8:
	LDI:32	#0x100114b0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
	.GLOBAL	___trap_terminate_task_by_id_100114c0
___trap_terminate_task_by_id_100114c0:
	LDI:32	#0x100114c0, R12
	.DATA.B	0x1f,0x40		; INT #0x40
	.DATA.B	0x97,0x20		; RET
