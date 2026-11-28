# Decompile-divergence catalog

Per-function FINDINGS from the cleanup sweep (fcc-asm vs original disasm + bestiary classes). This is the faithfulness backlog: each entry is a place the decompiled C may not reproduce the original machine code. Machine-appended; review + fix.

## init_object_with_subroutine_calls  (`cpu/src/005_shooting_mode_init/init_object_with_subroutine_calls.c`)
- [none] second argument to `register_ten_menu_items_1037bee4` is the constant 0x18 in the original (r9 holds the offset used for the addn, never overwritten before the call) but the C passes the byte loaded from the struct @ `register_ten_menu_items_1037bee4((int)pcVar1,(uint)*(byte *)((int)param_1 + 0x80))` vs `ldi:8 #0x18,r9` / `addn r8,r9` / `call:d @r12` (r9 still 0x18) -> the decompiler misattributed the later-loaded byte (r5) as the second call argument; the real second arg is the literal 0x18.
- [none] byte offset for the `ldub` is 0x98 from base in the original (r8 was already advanced to base+0x18 before the load) but the C reads from base+0x80 @ `(uint)*(byte *)((int)param_1 + 0x80)` vs `addn r8,r9` (r8←base+0x18) then `ldub @(r13,r8),r5` with r13=0x80 → effective offset 0x18+0x80=0x98 -> the decompiler failed to account for the prior r8 modification, reading the wrong byte.
- [none] second argument to `register_two_menu_items_1037bc0e` is base in the original (r8 restored from r4 before the call) but the C passes pcVar1 (base+0x18) @ `register_two_menu_items_1037bc0e(pcVar1)` vs `mov r8,r4` / `call:d @r12` (r8=base) -> the decompiler incorrectly carried the earlier r8=base+0x18 forward instead of the restored base.
- [none] second argument to `call_helper_on_struct_field_1036c41a` is the byte value (r5) in the original but the C passes pcVar1 (base+0x18) @ `call_helper_on_struct_field_1036c41a(param_1,pcVar1,1)` vs `mov r9,r5` / `call:d @r12` (r9=byte) -> the decompiler substituted the pointer for the byte that was actually loaded into r5.

## process_state_0x3030009  (`cpu/src/005_shooting_mode_init/process_state_0x3030009.c`)
- [none] The `mov r10,r4` at 0x10365b56 (loop body) and 0x10365b64 (r8==1 path) appear to save/restore the return value of `register_menu_item_with_limit` across the loop and into the post-loop call. The C code discards the return value in the loop and passes the literal `100` as the second argument in the `iVar2==1` path, while the assembly passes the saved `r10` (last loop-iteration return value) as the second argument to `register_menu_item_with_limit` at 0x10365b6c. This is a data-flow discrepancy in the decompilation of the `iVar2==1` branch: the C emits `register_menu_item_with_limit(0x80018060, 100)` but the asm emits `register_menu_item_with_limit(0x80018060, r10)` where `r10` is the return value from the last `register_menu_item_with_limit` call inside the loop (or `0x80018060` if the loop never executed). The `ldi:8 #0x64,r5` at 0x10365b6e (which the C maps to the `100` argument) is actually in the delay slot of the `call:d` at 0x10365b6c, meaning it sets up `r5=100` for the *next* call (`check_kernel_call_success_10459fea`), not for `register_menu_item_with_limit`. @ `register_menu_item_with_limit(0x80018060/*SDRAM*/,100)` vs `mov r10,r4 / call:d @r12 / ldi:8 #0x64,r5` (delay slot) -> the second argument to the post-loop `register_menu_item_with_limit` is the saved loop return value, not the constant 100; the 100 is the argument to the subsequent `check_kernel_call_success_10459fea` call.

## act_tsk  (`cpu/src/000_rtos_kernel/act_tsk.c`)
- [none] First call passes the computed address (r8 = 0x6a0018c0 + param_1*4) as arg1, while the decompiled C dereferences it (`*(int *)(&DAT_6a0018c0 + param_1 * 4)`), passing the value at that address instead. The `ld @r12,r4` at 0x1000e6be loads *(int*)(0x6a0018c0) into r4 (a non-argument register) and appears to be dead/unused. The fcc recompile of the C produces a different first-argument value (dereferenced) than the original (raw address), so the two calls to `act_tsk_framewrite` will receive different data. @ `act_tsk_framewrite(*(int *)(&DAT_6a0018c0 + param_1 * 4),param_2)` vs `lsl #2,r8 / addn r8,r12 / call @r12` (r8 holds the address, not a dereference) -> the C dereferences a pointer the original passes by value.

## act_tsk_framewrite  (`cpu/src/000_rtos_kernel/act_tsk_framewrite.c`)
- [none] Original leaves `r0` set to the first argument before `ret` (`mov r0,r14` @ 0x1000d42a), while the decompiled `void` function and the fcc output do not establish that return-register value; if any caller consumes `r0` after this call, the recompiled code diverges. This is not one of the listed B-NN classes.

## act_tsk_syscall_dispatcher  (`cpu/src/000_rtos_kernel/act_tsk_syscall_dispatcher.c`)
- [B-9] Pointer-arithmetic scaling: C computes `iVar2 + 0x6a001c1c` (where `iVar2 = iVar5 * 0x44`) for the counter load, but the asm `ldi:8 #0x34,r13` / `ld @(r13,r8),r0` loads from address `0x34 + 0x44*r9` (r13=0x34, r8=0x44*r9), NOT `0x6a001be8 + 0x34 + 0x44*r9`. The decompiler incorrectly adds the base `0x6a001be8` to the offset. This pattern repeats for every field access in the main loop (offsets 0x1e, 0x1f, 0x20, 0x2e, 0x0c, 0x08, 0x0e, etc.), where the C adds `0x6a001be8` but the asm uses the raw offset as the r13 base. The fcc assembly confirms the C compiles to `LDI #0x6A001C1C, R13` / `LD @(R13,R8), R0`, which is a different address than the original's `ldi:8 #0x34,r13` / `ld @(r13,r8),r0`.

## activate_timeout_queue_entry  (`cpu/src/000_rtos_kernel/activate_timeout_queue_entry.c`)
- [none] The decompiled C faithfully represents the original machine code. All offsets, widths, sign extensions, branch conditions, call arguments (via delay-slot register setup), and control flow match. The `mulh` (16-bit multiply) in the original vs `MUL` (32-bit) in fcc is a benign idiom difference since the index is bounded by a 16-bit limit. The `andccr #0xef` / `orccr #0x10` CCR manipulation is a compiler artifact with no observable effect on the data path.

## adjust_task_priority  (`cpu/src/000_rtos_kernel/adjust_task_priority.c`)
- [none] The decompiled C faithfully represents the original machine code. All memory accesses (offsets 0x6a001c00/06/07/08, stride 0x44, DAT_10011d04 base, +0xe stride), sign extensions (extsh on all short loads, extsb on the 0xfa/0xfe byte offsets), comparison directions (bge/bne), branch targets, call arguments (delay-slot r4=r9 for unlink/insert, r4=extsh(lduh@0x20), r5=ldub@0x1f, r6=1 for remove_node_from_queue), and the loop-back at 0x10010108 (bra:d to 0x10010056 with delay-slot lduh) all match. The `mulh`/`mul` sequences in the original correspond to the fcc `EXTSH`+`MUL`+`MOV MDL` idiom for computing `param_1 * 0x44`. No semantic divergence detected.

## allocate_free_task_slot  (`cpu/src/000_rtos_kernel/allocate_free_task_slot.c`)
- [none] Loop bound off-by-one: original `cmp r0,r1; blt` (exit when count < new_index, i.e. continue while new_index ≤ count) scans indices 0..count inclusive (count+1 slots); C `while (iVar1 < DAT_10011d42)` scans indices 0..count-1 (count slots). The C misses the slot at index == count. @ `} while (iVar1 < DAT_10011d42/*ROM*/);` vs `0x1000d844: cmp r0,r1 / 0x1000d846: blt 0x1000d824` -> the `blt` (signed less-than) exits only when count < incremented index, permitting one extra iteration that the C's strict `<` omits.

## allocate_heap_block_1000e82c  (`cpu/src/000_rtos_kernel/allocate_heap_block_1000e82c.c`)
- [none] The decompiled C faithfully represents the original machine code. The `sub r6,r0` at 0x1000e83c computes `param_3 - param_2[3]` (not `param_2[3] - param_3` as in the C's `uVar1`), but the branch condition `ble` (≤ 0) and the subsequent `cmp #0,r0` / `bne` at 0x1000e8b8/0x1000e8ba produce the same three-way partition: extend when `param_3 > param_2[3]`, finalize when `param_3 == param_2[3]`, return 0 when `param_3 < param_2[3]`. All memory accesses, offsets (−12, −4, +4, +8), sign extensions (`extsb` on 0xf4→−12, 0xe4→−28, 0xe8→−24), multiplies, shifts, OR masks (0x80000000, 0x40000000, 0xc0000000), and the delay-slot `ldi:8 #0x1,r4` / `ldi:8 #0x0,r4` return values match the C. No bug-class hit.

## allocate_kernel_memory_block  (`cpu/src/000_rtos_kernel/allocate_kernel_memory_block.c`)
- [none] Missing `& 0x3fffffff` mask before `<< 2` on the free-list size field @ `caller_r10 = *caller_r9 * 4;` vs `0x1000dc1c: ldi:32 #0x3fffffff,r12` / `0x1000dc22: and r12,r10` / `0x1000dc24: lsl #2,r10` -> The original masks the stored size word with `0x3fffffff` (clearing the bit-31 in-use flag) before shifting left by 2 to get the byte size. The C performs a plain unsigned multiply-by-4 with no mask. In practice the flag bit is never set on free-list entries (it is only OR'd in at allocation time at `0x1000dc6c`), so the divergence is latent and does not change behaviour on any reachable path. Not a listed B-NN class.

## ready_list_insert_spin  (`cpu/src/000_rtos_kernel/ready_list_insert_spin.c`)
- none

The original is a single `bra 0x1000f530` (unconditional self-branch, infinite spin, no body, no memory access, no continuation). The decompiled `__halt()` recompiles via fcc911s to `BRA32 L_62, R12` — also an unconditional self-branch with identical semantics. The 16-bit `bra` vs 32-bit `BRA32` difference is a benign codegen/encoding choice between compilers, not a semantic divergence. B-7 (poll-wait collapsed into `__halt()`) does **not** apply: the original contains no poll-wait loop, no hardware register access, and no dropped continuation — it is a pure infinite spin, which `__halt()` faithfully represents.

## settings_refresh_working_copy  (`cpu/src/177_module_state_manager/settings_refresh_working_copy.c`)
- [none] `notify_settings_changed(param_1)` passes the original `param_1` @ C `notify_settings_changed(param_1);` vs asm `addn r4,r2` @ 0x10484822 rewrites r4 to `param_1+0x14` before `call 0x10484836` @ 0x10484830 → the original callee receives `param_1+0x14` in r4 (1st arg), but the recompiled C passes the unmodified `param_1`; the fcc asm confirms R4 is never touched so it emits the unmodified value.

## event_dispatcher  (`cpu/src/262_event_dispatcher/event_dispatcher.c`)
- [B-9] Wrong intra-iteration stride and handler base offset: C uses 4-byte stride between the four per-iteration checks (`iVar3+0x88, +0x8c, +0x90, +0x94` for event IDs; `iVar3+8, +0xc, +0x10, +0x14` for handlers) and increments `iVar3` by `0x10` per outer iteration, but the original uses 16-byte stride (`addn4 #4` → r8 += 16 between each of the four checks) and increments r8 by 64 per outer iteration. The handler base is also wrong: C reads handlers at `param_1 + 8 + iVar3` while the original reads from `param_1 + 0x20 + r8` (frame slot `@(r14,-12)` = param_1+0x20). This causes the C to probe 32 event-ID slots at 4-byte spacing (spanning 0x88–0x104) instead of the original's 32 slots at 16-byte spacing (spanning 0x88–0x2B8), and to read handler pointers from the wrong 16-byte region entirely.

## heap_alloc  (`cpu/src/127_rtos_kernel_services/heap_alloc.c`)
- [B-3] get_system_heap called with no args in C, but disasm delay slot `mov r4,r8` passes r8 as 1st arg @ `pvVar1 = (void *)get_system_heap();` vs `0x10459e1c: mov r4,r8` (delay slot of `call:d @r12` at 0x10459e1a) -> C drops the r4 argument that the machine code passes
- [B-3] mempool_get_block 2nd arg is param_1 in C, but disasm passes r5 @ `uVar2 = mempool_get_block(pvVar1,param_1,3);` vs `0x10459e1e: mov r8,r5` + `0x10459e26: call:d @r12` (r5 is the 2nd arg register) -> C uses param_1 (r4) instead of r5 for the 2nd argument

## return_r4_passthrough_1053706c  (`cpu/src/294_runtime_lib_fatfs_lens_update/return_r4_passthrough_1053706c.c`)
- none

The original body is pure prologue/epilogue (`st sr1` / `enter #0x4` / `leave` / `ld sr1`) followed by `ret`; it never touches `r4`, so the return value is the caller's `r4` passed through unchanged. The decompiled C models this as an uninitialised local returned directly, which fcc911s collapses to a bare `RET` — behaviourally identical (no memory access, no register write, same return). The `sr1` save/restore and `enter`/`leave` are compiler-generated frame/status bookkeeping that the decompiler correctly omits from the C body; their absence in the fcc output is a benign prologue/epilogue difference, not a semantic divergence. No bug-class pattern is present.

## cls_105a6cfc_new  (`cpu/src/133_settings_manager/cls_105a6cfc_new.c`)
- [none] Loop runs one extra iteration (23 vs 22) @ `while (-1 < iVar2)` (iVar2 starts 0x16, decrements to -1 → 23 body executions, 69 bytes zeroed) vs `sub r12,r3` / `bp:d 0x1045fc0a` (r3 starts 0x16, `bp` = branch-if-positive i.e. >0, so r3 reaches 0 and stops → 22 body executions, 66 bytes zeroed) -> the decompiler rendered the `bp` (>0) condition as `> -1` (>=0), adding one extra 3-byte zeroing pass at offsets 70–72 of the 76-byte object.

## alloc_and_init_lens_fw_buffer  (`cpu/src/294_runtime_lib_fatfs_lens_update/alloc_and_init_lens_fw_buffer.c`)
- [none] The decompiled C faithfully represents the original machine code. The control flow (param_1==0 OR param_6!=0 gate, inner param_1==0 allocation, post-alloc SDRAM-base addition, store param_2 at (ptr−SDRAM_BASE), and the do-while init loop) all match the disassembly. The `mulu`/`mov sr5` 64-bit multiply is correctly rendered as a 32-bit `param_2 * param_3` (firmware sizes are small enough that the upper half is zero). The `ble:d` (≤) guard on param_2 correctly maps to the C's `0 < param_2` pre-loop check. The loop body's `call:d @r0` with delay-slot `mov r9,r4` correctly passes the current buffer pointer as the sole argument to `(*param_4)(iVar1)`. No B-NN class is triggered.

## construct_large_camera_object  (`cpu/src/267_test_mode_state/construct_large_camera_object.c`)
- [none] The `alloc_and_init_small_struct_1045c524` call in the C passes 8 arguments (`(uint16_t *)(param_1 + 0x12a), (uint)_DAT_105a5c18, 1, 1, puVar5[3], puVar5[7], puVar5[0xb], puVar5[0xf]`) but the original asm only sets r4 (offset 0x4a8), r5 (lduh @0x105a5c18), r6 (1), and r7 (1 in delay slot) — no r8–r11 or stack args are prepared. The fcc assembly confirms only 4 register args are passed. The extra 4 C arguments (the zeroed stack bytes) are dead: they are zero and the callee never reads them, so the compiled .text is identical. Not a behavioural divergence, but the C overstates the callee's arity.

## grow_dynamic_buffer_1045cb38  (`cpu/src/130_settings_manager/grow_dynamic_buffer_1045cb38.c`)
- [none] The decompiled C faithfully represents the original machine code. All arithmetic idioms (divide-by-4 via `asr #1`/`lsr2 #14`/`addn`/`asr #2`), the `& 0xfffffffc` alignment mask, the vtable dispatch (16-bit sign-extended `adj` at offset 16, 32-bit `fn` at offset 20), the delay-slot argument passing, the early-return-0 path, and the else-branch (`memmove_downward` + `copy_word_array_1045cd46` + `param_1[1] += 4`) all match the disassembly. No semantic divergence detected.

## format_string_to_buffer_10545140  (`cpu/src/294_runtime_lib_fatfs_lens_update/format_string_to_buffer_10545140.c`)
- [none] The decompiled C faithfully represents the original machine code. The function is a `printf`-style formatter that scans a format string for `%` directives, calls `format_value_into_buffer` for each, and copies literal runs via `memcpy_bytes`. All memory accesses, offsets, widths, immediates, control flow, and the global counter at `0x80014a6c` match between the C and the disassembly. The struct `_cfg_c` correctly models the three frame slots the original uses for the format-string pointer (updated in place), the value buffer pointer, and the output pointer. No B-NN class is triggered.

## cls_105a6c24_new  (`cpu/src/133_settings_manager/cls_105a6c24_new.c`)
- [none] Zeroing loop runs 8 iterations in C (32 bytes, offsets 4–35) vs 7 iterations in asm (28 bytes, offsets 4–31) @ `do { ... } while (-1 < iVar2)` with `iVar2 = 7` vs `ldi:8 #0x7,r3` … `sub r12,r3` / `bp:d 0x1045f8d0` (branch if r3 > 0 after decrement, so loop exits when r3 reaches 0) -> the C condition `iVar2 >= 0` permits one extra pass that the original `bp` (positive-only) does not; the extra pass writes four zero bytes at offsets 0x20–0x23 of the 0x24-byte object, which the firmware never touches.

## cls_105a6c6c_new  (`cpu/src/133_settings_manager/cls_105a6c6c_new.c`)
- [none] Loop runs 8 iterations in C/FCC but only 7 in original (extra 4 bytes zeroed at offsets 0x20–0x23) @ `while (-1 < iVar2)` (iVar2 starts 7, decrements → 8 passes) vs `sub r12,r3` / `bp:d 0x1045f9f2` (r3 starts 7, branches while r3 > 0 → 7 passes) -> the decompiler rendered the "branch if positive" (r3 > 0) as "while (iVar2 > -1)" (iVar2 >= 0), adding one extra 4-byte zero store past the original's 28-byte memset region; the original leaves object bytes 0x20–0x23 untouched.

## cls_105a6d8c_new  (`cpu/src/134_settings_struct_manager/cls_105a6d8c_new.c`)
- [none] Second zeroing loop off-by-one: C `while (-1 < iVar3)` (counter ≥ 0) vs original `bp:d` (branch-if-positive, counter > 0) @ `do { *(uint8_t *)(...+iVar1) = 0; iVar3 = iVar3 + -1; ... } while (-1 < iVar3);` vs `0x1045feca: sub r12,r2 / 0x1045fecc: bp:d 0x1045fec2` → the C's `> -1` test permits one extra iteration when the counter reaches 0, zeroing object byte offset 0x1a (param_1+4+22) which the original leaves untouched; original zeros 22 bytes (offsets 4–25), C zeros 23 (offsets 4–26).

## allocate_and_init_object_104962ea  (`cpu/src/199_settings_menu_manager/allocate_and_init_object_104962ea.c`)
- [none] The decompiled C faithfully represents the original machine code. All call targets, argument values (0x34/52 for heap_alloc, param_3/param_4 for alloc_two_word_pair, 2 for free_heap_block, param_2/7 for write_two_fields), the null-check branch, and the return value (allocated pointer) match the disassembly. The `bra:d` / `mov r8,r9` delay-slot sequence in the original is a register-allocation artifact of the original compiler (r9 is a callee-saved temp that happens to hold the same pointer value); the fcc reassembly confirms the same semantics with different register choices. No B-NN class applies.

## cls_105a6abc_new  (`cpu/src/131_settings_manager/cls_105a6abc_new.c`)
- [none] Loop executes 4 iterations (zeroing 16 bytes at offsets 4–19) vs original's 3 iterations (zeroing 12 bytes at offsets 4–15) @ `while (-1 < iVar2)` with `iVar2 = 3` vs `bp:d 0x1045f240` after `sub r12,r3` (branch if r3 > 0, i.e. 3→2→1→0 stops) -> the decompiler translated the `bp` (branch-if-positive, > 0) condition as `> -1`, adding one extra iteration that writes 0 to offsets 16–19 which the original leaves uninitialized.

## cls_105a6d44_new  (`cpu/src/134_settings_struct_manager/cls_105a6d44_new.c`)
- [none] Loop count appears correct after re-examination. The original uses `bp:d` (branch if positive, i.e. sign-bit clear → result ≥ 0) after `sub r12,r3`. Tracing: r3=3→2 (≥0, loop), 2→1 (≥0, loop), 1→0 (≥0, loop), 0→−1 (<0, stop) = 4 iterations × 4 bytes = 16 bytes zeroed at offsets 4–19 of the 0x14-byte object. The C `do{…}while(-1<iVar2)` with iVar2=3,2,1,0 also yields 4 iterations. The fcc asm confirms with `CMP #-1,R5; BGT32:D` (R5≥0). No divergence.
- [none] The first store in each loop iteration uses a different addressing form in the original (`stb r2,@(r13,r0)` with r13=r1) versus the last store (`stb r2,@(r13,r1)` with r13=r0), but both compute the same effective address r0+r1. The C and fcc use a uniform `base+offset` form. Benign register-allocation / addressing-mode difference.
- [none] The original saves `sr1` (status register) on entry and restores it on exit; the fcc saves `RP` instead and uses `ENTER`/`LEAVE` for frame management. This is a compiler-idiom difference (fcc911s vs. original compiler) and does not change observable behaviour of the function's logic.

## cls_105a6dd4_new  (`cpu/src/135_menu_context_manager/cls_105a6dd4_new.c`)
- none

The decompiled C faithfully represents the original machine code. Key verification points:

1. **Delay-slot argument to `heap_alloc`**: The `ldi:8 #0x14,r4` at 0x1046000a is the delay slot of `call:d @r12` at 0x10460008, so `heap_alloc` receives `r4 = 0x14`. The C correctly passes `0x14`.

2. **Delay-slot argument to `cls_105b5264_new`**: The `mov r8,r4` at 0x1046001a is the delay slot of `call:d @r12` at 0x10460018, so the callee receives `r4 = r8` (param_1). The C correctly passes `param_1`.

3. **Loop count**: The original uses `sub r12,r3` followed by `bp:d` (branch if N=0, i.e. result ≥ 0). With r3 starting at 3, the loop executes 4 times (r3: 3→2→1→0→-1, branching at 2, 1, 0). The C `do { … } while (-1 < iVar2)` with iVar2 starting at 3 also executes 4 times. The fcc output confirms equivalence: `CMP #-1, R5 / BGT32:D` is the same condition.

4. **Zeroed region**: Both the original and the C zero 16 bytes at `param_1 + 4` through `param_1 + 19` (the entire object after the 4-byte vtable slot in a 0x14-byte allocation). The C's `(int)&((cls_105b5264 *)(param_1 + 1))->field_0x0` resolves to `param_1 + 4` (sizeof of the struct tag is 4 in the type system), matching `addn4 #4, r0`.

5. **Vtable store**: `st r12,@r8` with `r12 = 0x105a6dd4` matches `((cls_105b5264 *)param_1)->field_0x0 = (uintptr_t)(&DAT_105a6dd4)`.

6. **Return value**: `mov r8,r4` before `ret` matches `return (cls_105b5264 *)param_1`.

## return_r4_passthrough_10537080  (`cpu/src/294_runtime_lib_fatfs_lens_update/return_r4_passthrough_10537080.c`)
- none

The original machine code (`st sr1` / `enter #0x4` / `leave` / `ld @r15+,sr1` / `ret`) is a no-op: it saves and restores `sr1`, sets up and tears down a 4-byte frame, and returns. No general-purpose register (including `r4`) is read or written, and the net stack effect is zero. The decompiled C declares an uninitialized local and returns it; `fcc911s` compiles this to a bare `RET`, which is behaviour-equivalent to the original (both return whatever the caller had in `r4`, with no side effects). The `sr1` save/restore and `enter`/`leave` pair are compiler prologue/epilogue artefacts with zero observable effect.

## lens_fw_update_stub_1053708a  (`cpu/src/294_runtime_lib_fatfs_lens_update/lens_fw_update_stub_1053708a.c`)
- none

The original disassembly (`st sr1,@-r15` / `enter #0x4` / `leave` / `ld @r15+,sr1` / `ret`) is the standard prologue/epilogue the original compiler emits for every function, even empty ones. Since the body performs no operations, `sr1` is unmodified (save/restore is a no-op) and the 4-byte frame is never accessed (enter/leave is a no-op). The fcc recompile (`RET` alone) is behaviour-equivalent. No semantic divergence.

## cls_105b3cdc_new  (`cpu/src/187_settings_manager/cls_105b3cdc_new.c`)
- [B-12s] Four struct fields are byte-width in the C struct but halfword-width in the original: offsets 0x0, 0x2, 0x14, 0x16 are stored with `sth` (2-byte) in the original but compile to `stb` (1-byte) in the fcc output. @ `param_1->field_0x0 = 0; param_1->field_0x2 = 0; param_1->field_0x14 = 0; param_1->field_0x16 = 0;` vs `sth r0,@r4` / `sth r0,@(r13,r4)` at 0x1048c45a, 0x1048c45e, 0x1048c484, 0x1048c488 → the recompiled code writes only 1 byte at each of those offsets, leaving the adjacent byte (offsets 1, 3, 0x15, 0x17) uninitialized where the original zeroed it as part of a 16-bit store.

## copy_rgb_triplets_from_struct  (`cpu/src/107_settings_manager/copy_rgb_triplets_from_struct.c`)
- [none] Off-by-one in copy count: the original copies `param_3 - 1` bytes, not `param_3`. Evidence: for param_3=3, the main-loop guard `cmp #3,r6` / `blt` (r6=0 < 3) skips the triple loop; the tail `add4 #2,r6` yields r6=2, and the `bp:d` (branch-if-positive) after `sub #1,r6` terminates when r6 reaches 0, giving 2 iterations. The decompiled C faithfully reproduces this (`for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1)`), so the C matches the machine code. The off-by-one is in the original firmware, not a decompilation error.
- [none] The `param_4 == 2` branch in the C uses a comma-expression `(iVar3 = 0, 0 < param_3)` inside the `else if` condition, which is a decompiler artifact of the original's sequential `cmp #2,r7` / `bne` / `add4 #0,r6` / `bgt` sequence. The fcc output confirms equivalent control flow (CMP #2,R7 / BNE / CMP #0,R6 / BGT). No semantic divergence.

## clock_rtc_handler  (`cpu/src/262_event_dispatcher/clock_rtc_handler.c`)
- [none] The decompiled C faithfully represents the original machine code. Tracing the delay slots: (1) `call:d @r12` / `ld @(r13,r8),r4` → first arg to `rtc_read_reg_pair_0104` is `*(param_1+0x108)` ✓; (2) `call:d @r12` / `mov r9,r5` → `store_two_bit_fields_to_globals` receives r4=`*(param_1+0x108)`, r5=stale (the C's `uVar1` second-arg is a decompiler artifact but fcc emits the same stale-r5 pattern, so recompilation is equivalent); (3) `call:d @r12` / `ld @(r13,r8),r4` → first arg to `rtc_read_reg_pair_0106` is `*(param_1+0x108)` ✓; (4) `beq:d` / `mov r8,r4` → `event_dispatcher` receives r4=param_1, r5=0x80000015, r6=`uVar1&0xffff` ✓. The `extuh r9` at 0x104faedc is dead (r9 immediately overwritten by `mov r9,r6`); the C's explicit `& 0xffff` is the fcc's way of producing the same `and r4,r6` + `and r0,#0xffff` sequence. Control flow, all memory accesses, immediates, and the return-value path match.

## read_and_ack_irq_status_104faf98  (`cpu/src/262_event_dispatcher/read_and_ack_irq_status_104faf98.c`)
- [none] First argument to `event_dispatcher` is `param_1` in C but `r4 = call3_ret & call1_ret` in asm @ `event_dispatcher(param_1,-0x7fffffe8,uVar1)` vs `and r4,r9` / `mov r8,r4` / `call 0x104fb05c` (r4=call3&call1, r5=0x80000018, r6=call1&0xffff) -> decompiler merged two independent register values (r4=call3&call1 unmasked, r6=call1&0xffff) into one expression `uVar1&uVar2&0xffff`, then used `param_1` (the function's own first parameter) as the first call argument instead of the AND result. The branch condition also diverges: C tests `(call1&call3&0xffff)==0` while asm tests `(call1&0xffff)==0`.
- [none] Third argument to `event_dispatcher` is `uVar1&uVar2&0xffff` in C but `call1_ret & 0xffff` in asm @ `uVar3 = event_dispatcher(param_1,-0x7fffffe8,uVar1)` (uVar1 = uVar1&uVar2&0xffff) vs `extuh r9` / `mov r9,r6` (r6 = call1_ret & 0xffff, call3 not involved) -> the decompiler incorrectly folded the unmasked AND (which belongs in r4/first-arg) into the masked value (which belongs in r6/third-arg).

## cls_105fa8e4_new  (`cpu/src/289_test_mode_ui/cls_105fa8e4_new.c`)
- [B-12s] Halfword fields at offsets 0x10–0x16, 0x28–0x2e, 0x44–0x54 declared as `uint8_t` in `cls_105fa8e4` → fcc emits `STB #0` (byte, value 0x2000 truncated to 0) @ `param_1->field_0x10 = 0x2000;` (and 16 sibling lines) vs original `sth r0,@(r13,r4)` storing 0x2000 as a 16-bit halfword → wrong store width (1 byte vs 2) AND wrong value (0x00 vs 0x2000) at 17 offsets; the struct must use `uint16_t` for these fields.
- [B-12s] Field at offset 0x54 declared as `uint32_t` → fcc emits `ST R0,@(R13,R4)` (32-bit word store of 0x00002000, writing 4 bytes: 00 00 20 00) @ `param_1->field_0x54 = 0x2000;` vs original `sth r0,@(r13,r4)` (16-bit halfword store, writing 2 bytes: 20 00) → word store corrupts adjacent bytes at 0x56–0x57 and places 0x20 at the wrong byte offset; field must be `uint16_t`.

## cls_105b3ee0_new  (`cpu/src/191_sr_calibration_setup/cls_105b3ee0_new.c`)
- [B-12s] Struct field widths do not match original store widths: C declares fields at 0x24/0x26/0x28/0x2a as byte (fcc emits `STB`), at 0x2c as word (fcc emits `ST`), at 0x30 as byte (fcc emits `STB`); original uses `sth` (halfword) for 0x24–0x2c and `st` (word) for 0x30 → different number of bytes written to memory at each offset.
- [none] Extra store `param_1->field_0x32 = 0` (fcc emits `STB R0,@(R13,R8)` at offset 50/0x32) has no corresponding instruction in the original disassembly, which ends its field-initialisation sequence with the word store at 0x30 → spurious memory write to offset 0x32.

## watch_counter_isr  (`cpu/src/262_event_dispatcher/watch_counter_isr.c`)
- [B-3] First argument to `event_dispatcher` is wrong: C passes `param_1` (the function's own first parameter) but the original passes the return value of `clock_set_check` @ `event_dispatcher(param_1,-0x7fffffed,1)` vs `call:d 0x104fb05c` where r4 = clock_set_check's return (set by `ld @(r13,r9),r4` in the delay slot of the preceding `call:d @r12` to clock_set_check, then preserved through `cmp`/`beq:d`/`mov r9,r4`) -> the decompiler misattributed r4's content at the call site, substituting the function parameter for the callee's return value.
- [none] Return value of `event_dispatcher` is captured and returned in C (`uVar2 = event_dispatcher(...); return uVar2;`) but the original discards it: after `call:d 0x104fb05c`, the next instruction is `mov r4,r8` (r8=0, set in the first beq's delay slot), so the function always returns 0 @ `uVar2 = event_dispatcher(param_1,-0x7fffffed,1); ... return uVar2;` vs `0x104fae4c: mov r4,r8` / `0x104fae4e: mov r8,r4` -> the decompiler fabricated a return-value dataflow that does not exist in the machine code.

## cls_105a705c_new  (`cpu/src/137_settings_manager/cls_105a705c_new.c`)
- [none] Loop runs 3 iterations in C but only 2 in original: C `do { … } while (-1 < iVar2)` with iVar2=2 executes 3 times (2→1→0→-1, exits when -1 < -1 is false), zeroing 9 bytes at obj+4..obj+12; original `sub #1,r3` / `bp:d` (branch if r3 > 0) with r3=2 executes 2 times (2→1→0, exits when 0 > 0 is false), zeroing only 6 bytes at obj+4..obj+9 → the C writes 3 extra zero bytes (obj+10, obj+11, obj+12) that the firmware never touches.

## initialize_lens_update_object  (`cpu/src/294_runtime_lib_fatfs_lens_update/initialize_lens_update_object.c`)
- [uncertain] 3rd argument to `fill_byte_array` misidentified as `param_2` @ `fill_byte_array(param_1,0,param_2)` vs `mov r5,r6` (dead, overwritten by delay-slot `ldi:8 #0x0,r5`) leaving r6 = caller's undefined r6 → the decompiler attributed r6's contents to the wrapper's 2nd parameter, but r6 is not a parameter of this 2-arg function; the original passes an undefined value (caller's leftover r6) as the 3rd arg to `fill_byte_array`, while the C passes `param_2`. The recompiled .text is byte-equivalent (fcc emits the same dead `mov r5,r6`), so this is a C-representation inaccuracy rather than a codegen divergence; no listed B-NN class fits precisely.

## copy_564_bytes_to_sram  (`cpu/src/000_rtos_kernel/copy_564_bytes_to_sram.c`)
- [B-9] Destination pointer-arithmetic scales by 4 where original uses raw byte stride @ `(&DAT_80000447)[iVar2]` (word store, offset ×4 per fcc asm `LSL #2,R0` + `ST`) vs `stb r12,@(r13,r0)` (byte store, unscaled index) -> `DAT_80000447` is typed 32-bit so `[iVar2]` strides 4 bytes; original copies 564 consecutive bytes (stride 1) but the C writes 564 words (stride 4), corrupting 4× the intended SDRAM region.

## allocate_and_init_object_104962b8  (`cpu/src/199_settings_menu_manager/allocate_and_init_object_104962b8.c`)
- [B-12] vtable slot index wrong: C uses `[16]` (byte offset 64) but asm adds `#0x80` (byte offset 128 = slot 32) @ `((vtbl_entry*)(...))[16]` vs `ldi:8 #0x80,r0` / `addn r0,r12` → calls a different vtable entry (slot 16 instead of slot 32)
- [none] second vtable-call argument is `r9` (a callee-saved register from the caller's context), not `param_2` (which was in `r5` at entry and immediately clobbered by `mov r5,r9` at 0x104962bc) @ `param_2` in the C call vs `mov r9,r5` at 0x104962dc feeding `r5` into the `call:d @r12` at 0x104962de → the decompiler misattributed `r9` to the function parameter; the actual second argument is the caller's `r9` value, not `param_2`

## memmove_downward  (`cpu/src/130_settings_manager/memmove_downward.c`)
- [B-10] Shift amount mismatch: C uses `>> 0x1e` (30) after `>> 1` (total 31), but asm uses `lsr2 #14` (28) after `asr #1` (total 29) @ `((uint)((int)param_3 - param_2 >> 1) >> 0x1e)` vs `asr #1,r0` / `lsr2 #14,r0` → the C extracts bit 31 (sign bit) while the asm extracts bits 29-30, causing different alignment behavior for values where bits 29-30 differ from bit 31.

## cls_105a6f84_new  (`cpu/src/137_settings_manager/cls_105a6f84_new.c`)
- [uncertain] Loop body executes 2× in C (zeroing 8 bytes at offsets 4–11) but only 1× in original (zeroing 4 bytes at offsets 4–7) @ `do { … } while (-1 < iVar2)` with `iVar2=1` vs `ldi:8 #0x1,r3` … `sub r12,r3` / `bp:d 0x10460712` (branch-if-positive: r3=1→0, zero is not positive, no re-branch) -> the decompiler rendered the `bp` (counter > 0) termination as `> -1` (counter >= 0), adding one spurious iteration that writes 0 to `param_1[8..11]`, corrupting 4 bytes beyond the 0xc-byte object.

## clear_flag_with_notify  (`cpu/src/126_companion_spi_driver/clear_flag_with_notify.c`)
- none

The C faithfully represents the machine code. I verified:
1. **First call**: The `beq:d` delay slot sets `r13=0x20`; the `call:d` delay slot loads `r4=*(r8+0x20)` as the 1st arg. C matches: `call_kernel_with_short_id(*(uint32_t**)(param_1+0x20))`.
2. **Bit-clear**: `ldub @(r13,r8),r12` (mask byte, zero-ext), `ldi:8 #0xff,r1` + `extsb r1` (→0xFFFFFFFF), `eor r1,r12` (→~mask in r12), `ldub @r0,r1` (flag byte), `and r12,r1` (byte & ~mask), `stb r1,@r0`. C matches: `byte = byte & (mask ^ 0xff)`.
3. **Second call**: Non-delayed `beq` (hi-nibble 0xE), then `call:d` with delay slot `ld @(r13,r8),r4` (r13=0x20). C matches: `check_kernel_call_success_10459d88(*(uint32_t**)(param_1+0x20))`.
4. **Widths/offsets**: All `ld`/`ldub`/`stb` widths and offsets (0x10, 0x1c, 0x20) match between C and asm.
5. **Sign extension**: `ldub` zero-extends; C's `byte ^ 0xff` promotes to int and produces the same 32-bit ~mask. No divergence.

## cls_105a5d5c_new  (`cpu/src/130_settings_manager/cls_105a5d5c_new.c`)
- [none] Loop runs one extra iteration, zeroing 6 bytes (offsets 4–9) instead of 3 (offsets 4–6) @ `do { ... } while (-1 < iVar2);` with `iVar2 = 1` vs `sub r12,r3` / `bp:d 0x1045d2ee` (branch if result > 0) → `bp` branches only when the decremented counter is strictly positive; with initial r3=1 the counter becomes 0 and the branch is NOT taken (1 iteration). The C condition `-1 < iVar2` (i.e. `iVar2 >= 0`) is true when iVar2=0, causing a second iteration that writes 0 to bytes at object offsets 7, 8, 9 which the original leaves untouched.

## mempool_release_block  (`cpu/src/127_rtos_kernel_services/mempool_release_block.c`)
- [none] The decompiled C faithfully represents the original machine code. The loop scans 7 entries (offsets 0x00–0x78, step 0x14, bound 0x8c=140) for a non-empty entry whose [start,end] range contains param_2. On match, it reads the 16-bit signed pool ID at entry+0xc (via `ld` + `extsh`), passes it as the first syscall argument (r4) along with param_2 (r5) to the `int #0x40` kernel trap at 0x10010660, and returns 1 if the kernel returned 0 (success) or 0 otherwise. The `beq:d` delay-slot `ldi:8 #1,r4` correctly produces the "return 1 on success" path. All offsets, widths, sign extensions, branch conditions, and the syscall argument mapping (r4=pool_id, r5=block_ptr) match between C and asm.

## kernel_alloc_pool_block  (`cpu/src/000_rtos_kernel/kernel_alloc_pool_block.c`)
- [none] All field offsets in the C (`iVar4 + -0x20`, `iVar4 + -0x10`, `iVar4 + -0x1c`, `iVar4 + -0xc`, `iVar4 + -0x14`) are applied to the computed pool-entry address (`DAT_10011cf8 + param_1 * 0x20`), whereas the original disassembly applies the same negative offsets to the raw table base (`r8` from `ld @r11`) without the `param_1 * 0x20` term (e.g. `lduh @(r13,r0),r1` at 0x10010184 where r0=table_base, r13=-32; `ld @(r13,r0),r12` at 0x10010198 where r0=table_base, r13=-16). The fcc recompile of the C reproduces the C's entry-relative addressing, so the decompiled C does not faithfully represent the machine code's table-base-relative addressing. This is not a clean match to any single B-NN class (closest: B-9 pointer-arithmetic scaling, but the offset is a constant, not an index).

## copy_two_shorts_from_source  (`cpu/src/187_settings_manager/copy_two_shorts_from_source.c`)
- [none] First call argument mismatch @ `read_first_word_1045bd4c(param_2)` vs `mov r4,r8` / `mov r5,r9` before `call:d @r12` (r4=param_1, r5=param_2) -> C passes param_2 in r4 and omits the r5 argument entirely; the original passes param_1 in r4 and param_2 in r5, so the callee receives different operands and the recompiled code will read from the wrong source.
- [none] Second call argument mismatch @ `get_second_word_of_struct(param_2)` vs `call:d @r12` with r4 = return value of the first call (delay slot `mov r9,r4` at 0x1048cc5a confirms r4 still holds the first call's return) -> C feeds param_2 as the second call's sole argument, but the original feeds the first call's return value; the two callees are a two-step pair where the second step consumes the first step's result, so the recompiled code will compute a different second word.

## cls_1059e3e0_new  (`cpu/src/107_settings_manager/cls_1059e3e0_new.c`)
- [none] Return type is `void` but the original leaves the object pointer in r4 (implicit return) @ `void cls_1059e3e0_new(...)` vs `st r12,@r4` / `ret` (r4 = object ptr at epilogue) -> the C interface omits the pointer return; the shown callers do not consume r4 so no behavioural divergence in practice, and no listed B-NN class covers a missing return type.

## create_or_open_kernel_object  (`cpu/src/127_rtos_kernel_services/create_or_open_kernel_object.c`)
- [none] The decompiled C faithfully represents the original machine code. The switch on `param_3` (r6) maps 1→0, 2→1, 3→2, 4→3, else→-2 (0xfe sign-extended). The descriptor is laid out contiguously as two halfwords at FP-4 and FP-2, with the pointer FP-4 passed to both kernel traps. The `param_2==0` path calls `find_free_queue_slot` and stores the result back to `*param_1` only when the return is >0; the `param_2!=0` path calls `validate_task_request` with `(short)param_2` sign-extended. The shared epilogue returns 0 if the kernel call returned 0, else -3 (0xfd sign-extended). All control flow, memory accesses, sign extensions, and immediates match.

## create_message_box_1045a190  (`cpu/src/127_rtos_kernel_services/create_message_box_1045a190.c`)
- [B-12s] halfword store misread as 32-bit shifted store @ `_cfg_1c.iStack_10 = param_3 << 0x10;` vs `sth r6,@(r14,-12)` @ 0x1045a1c8 -> original writes only the low 16 bits of param_3 (a 2-byte `sth`) into the config slot at FP-12; the C emits a 4-byte word store of `param_3 << 16`, which places the bits in the upper half of the word and clobbers the adjacent 2 bytes. For any param_3 with bits above bit 15 set, the stored value and the surrounding memory differ.

## store_two_bit_fields_to_globals  (`cpu/src/127_rtos_kernel_services/store_two_bit_fields_to_globals.c`)
- [none] First store unmasked in asm but masked in C @ `_DAT_401c0104 = (ushort)((uint)param_2 >> 8) & 3;` vs `sth r0,@(r13,r2)` where r0 = `asr #8,r0` (no mask applied to r0; the `and r1,r0` result goes to r1 which is NOT the stored register) -> C fabricates a `& 3` mask on the first store that the machine code does not perform; the original writes the full `(uint16)(V >> 8)` to 0x401c0104.
- [none] Second store uses wrong bit-field @ `_DAT_401c0124 = (ushort)param_2 & 3;` vs `sth r1,@(r13,r2)` (delay slot of `ret:d`) where r1 = `3 & (V >> 8)` -> C extracts the low 2 bits of V (`V & 3`), but the original stores the high 2 bits of V (`(V >> 8) & 3`); the decompiler misattributed the `and r5,r1` data-flow (r5 = V & (3 & (V>>8)) is dead, never stored) and picked the wrong source operand.

## cls_105f9ab0_new  (`cpu/src/285_event_queue_manager/cls_105f9ab0_new.c`)
- [none] The decompiled C faithfully represents the original machine code. All four loops match in iteration count, offsets, store widths, and values. The `jmp @r12` to 0x1052b492 on allocation failure is a tail-jump to the function's own epilogue (ld @r15+,sr1 / ret), so the C's fall-through to `return` is behaviour-equivalent. The repeated byte/word stores in the first loop (3× byte at +0x14+iVar3, 3× word at +8+iVar4) are present in both the asm and the C. No B-NN class is triggered.

## forward_struct_and_second_field  (`cpu/src/130_settings_manager/forward_struct_and_second_field.c`)
- [uncertain] 3rd callee arg misattributed @ `grow_dynamic_buffer_1045cb38(param_1,(uint32_t *)param_1[1],param_2)` vs `mov r5,r6` @ 0x1045cb1e (dead) + delay-slot `ld @(r13,r4),r5` @ 0x1045cb24 → the `mov r5,r6` is overwritten by the delay slot before the call, so the callee's r6 (3rd arg) is the caller's undefined r6, not `param_2` (which was in r5 and is clobbered). The decompiler likely latched onto `mov r5,r6` and assigned `param_2` to the 3rd-arg slot. Does not cleanly match a B-NN class (B-3 is dropped-arg; this is a wrong-arg on a forwarder).

## cls_105b9458_new  (`cpu/src/231_menu_state_manager/cls_105b9458_new.c`)
- [none] `alloc_two_word_pair_1045c3dc(&param_1->field_0x2c,0,0)` @ C line `alloc_two_word_pair_1045c3dc(&param_1->field_0x2c,0,0);` vs asm `0x104c3d6a: addn r8,r4` (r4 = r8+0x1c) then `0x104c3d80: addn r12,r4` (r12 = r8+0x2c) then `0x104c3d84: ldi:32 #0x1045c3dc,r12` (r12 overwritten) then `0x104c3d8a: call:d @r12` with r4 still = r8+0x1c -> decompiler attributed the transient r12 value (r8+0x2c) as the 1st argument, but the actual arg register r4 holds r8+0x1c; the fcc recompile passes R8+0x2c (LDI #44,R4 / ADD R8,R4) which diverges from the original's R8+0x1c

## construct_event_handler_list  (`cpu/src/194_event_queue_manager/construct_event_handler_list.c`)
- [none] vtable dispatch first argument is the raw sign-extended 16-bit `adj`, not the computed `this` pointer @ `(((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].fn)(((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].adj + iVar2, iVar4)` vs `lduh @r12,r4` / `extsh r4` / `addn r8,r4` / `call:d @r12` (r4 = adj, r8 = entry+adj; r4 is the 1st arg register) -> the decompiler computed `this = entry + adj` and passed it as arg 1, but the machine code passes the bare `adj` value in r4; the `this` pointer lands in r8 (callee-saved, not an arg register) and is never forwarded to the callee. Both vtable call sites in the loop are affected.

## chain_two_helper_calls_10495db2  (`cpu/src/199_settings_menu_manager/chain_two_helper_calls_10495db2.c`)
- [none] First call 1st-arg is r8, not param_1 @ `allocate_and_init_object_104962ea(param_1, …)` vs `call:d 0x104962ea` / delay-slot `mov r4,r8` → the delay slot overwrites r4 with r8 *before* the callee runs, so the 1st argument is the callee-saved r8 value, not the function's own r4 (param_1). The decompiler failed to attribute the delay-slot write to the call's argument setup.
- [none] Second call args are (r5, r5), not (param_1, V1) @ `allocate_and_init_object_104962b8(param_1, iVar1)` vs `mov r4,r5` / `call:d 0x104962b8` → after the first call returns, `mov r4,r5` discards the return value V1 and sets r4 = r5; the second call therefore receives (r4=r5, r5=r5). The C incorrectly feeds V1 as the 2nd arg and param_1 as the 1st arg. The first call's return value is dead in the machine code.

## cls_105f9250_new  (`cpu/src/283_display_state_alloc/cls_105f9250_new.c`)
- [none] The decompiled C faithfully represents the original machine code. The inner `heap_alloc(0x20c)` is dead code in both the C (guarded by `param_1 != 0` which is always true inside the outer block) and the asm (the `bne:d` at 0x10527b96 always branches since r8 is non-null at that point). The four-store zeroing loop at 0x10527c0c–0x10527c30 correctly tiles offsets 0x214–0x254 within the 0x254-byte object (r12 = base+0x214 fixed; r0 = running offset 0,4,8,12; four `st r1,@(r13,r12)` per iteration). The two `call:d` sites at 0x10527bd2 and 0x10527bea correctly pass (r4=pcVar3+8, r5=0x10, r6=0x10, r7=func_ptr) with r6 set in the delay slot. All offsets, immediates, and control flow match.

## set_bit7_of_dat_4007000c  (`cpu/src/127_rtos_kernel_services/set_bit7_of_dat_4007000c.c`)
- none

The decompiled C faithfully matches the original machine code. The original hardcodes the target address (0x40070000 + 0xc = 0x4007000c) via `ldi:32`/`ldi:8` and never reads the r4 argument register, so the unused `param_x0` is correct. The `lduh`/`sth` pair confirms a 16-bit (halfword) read-modify-write, which the fcc recompile also emits as `LDUH`/`STH`. The `or r12,r1` (second operand is destination in FR) sets bit 7, matching `_DAT_4007000c | 0x80`. The `sth` in the `ret:d` delay slot executes before the return, matching the C assignment-before-return ordering.

## cls_105a6f3c_new  (`cpu/src/137_settings_manager/cls_105a6f3c_new.c`)
- [B-12s] byte store at offset 4 emitted as word store @ `param_1->field_0x4 = 0` (uint32_t field) vs `stb r0,@(r13,r8)` (1-byte store of 0 at r8+4) -> C writes 4 bytes (0x00000000) at offset 4, original writes only 1 byte (0x00), leaving offsets 5–7 untouched; the fcc asm confirms the divergence with `ST R0,@(R13,R8)` (word) vs original `stb` (byte)

## app_obj_factory  (`cpu/src/199_settings_menu_manager/app_obj_factory.c`)
- [B-10] 32-bit return value of `subtract_four_from_pointer` treated as 64-bit and shifted right by 32, zeroing the pointer before dereference @ `puVar1 = (uint *)*(int *)((ulonglong)uVar13 >> 0x20);` vs `0x10495832: ld @r4,r1` (simple word dereference of the 32-bit return) -> the shift produces 0, so the C dereferences address 0 instead of the actual pointer returned by the callee; fcc confirms with `LSR R0,R12` / `LD @R0,R11`

## reschedule_raise_dicr  (`cpu/src/000_rtos_kernel/reschedule_raise_dicr.c`)
- none

The C `*DAT_10011c5c = 1` (where `DAT_10011c5c` is a pointer-typed global) faithfully represents the assembly: `ldi:32 #0x10011c5c,r1` / `ld @r1,r1` loads the pointer from 0x10011c5c, then `stb r0,@r1` (in the `ret:d` delay slot) stores byte 1 through that pointer. The fcc output (`LDI:32 #_DAT_10011c5c,R12` / `LD @R12,R0` / `STB R1,@R0`) matches the original instruction-for-instruction in semantics. No bug-class hit.

## read_mmio_word_and_mask_bits_10452a12  (`cpu/src/127_rtos_kernel_services/read_mmio_word_and_mask_bits_10452a12.c`)
- none

The decompiled C faithfully represents the machine code. The original performs `lduh` (16-bit zero-extended load) from 0x4005000a, ANDs with 0x8800, then `extuh` in the `ret:d` delay slot. The fcc recompilation uses a 32-bit `LD` instead of `LDUH`, but since the result is immediately ANDed with 0x8800 (clearing bits 16–31) and then `extuh`'d, the final 16-bit return value is identical. The unused `param_x0` correctly reflects that r4 (the first-arg register) is overwritten before any use. No semantic divergence.

## read_mmio_status_bits_10452a44  (`cpu/src/127_rtos_kernel_services/read_mmio_status_bits_10452a44.c`)
- [none] MMIO read width mismatch @ `_DAT_400403f4 & 0xb802` (32-bit `ld` in fcc asm) vs `lduh @r12,r4` (16-bit halfword load in original) -> the C treats the MMIO address as a 32-bit data symbol, generating a word load; the original performs a 16-bit unsigned halfword load. The returned value is identical (AND 0xb802 + extuh zero the upper 16 bits either way), but the bus transaction width differs, which can matter for MMIO side-effects on a 16-bit register.

## read_mmio_status_bits_10452a56  (`cpu/src/127_rtos_kernel_services/read_mmio_status_bits_10452a56.c`)
- [none] 32-bit load where original uses 16-bit halfword load @ `return _DAT_400403f6 & 0xb802;` (fcc emits `LD @R12,R4`) vs `lduh @r12,r4` in original → In big-endian, the 32-bit `LD` places bytes at offset +2/+3 into the low 16 bits that the `AND #0xb802` inspects, whereas the original `lduh` reads bytes at offset +0/+1. The masked result therefore comes from a different 16-bit window of the MMIO register, producing a different value.

## copy_structured_field_array  (`cpu/src/107_settings_manager/copy_structured_field_array.c`)
- [none] 3-wide loop termination uses `while (-1 < iVar3)` (iVar3 >= 0) @ C `do { ... } while (-1 < iVar3);` vs asm `acc7` / `bp:d 0x1042875c` (branch if r7 > 0, strictly positive) -> when the post-decrement count hits exactly 0, the C executes one extra 3-wide iteration (3 extra halfword copies) that the original skips; e.g. param_4=6: C copies 6 elements, original copies 3. Same off-by-one in the 1-wide tail loop (`while (-1 < iVar3)` vs `bp:d 0x10428796`). Not a listed B-NN class; a decompiler misread of `bp` (positive) as `bpl`/`bge` (positive-or-zero).

## write_masked_value_to_mmio_10452a24  (`cpu/src/127_rtos_kernel_services/write_masked_value_to_mmio_10452a24.c`)
- [none] 32-bit word store where original performs a 16-bit halfword store @ `_DAT_4005000a = param_2 & 0x8800` (fcc emits `ST R5,@R12`) vs `sth r0,@r1` (original) → the C writes 4 bytes to 0x4005000a, corrupting the two bytes at 0x4005000c–0x4005000d that the original halfword store leaves untouched; the value itself (param_2 & 0x8800, at most 16 bits) is the same, but the store width diverges.

## write_masked_value_to_400403f6  (`cpu/src/127_rtos_kernel_services/write_masked_value_to_400403f6.c`)
- none

The decompiled C faithfully matches the original machine code:
- `ldi:20 #0xb802,r0` + `and r5,r0` → `param_2 & 0xb802` ✓
- `ldi:32 #0x400403f6,r1` + `sth r0,@r1` (delay slot of `ret:d`) → `_DAT_400403f6 = …` (halfword store to the same address) ✓
- `r4` (param_1) is never read in the original; the C declares it but never uses it ✓
- No return value in the original; C is `void` ✓

The fcc911s output (`ST R5, @R12` — word store of the unmasked arg) diverges from both the C and the original, but that is a fcc codegen artifact, not a decompilation error.

## send_or_create_mailbox_message  (`cpu/src/127_rtos_kernel_services/send_or_create_mailbox_message.c`)
- [none] The decompiled C faithfully represents the original machine code. The packed 32-bit value (CONCAT22 of param_3 and param_4) is stored in a local frame slot, `*param_1 = param_2` is written unconditionally (in the delay slot of the `bne:d`), the two `int #0x40` syscalls receive the correct arguments (FP−8 for the packed value pointer, sign-extended param_2 for the second call), and the −3 error return is correctly gated on a non-zero syscall result. No B-NN class hit.

## store_word_to_pointer_1000d41a  (`cpu/src/000_rtos_kernel/store_word_to_pointer_1000d41a.c`)
- [none] Original stores `r5` to `[r0]` (via `r14`), but decompiled C `*param_1 = param_2` compiles to `st r5,@r4` @ `st r5,@r14` (where `r14=r0`) vs fcc `ST R5,@R4` -> the original's store target is the address in r0, not the first-argument register r4; the C assumes the standard r4 ABI and therefore writes to a different memory location than the real firmware does.

## cpucom_txn_table_setup  (`cpu/src/127_rtos_kernel_services/cpucom_txn_table_setup.c`)
- [none] The C's `iStack_7c` (FP−124) and `aiStack_78[0]` (FP−120) are both dead stores — the asm's live values (7 at FP−120, −0x70 at FP−116) are accessed via `@(r14,−120)` and `@(r14,−116)` respectively, which the C correctly models through `aiStack_78[0]` and `aiStack_78[1]`. The fcc-compiled output confirms the dead stores are eliminated and the live accesses match the original. No semantic divergence.
- [none] The C's loop-exit condition `bVar1 && iVar6 != 0` (where `bVar1 = 0 < iStack_7c` is evaluated *before* the decrement) faithfully reproduces the asm's `bgt` on the pre-decrement counter value. The `&& iVar6 != 0` clause is dead (the counter starts at 7 and decrements by 1 each iteration, so it is always > 0 when `bgt` is tested), but it is present in both the C and the fcc output and does not alter behaviour.

## cls_105a2b50_new  (`cpu/src/127_rtos_kernel_services/cls_105a2b50_new.c`)
- [none] The decompiled C passes `&param_1->field_0x14` (a pointer) to `cls_105a2b30_new` and `send_mailbox_message`, but the original asm passes the integer constant `0x14` (20) as the first argument (r4) to both calls. In the original, `ldi:8 #0x14,r9` / `addn r8,r9` advances r8 for the return value, and the delay-slot `mov r9,r4` sets r4=0x14 for the callee. The fcc asm confirms this: `LDI #20,R4` precedes each `CALL32:D`. The C's pointer argument would produce a different r4 value at call time. This is not a clean match to any listed B-NN class (it is a wrong-constant-vs-pointer argument mismatch in a constructor helper), so it is reported as `[none]`.

## forward_three_args_to_helper_10459d64  (`cpu/src/127_rtos_kernel_services/forward_three_args_to_helper_10459d64.c`)
- [B-3] C forwards `param_2` (r5) and `param_3` (r6) as callee args 3 and 4, but the asm never reads r5 or r6 after entry — it loads r7 into r6 and leaves r7 untouched, so the callee actually receives `(r4, 0, r7, r7)`. @ `create_or_open_kernel_object(param_1,0,param_2,param_3)` vs `mov r6,r7 / ldi:8 #0x0,r5 / mov r12,r6 / call 0x10459da2` → the decompiler fabricated an r5→r6, r6→r7 forwarding that does not exist; the machine code reads the undeclared 4th arg slot (r7) and passes it twice, while param_2 and param_3 are dead on arrival.

## build_mode_config_block  (`cpu/src/193_sr_state_machine/build_mode_config_block.c`)
- [B-3] `copy_eight_bytes_1045bf68` second argument is `auStack_1c` in C but `0` in the original machine code @ `copy_eight_bytes_1045bf68(apppuStack_40[0],auStack_1c)` vs `ldi:8 #0x0,r5` at 0x1048fb0e (r5=0 persists through the `call:d` at 0x1048fb22; delay slot `mov r11,r5` confirms r5=0) -> the C fabricates a non-NULL pointer where the firmware passes zero; recompiling the C would cause `copy_eight_bytes` to dereference `auStack_1c` instead of the null/zero the original intended.

## write_two_words_to_struct_10513bca  (`cpu/src/272_telemetry_cluster_d/write_two_words_to_struct_10513bca.c`)
- [none] The original disasm computes `r5 = r5<<1` (param_2×2) then immediately overwrites it with `mov r5,r13`; the two stores are `sth r6,@(r13,r4)` → *(r13+param_1)=param_3 and (in the `ret:d` delay slot) `sth r7,@(r13,r0)` → *(r13+0xa0)=param_4. The decompiled C instead uses param_2×2 as a byte offset added to param_1 for both stores: `*(param_1 + param_2*2) = param_3` and `*(param_1 + param_2*2 + 0xa0) = param_4`. This is a decompiler misread of the `mov r5,r13` / `@(r13,r4)` / `@(r13,r0)` addressing (the lsl result is dead in the original; r13 is the base, not param_1). The fcc recompile of the C confirms the divergence: it emits `ADD R4,R5` + `STH R6,@R5` + `STH R7,@(R13,R5)` — different effective addresses from the original's `@(r13,r4)` and `@(r13,r0)`. No single B-NN class fits cleanly (not a stride/width mismatch, not a dropped arg, not a sign-extension issue); it is a decompiler misattribution of the r13-based addressing to a param_1+param_2*2 expression.

## clamp_difference_to_two_words  (`cpu/src/129_settings_pair_manager/clamp_difference_to_two_words.c`)
- [none] The C faithfully represents the machine code. The two clamped subtractions (`*param_2 - *param_3` and `param_2[1] - param_3[1]`, each zeroed when the minuend ≤ subtrahend) match the `cmp`/`bls`/`subn` pairs. The first copy loop (2 words from the local result buffer to a scratch stack slot at `&stack0xffffffe0`) matches the `ld @(r13,r2)` / `st r12,@(r13,r1)` loop with r13 counting 8→4→0. The `free_heap_if_flagged` call with args `(aiStack_18+1, 2)` matches `mov r9,r4` + `call:d` + delay-slot `ldi:8 #0x2,r5`. The second copy loop (2 words from the scratch slot to `param_1`) matches the second `ld`/`st`/`bne` loop. Frame size (20 bytes via `enter #0x14`), callee-saved set (r8–r11 via `stm1 #0xe0`), and the `sr1` save/restore all agree. No sign-extension mismatch (all loads are 32-bit `ld`, no `extsb`/`extsh` present or needed). No dropped arguments, no stride errors, no control-flow divergence.

## cls_1059e380_new  (`cpu/src/105_memory_block_manager/cls_1059e380_new.c`)
- [none] Return type declared `void` but original returns r4 (the object pointer) @ `void cls_1059e380_new(...)` vs `ret` at 0x10427928 with r4 holding either the input pointer or the heap_alloc result -> The C omits the return value annotation; in this specific function the generated .text is identical because r4 is already the correct value at `ret` in both the original and the fcc output, so no codegen divergence, but the C does not faithfully represent the ABI return.

## wait_flg_obj  (`cpu/src/127_rtos_kernel_services/wait_flg_obj.c`)
- none

The original disassembly is a 6-instruction trampoline: save `sr1`, `mov r5,r6` (dead — immediately clobbered by the delay-slot `ldi:8 #0x0,r5`), `call:d` into the kernel flag-wait service with `(r4=param_1, r5=0, r6=caller's r6)`, restore `sr1`, `ret`. The decompiled C calls `alloc_or_acquire_heap_block(param_1, 0, param_2)`, which maps to the same register triple at every call site (all callers pass `0` as `param_2`, and the callee's `r6` slot is never read by the kernel service in a way that distinguishes "undefined" from `0`). The fcc recompile reproduces the identical `MOV R5,R6 / CALL32:D / LDI #0,R5` sequence. No semantic divergence.

## ready_list_insert  (`cpu/src/000_rtos_kernel/ready_list_insert.c`)
- [none] `mulh r0,r4` (original) vs `MUL R0,R4` (fcc) @ `iVar1 = param_1 * 0x44` vs `mulh r0,r4` -> FR `mulh` is a 16×16→32 full-product multiply (both operands are small: 0x44 and a task index < 256), so the result is identical to a 32-bit `MUL` for the valid input range; not a divergence.
- [none] Original uses `r1` as the task-block byte offset (e.g. `lduh @(r13,r1),r5` with r13=0x18 → `*(u16*)(0x6a001be8+0x18+r1)`); fcc uses `R6` (holding `param_1*0x44`) as the offset. @ `uVar3 = (int)*(short *)(iVar1 + 0x6a001c00) - 1` vs `lduh @(r13,r1),r5` -> The decompiler correctly resolved the implicit base (r1 = 0x6a001be8 + param_1*0x44, set by `addn r6,r1` after `ldi:32 #0x6a001be8,r6`) into the absolute address 0x6a001c00 + iVar1; fcc's register allocation differs but the effective address is the same. Not a semantic divergence.

## ready_list_unlink  (`cpu/src/000_rtos_kernel/ready_list_unlink.c`)
- [none] The decompiled C faithfully represents the original machine code. All memory accesses (TCB fields at 0x6a001be8/0x6a001bea/0x6a001c00, list head/tail at 0x6a0036d0/0x6a0036d2, ready bitmap at 0x6a003750, secondary bitmap at 0x6a003754), sign extensions (extsh on all three TCB shorts, extsb on the -1 constant), the 0x44 stride, the `(priority-1)*4` offset into the list array, the `>>5` / `&0x1f` bitmap indexing, and the conditional second-bitmap clear are all consistent between C and asm. The `mulh` in the original vs `MUL`+`MOV MDL` in fcc is a benign idiom difference (param_1 is 16-bit, product fits in 32 bits). No semantic divergence detected.

## format_value_into_buffer  (`cpu/src/294_runtime_lib_fatfs_lens_update/format_value_into_buffer.c`)
- [none] The 'n' conversion reads the character count from `*param_4` (a caller-supplied pointer to a counter) in the original (`ld @r7,r1` / `ld @r1,r1` at 0x10545d3c–0x10545d40), but the C reads it from the global `_DAT_80014a6c`. This is a decompiler artifact: the original compiler likely inlined a wrapper that passed `&counter` as param_4, and the decompiler resolved the pointer to the global. The observable behaviour (storing the formatted character count into the user's `int*` vararg) is identical, so this is not a semantic divergence.
- [none] The `local_250[510]` buffer is placed at FP−0x250 in the C, exceeding the original 0x230-byte frame; the fcc compiler allocates ENTER #604 to accommodate it. The original buffer lives at FP−0x22C within its 560-byte frame. The buffer size (510) and all relative accesses are consistent, so this is a frame-layout difference, not a behavioural one.

## cpucom_request_clone  (`cpu/src/142_cpucom_spi_driver/cpucom_request_clone.c`)
- [none] Signed comparison rendered as zero-check @ `if (param_2 != 0)` vs `cmp #0,r9` / `bls 0x1046554c` -> The original uses `bls` (branch if signed less-or-equal), meaning the buffer is allocated only when `param_2 > 0`. The decompiled C uses `param_2 != 0`, which would also attempt allocation for negative `param_2`. In practice `param_2` is a byte count and never negative, so this is a latent divergence that does not manifest at runtime, but the C does not faithfully represent the signed comparison.

## subtract_timeout_from_queue  (`cpu/src/000_rtos_kernel/subtract_timeout_from_queue.c`)
- [none] The decompiled C faithfully represents the original machine code. The loop logic (timeout >= param_1 → unlink head and continue with remainder; timeout < param_1 → split head and jump to done) matches the `bge:d` / fall-through structure. The done section's four conditional stores (head-next, prev-next, new-entry-prev, new-entry-next) and the final timeout store all correspond to the asm at 0x1000fd6a–0x1000fdd2. Sign extensions (`extsh` after `lduh`) are correctly modeled by the `(int)*(short*)` casts. The `param_1` mutation in the "unlink" path and the `iVar5` tracking of the removed entry index match the register flow (r4, r2). No B-NN class hit.

## remove_task_from_timeout_queue_1001166c  (`cpu/src/000_rtos_kernel/remove_task_from_timeout_queue_1001166c.c`)
- [B-12s] 32-bit store where original uses 16-bit store for queue head/tail sentinels @ `_DAT_6a0036c4 = -1; _DAT_6a0036c6 = -1;` (C) vs `sth r2,@r0` / `sth r2,@(r13,r0)` with r13=2 (asm 0x100116a0, 0x100116a6) -> the original writes only the low 16 bits (0xffff) to the head and tail words, leaving the upper 16 bits untouched; the C's 32-bit assignment clobbers the upper half of each 32-bit word with 0xffff, corrupting adjacent data that shares the same 32-bit aligned word.

## copy_and_dispatch_two_params  (`cpu/src/129_settings_pair_manager/copy_and_dispatch_two_params.c`)
- [B-3] 3rd arg to `clamp_difference_to_two_words` is a pointer `&uStack_18` in C but the constant `1` in asm @ `clamp_difference_to_two_words(local_10,param_2,&uStack_18)` vs `r6=1` (set in delay slot of first `call:d` at 0x1045bf9c, never overwritten before second `call:d` at 0x1045bfb0) -> C fabricates a pointer 3rd-arg where the original passes the integer 1; the callee will dereference a stack address instead of using the flag value 1
- [none] 1st arg to `alloc_two_word_pair_1045c3dc` is `&uStack_18` (FP−24) in C but FP−16 in asm @ `alloc_two_word_pair_1045c3dc(&uStack_18,1,1)` vs `addn2 #-16,r9` / `mov r9,r4` at 0x1045bf8e–90 -> the alloc target is a different frame slot; the copy loop then reads from FP−8/FP−4/FP (original) vs FP−16/FP−20/FP−24 (C), so the data handed to `copy_four_words` comes from a different region of the frame

## cls_105a8a1c_new  (`cpu/src/148_bayer_decode_driver/cls_105a8a1c_new.c`)
- [none] Loop body store count and offsets match the original: the C's 20 stores per iteration (5 groups × 4 stores) at base offsets {4,19,34,49} + iVar1, with iVar1 stepping by 5 over 2 iterations, produce the same 40 byte-writes as the original's 5 unrolled groups × 2 iterations at r1 offsets {0,4,8,12,16,20,24,28,32,36}. The fcc assembly confirms identical effective addresses. The `param_1 + N` pointer arithmetic in the C is a decompiler artifact (sizeof(cls_105a8a1c) is evidently 1 in the type system) but compiles to the correct byte offsets. No semantic divergence detected.

## update_camera_state_flags  (`cpu/src/277_ae_settings_manager/update_camera_state_flags.c`)
- [none] The decompiled C faithfully represents the original machine code. The guard condition `param_2 < 0x1a`, the array read/compare/write at `param_1 + param_2*4`, the 0x19-specific byte/short extraction and subsystem call sequence, the 0x00 flag-based `write_object_field_byte` dispatch (0x15, 8), and the 0x18 flag-based dispatch (0x17, 0xd, 0xc, 0xb) all match the disassembly. The `blt`/`bne`/`beq` branch directions, the `extub`/`extuh` sign-extension on the 0x6a byte load, the `and` masks (0xffff, 0x7fff0000, 0x80000000, 2, 4, 3, 1, 8, 0x10), the `lsr2 #0` (no-op) before the 0xc8 compare, and the `addn2 #-10` (no-op) before the 0x68 halfword store are all correctly represented. No B-NN class bug is present.

## forward_three_args_to_helper_10459edc  (`cpu/src/127_rtos_kernel_services/forward_three_args_to_helper_10459edc.c`)
- [B-3] 3rd/4th callee args are `r7` (undeclared register), not `param_2`/`param_3` @ `settings_init(param_1,0,param_2,param_3)` vs `mov r6,r7` / `ldi:8 #0x0,r5` / `call 0x10459f5a` (callee sees r4=param_1, r5=0, r6=r7, r7=r7) -> the decompiler dropped the implicit r7 input and mis-mapped the declared param_2 (r5) and param_3 (r6) onto the callee's 3rd/4th slots; the original never reads r5 or r6 after entry (r5 is overwritten with 0, r6 is overwritten with r7), so param_2 and param_3 are dead in the real code.

## update_or_add_entry_in_table  (`cpu/src/285_event_queue_manager/update_or_add_entry_in_table.c`)
- [none] The original disassembly at 0x1052b0e4 shows `st r5,@r12` (r12 = 12*count, a raw byte offset) for the key store in the append path, while the fcc assembly computes the full address as `0x170 + param_1 + 12*count` via `st r5, @(r13, r0)`. Similarly at 0x1052b0f0 the original shows `st r6,@(r13,r12)` (r13=4, r12=12*count → address 4+12*count) vs fcc's `st r6, @(r13, r0)` (r13=0x174, r0=param_1+12*count → address 0x174+param_1+12*count). The decompiled C uses the full-

## process_two_entry_state_array  (`cpu/src/285_event_queue_manager/process_two_entry_state_array.c`)
- [none] Loop executes 3 iterations in C vs 2 in original @ `while (-1 < iVar3)` vs `bp:d 0x1052b1ce` (branch-if-positive after `sub #1,r11`) -> `bp` branches when result > 0, so the original loops while counter > 0 (2 iterations from initial 2); the C condition `-1 < iVar3` is equivalent to `iVar3 >= 0`, which allows a third iteration when iVar3 reaches 0 before decrementing to -1. The correct condition to match `bp` is `0 < iVar3`.

## cls_105a5c2c_new  (`cpu/src/130_settings_manager/cls_105a5c2c_new.c`)
- [B-12s] field at offset 0x10 is a byte store in original but a word store in C @ `param_1->field_0x10 = 0;` (32-bit write) vs `stb r0,@(r13,r9)` with r13=0x10 (1-byte write) -> C clobbles bytes 0x11–0x13 (padding between the 1-byte field and the vtable pointer at 0x14) which the original leaves untouched; the struct field should be `uint8_t`, not `uint32_t`

## cls_1059e458_new  (`cpu/src/107_settings_manager/cls_1059e458_new.c`)
- [none] Return type is `void` but the original leaves the object pointer in r4 at `ret` @ `void cls_1059e458_new(cls_1059e458 *param_1)` vs `st r12,@r4` … `ld @r15+,sr1` / `ret` (r4 holds the allocated/existing pointer on every path) -> callers declare `cls_1059e458 * cls_1059e458_new(cls_1059e458 *param_1)` and use the return value; the C silently drops it.

## screen_activate_ondemand  (`cpu/src/173_screen_activation/screen_activate_ondemand.c`)
- [none] The decompiled C faithfully represents the original machine code. All vtable call offsets (0x18/24, 0x38/56, 0x60/96), argument registers (including delay-slot values r5=0, r6=1, r6=2), sign extensions (extsh on 16-bit adj fields, extsb on -36 and -5 constants), frame slot accesses, control flow (both beq/beq:d branches to the same target 0x1048065e), and the final return-value computation (`*(int*)(param_1+4) == 0`) match the disassembly. The `addn r0,r12` sequences that compute entry addresses (r12+24, r12+56, r12+96) are dead code in the original (the actual loads use `@r12` and `@(r13,r12)` from the vtable base), and the C correctly omits them. No B-NN class bug is present.

## initialize_mode_dependent_context  (`cpu/src/193_sr_state_machine/initialize_mode_dependent_context.c`)
- [none] First argument to `write_two_words_to_memory` is the (undefined) return value of the void `copy_eight_bytes_1045bf68` in the original (`r4` not reloaded between the two calls at 0x1048fa40→0x1048fa74), while the C/fcc explicitly passes the return value of `alloc_and_zero_two_words_1045c3bc` (via `r9` in fcc asm). Since the callee is `void`, the original's `r4` is architecturally undefined; the C's choice is a reasonable interpretation and not a divergent operation.
- [none] The two 16-byte copy loops (stack→stack at 0x1048fa8e–0x1048fa96, stack→`param_1` at 0x1048fabc–0x1048fac8) are correctly rendered as `do/while` with `iVar5` counting down from `0x10` by 4, matching the `add2 #-4` / `bne` pattern. Offsets, widths, and iteration counts agree.
- [none] Mode-byte dispatch (`ldub @(r13,r9)` with `r13=0x34`, `r9=param_2`) and the three-way size selection (0x280/0x1e0, 0x500/0x2f8, 0/0) match the C's `if/else if/else` exactly.
- [none] All callee call sites, argument registers (as of each delay slot), and return-value captures are consistent between the original and the C. No dropped or extra arguments detected.

## eventflag_wai_flg  (`cpu/src/127_rtos_kernel_services/eventflag_wai_flg.c`)
- [none] The decompiled C faithfully represents the original machine code. The clamping logic (param_4 > 0: keep; param_4 == 0: 0; param_4 < 0: -1), the `extsh` sign-extension of `*param_1`, the two-way branch on `param_3 == NULL` selecting between the caller's result pointer and a zeroed local, the 5-argument kernel trap (`int #0x40` at 0x100112a4 with r4=sign-extended flag ID, r5=pattern, r6=1, r7=result pointer, stack=clamped mode), and the `iVar1 == 0` return all match the disassembly. The fcc recompile differs in register allocation and peephole choices (e.g., `EXTUB` before `LEAVE`, `ST R8,@-SP` prologue) but is semantically equivalent.
