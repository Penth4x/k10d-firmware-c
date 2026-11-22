# B-10 static sweep (shift >= 32 / CONCAT44) - generated without a build

Static stand-in for the `W1063B` build-log sweep (no SOFTUNE build was available). Sites = any
`>>`/`<<` by 32..63 or `CONCAT44` in `cpu/src`. Buckets are heuristic; see the notes per bucket.

## 1 high-half extraction (pointer/compare/index) - read the producer (23 sites)

Stock-check each: if the value is a plain r4 call return, `>> 0x20` yields r4 under either fcc `long long` width (FR returns 64-bit as r4=hi:r5=lo) -> harmless; if it is a `CONCAT44(x,y)` of two real values -> hi|lo -> B-10 bug.

```
014_io_settings_control/compute_exposure_compensation.c:134: uStack_9c = (uint32_t)(uVar19 >> 0x20);
014_io_settings_control/compute_exposure_compensation.c:159: (int)((ulonglong)uVar18 >> 0x20),(int)uVar18);
014_io_settings_control/compute_exposure_compensation.c:190: uVar9 = (uint)((ulonglong)uVar17 >> 0x20);
014_io_settings_control/compute_exposure_compensation.c:193: uStack_7c = (uint)((ulonglong)lVar16 >> 0x20);
014_io_settings_control/compute_exposure_compensation.c:197: ((uint32_t)((uint64_t)(uRam80004350) >> 32)));
014_io_settings_control/compute_exposure_compensation.c:227: uVar9 = (uint)((ulonglong)uVar18 >> 0x20);
014_io_settings_control/compute_exposure_compensation.c:230: uStack_68 = (uint)((ulonglong)lVar16 >> 0x20);
014_io_settings_control/compute_exposure_compensation.c:233: uStack_70 = (uint)(uVar19 >> 0x20);
035_menu_item_manager/register_menu_item_with_status_1038a260.c:53: uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
035_menu_item_manager/register_menu_item_with_status_1038a260.c:66: uVar12 = CONCAT44(uVar8,uVar9);
035_menu_item_manager/register_menu_item_with_status_1038a260.c:71: uVar12 = CONCAT44(uVar8,uVar9);
035_menu_item_manager/register_menu_item_with_status_1038a260.c:77: uVar12 = CONCAT44(uVar7,uVar4);
035_menu_item_manager/register_menu_item_with_status_1038a260.c:79: format_string_to_buffer_10545140((uint8_t *)0x800197b7/*SDRAM*/,pcVar6,(void *)((ulonglong)uVar12 >> 0x20),(void *)uVar12);
035_menu_item_manager/register_menu_item_with_status_1038a88e.c:48: uVar10 = CONCAT44(param_4,uVar4);
035_menu_item_manager/register_menu_item_with_status_1038a88e.c:52: uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
035_menu_item_manager/register_menu_item_with_status_1038a88e.c:65: uVar10 = CONCAT44(uVar6,uVar7);
035_menu_item_manager/register_menu_item_with_status_1038a88e.c:70: uVar10 = CONCAT44(uVar6,uVar7);
035_menu_item_manager/register_menu_item_with_status_1038a88e.c:73: format_string_to_buffer_10545140((uint8_t *)0x800197c8/*SDRAM*/,pcVar5,(void *)((ulonglong)uVar10 >> 0x20),(void *)uVar10);
049_settings_menu_init/initialize_object_with_subsystem_hooks.c:42: param_1->field_0x4f = (char)((uint5)uVar5 >> 0x20);
050_debug_settings_menu/format_and_register_menu_item_103b22a2.c:50: uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
199_settings_menu_manager/app_obj_factory.c:68: puVar1 = (uint *)*(int *)((ulonglong)uVar13 >> 0x20);
237_menu_settings_manager/process_sensor_readout_event_104ccbe0.c:221: (int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
263_keypad_gpio_driver/compute_image_processor_gain.c:81: uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
```

## 2 soft-float hi/lo argument pairs (44 sites)

`f((uint)(x>>0x20),(uint)x,...)`: if fcc `long long` is 32-bit (implied by W1063B firing and by the B-10 write-up), BOTH halves become r4, so the low word of the double is lost -> numeric drift / flipped compares, not a crash. Needs a way to capture the callee's r5 (asm shim or harvesting); design decision, not edited here.

```
014_io_settings_control/compute_exposure_compensation.c:128: lVar16 = multiply_two_floats((uint)((ulonglong)uVar17 >> 0x20),(uint)uVar17,0x3fe00000,0);
014_io_settings_control/compute_exposure_compensation.c:129: uVar19 = compare_64_bit_integers((uint)((ulonglong)uVar18 >> 0x20),(void *)uVar18,
014_io_settings_control/compute_exposure_compensation.c:130: (uint)((ulonglong)lVar16 >> 0x20),(uint)lVar16);
014_io_settings_control/compute_exposure_compensation.c:136: uRam80004350 = multiply_fixed_point_values_105445a2(uStack_9c,uStack_98,(int)((ulonglong)uVar18 >> 0x20),
014_io_settings_control/compute_exposure_compensation.c:152: lVar16 = multiply_two_floats((uint)((ulonglong)uVar17 >> 0x20),(uint)uVar17,0x3fe00000,0);
014_io_settings_control/compute_exposure_compensation.c:153: uVar19 = compare_64_bit_integers((uint)((ulonglong)uVar18 >> 0x20),(void *)uVar18,
014_io_settings_control/compute_exposure_compensation.c:154: (uint)((ulonglong)lVar16 >> 0x20),(uint)lVar16);
014_io_settings_control/compute_exposure_compensation.c:158: uRam80004358 = multiply_fixed_point_values_105445a2((int)(uVar19 >> 0x20),(int)uVar19,
014_io_settings_control/compute_exposure_compensation.c:166: lVar16 = multiply_two_floats(((uint32_t)((uint64_t)(uRam80004350) >> 0)),((uint32_t)((uint64_t)(uRam80004350) >> 32)),0x408f4000,0);
014_io_settings_control/compute_exposure_compensation.c:167: iVar6 = normalize_fixed_point_value_105448ac((uint)((ulonglong)lVar16 >> 0x20),(uint)lVar16);
014_io_settings_control/compute_exposure_compensation.c:192: uVar19 = compare_64_bit_integers((uint)((ulonglong)uVar18 >> 0x20),(void *)uVar18,uVar9,(uint)uVar17);
014_io_settings_control/compute_exposure_compensation.c:196: lVar16 = multiply_two_floats((uint)(uVar19 >> 0x20),(uint)uVar19,((uint32_t)((uint64_t)(uRam80004350) >> 0)),
014_io_settings_control/compute_exposure_compensation.c:198: uVar19 = add_two_64_bit_integers((uint)((ulonglong)lVar16 >> 0x20),(void *)lVar16,(uint)(uVar20 >> 0x20),
014_io_settings_control/compute_exposure_compensation.c:200: uStack_a4 = normalize_fixed_point_value_105448ac((uint)(uVar19 >> 0x20),(uint)uVar19);
014_io_settings_control/compute_exposure_compensation.c:205: lVar16 = multiply_two_floats(((uint32_t)((uint64_t)(uRam80004358) >> 0)),((uint32_t)((uint64_t)(uRam80004358) >> 32)),0x408f4000,0);
014_io_settings_control/compute_exposure_compensation.c:207: iVar6 = normalize_fixed_point_value_105448ac((uint)((ulonglong)lVar16 >> 0x20),(uint)lVar16);
014_io_settings_control/compute_exposure_compensation.c:229: uVar19 = compare_64_bit_integers((uint)(((uint32_t)((uint64_t)(uStack_60) >> 0))),(void *)(((uint32_t)((uint64_t)(uStack_60) >> 32))),(uint)
014_io_settings_control/compute_exposure_compensation.c:235: lVar16 = multiply_two_floats(uStack_70,uStack_6c,((uint32_t)((uint64_t)(uRam80004358) >> 0)),((uint32_t)((uint64_t)(uRam80004358) >> 32)));
014_io_settings_control/compute_exposure_compensation.c:236: uVar19 = add_two_64_bit_integers((uint)((ulonglong)lVar16 >> 0x20),(void *)lVar16,(uint)(uVar20 >> 0x20),
014_io_settings_control/compute_exposure_compensation.c:238: uVar9 = normalize_fixed_point_value_105448ac((uint)(uVar19 >> 0x20),(uint)uVar19);
035_menu_item_manager/format_and_register_menu_item_103898da.c:46: compute_lens_fw_block_offset_10544502((uint)((ulonglong)uVar6 >> 0x20),(void *)uVar6,0x3fb99999);
092_menu_setting_io/compute_aspect_ratio_components.c:55: uVar3 = normalize_fixed_point_value_105448ac((uint)((ulonglong)uVar4 >> 0x20),(uint)uVar4);
097_display_spi_state/compute_and_send_exposure_offsets.c:53: multiply_two_floats((uint)((ulonglong)uVar7 >> 0x20),(uint)uVar7,0x40340000,0);
097_display_spi_state/compute_and_send_exposure_offsets.c:65: multiply_two_floats((uint)((ulonglong)uVar7 >> 0x20),(uint)uVar7,0x40340000,0);
127_rtos_kernel_services/allocate_heap_block_and_mask_result.c:28: multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,0x3ff80000,0);
127_rtos_kernel_services/call_kernel_with_two_params.c:29: multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,0x3fe570a3,0xd70a3d71);
128_ev_display_mapping/lookup_aperture_value_index.c:71: uVar1 = encode_float32_to_fixed_point((uint)((ulonglong)uVar5 >> 0x20),(uint)uVar5);
128_ev_display_mapping/lookup_or_compute_index.c:63: uVar1 = encode_float32_to_fixed_point((uint)((ulonglong)uVar5 >> 0x20),(uint)uVar5);
128_ev_display_mapping/map_keycode_to_index.c:48: uVar1 = encode_float32_to_fixed_point((uint)((ulonglong)uVar4 >> 0x20),(uint)uVar4);
187_settings_manager/apply_bayer_pixel_mask.c:154: multiply_two_floats((uint)((ulonglong)uVar11 >> 0x20),(uint)uVar11,0x3ff80000,0);
187_settings_manager/apply_bayer_pixel_mask.c:212: multiply_two_floats((uint)((ulonglong)uVar11 >> 0x20),(uint)uVar11,0x3ff80000,0);
234_settings_menu_init/compute_shifted_bitfield.c:39: multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,0x3fa00000,0);
234_settings_menu_init/compute_shifted_bitfield.c:41: multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,extraout_r4_01,extraout_r5_01);
235_settings_menu/process_ae_metering_update.c:106: multiply_two_floats((uint)((ulonglong)uVar12 >> 0x20),(uint)uVar12,0x408f4000,0);
235_settings_menu/process_ae_metering_update.c:109: multiply_two_floats((uint)((ulonglong)uVar13 >> 0x20),(uint)uVar13,0x408f4000,0);
235_settings_menu/process_ae_metering_update.c:112: uVar8 = normalize_fixed_point_value_105448ac((uint)((ulonglong)uVar12 >> 0x20),(uint)uVar12);
235_settings_menu/process_ae_metering_update.c:113: uVar3 = normalize_fixed_point_value_105448ac((uint)((ulonglong)uVar13 >> 0x20),(uint)uVar13);
237_menu_settings_manager/process_sensor_readout_buffers.c:100: multiply_two_floats((uint)((ulonglong)uVar18 >> 0x20),(uint)uVar18,extraout_r4_01,extraout_r5_01);
237_menu_settings_manager/process_sensor_readout_event_104ccbe0.c:220: uVar13 = multiply_fixed_point_values_105445a2((int)((ulonglong)uVar15 >> 0x20),(int)uVar15,
237_menu_settings_manager/process_sensor_readout_event_104ccbe0.c:222: multiply_two_floats((uint)((ulonglong)uVar13 >> 0x20),(uint)uVar13,
237_menu_settings_manager/process_sensor_readout_event_104ccbe0.c:223: (uint)((ulonglong)uVar14 >> 0x20),(uint)uVar14);
263_keypad_gpio_driver/adjust_iso_sensitivity_value.c:29: multiply_two_floats((uint)((ulonglong)uVar4 >> 0x20),(uint)uVar4,0x40590000,0);
263_keypad_gpio_driver/binary_search_lookup_table.c:36: multiply_two_floats((uint)((ulonglong)uVar6 >> 0x20),(uint)uVar6,0x408f4000,0);
275_settings_manager/compute_and_dispatch_pixel_offset.c:36: multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,0x3ff80000,0);
```

## 3 runtime-lib soft-float/64-bit internals (64 sites)

64-bit multiply/shift internals. Candidates for `scripts/harvest_asm.py` (byte-faithful asm) once the `long long` width is confirmed.

```
294_runtime_lib_fatfs_lens_update/add_two_64_bit_integers.c:49: return (ulonglong)(uVar5 & param_1 & 0x80000000/*SDRAM*/) << 0x20;
294_runtime_lib_fatfs_lens_update/add_two_64_bit_integers.c:56: return CONCAT44(uVar5,pvVar6) | 0x8000000000000;
294_runtime_lib_fatfs_lens_update/add_two_64_bit_integers.c:59: return CONCAT44(uVar5,pvVar6);
294_runtime_lib_fatfs_lens_update/add_two_64_bit_integers.c:121: return CONCAT44(uVar5,(uint)pvVar6 & 0x1fffff | ((uint)pvVar6 >> 0x15) << 0x15);
294_runtime_lib_fatfs_lens_update/add_two_64_bit_integers.c:175: return (ulonglong)(uVar5 & 0x80000000/*SDRAM*/) << 0x20;
294_runtime_lib_fatfs_lens_update/add_two_64_bit_integers.c:178: return (ulonglong)(uVar5 & 0x80000000/*SDRAM*/ | 0x7ff00000) << 0x20;
294_runtime_lib_fatfs_lens_update/add_two_64_bit_integers.c:182: return CONCAT44(uVar9,uVar10);
294_runtime_lib_fatfs_lens_update/build_lens_update_packet_10544cd0.c:96: uVar1 = (uint)((ulonglong)uVar7 >> 0x20);
294_runtime_lib_fatfs_lens_update/build_lens_update_packet_10544cd0.c:100: uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
294_runtime_lib_fatfs_lens_update/compare_64_bit_integers.c:50: return (ulonglong)(uVar5 & param_1 & 0x80000000/*SDRAM*/) << 0x20;
294_runtime_lib_fatfs_lens_update/compare_64_bit_integers.c:57: return CONCAT44(uVar5,pvVar6) | 0x8000000000000;
294_runtime_lib_fatfs_lens_update/compare_64_bit_integers.c:60: return CONCAT44(uVar5,pvVar6);
294_runtime_lib_fatfs_lens_update/compare_64_bit_integers.c:122: return CONCAT44(uVar5,(uint)pvVar6 & 0x1fffff | ((uint)pvVar6 >> 0x15) << 0x15);
294_runtime_lib_fatfs_lens_update/compare_64_bit_integers.c:176: return (ulonglong)(uVar5 & 0x80000000/*SDRAM*/) << 0x20;
294_runtime_lib_fatfs_lens_update/compare_64_bit_integers.c:179: return (ulonglong)(uVar5 & 0x80000000/*SDRAM*/ | 0x7ff00000) << 0x20;
294_runtime_lib_fatfs_lens_update/compare_64_bit_integers.c:183: return CONCAT44(uVar9,uVar10);
294_runtime_lib_fatfs_lens_update/compute_float_division.c:35: return CONCAT44(param_1 ^ param_2,param_2) & 0x80000000ffffffff;
294_runtime_lib_fatfs_lens_update/compute_float_division.c:51: uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
294_runtime_lib_fatfs_lens_update/compute_float_division.c:71: return CONCAT44(uVar8 | uVar5 & 0x80000000/*SDRAM*/,uVar2);
294_runtime_lib_fatfs_lens_update/compute_float_division.c:74: return CONCAT44(uVar5,uVar2) & 0x80000000ffffffff | 0x7f80000000000000;
294_runtime_lib_fatfs_lens_update/compute_float_division.c:76: return CONCAT44(uVar5,uVar2) & 0x80000000ffffffff;
294_runtime_lib_fatfs_lens_update/compute_float_division.c:81: return CONCAT44(param_1 ^ param_2,param_2) & 0x80000000ffffffff | 0x7f80000000000000;
294_runtime_lib_fatfs_lens_update/compute_float_division.c:85: return CONCAT44(0xffffffff,param_2);
294_runtime_lib_fatfs_lens_update/compute_lens_fw_crc32.c:40: return CONCAT44((param_1 & 0x3fffffff) >> 10 | (iVar1 + -1) * 0x100000,param_1 << 0x16);
294_runtime_lib_fatfs_lens_update/convert_signed_byte_to_unsigned.c:30: return CONCAT44(uVar2 | param_1 & 0x80000000/*SDRAM*/,param_1 << 0x1d);
294_runtime_lib_fatfs_lens_update/init_context_and_dispatch.c:46: return CONCAT44(puVar2,puVar1);
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:62: return (ulonglong)(uVar14 | 0x7ff00000) << 0x20;
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:74: uVar9 = (uint)((ulonglong)(CONCAT44(-(uint)(param_4 * 0x400 != 0) - uVar11,uVar7) << 2) >>
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:77: (((ulonglong)uVar7 & 0x3fffffff) * 4 * (ulonglong)param_2 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:78: uVar6 = (uint)((ulonglong)lVar5 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:80: uVar1 = (uint)((ulonglong)lVar3 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:85: uVar7 = (uint)((ulonglong)lVar3 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:96: uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:102: uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:105: uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:111: if (((int)((int)((ulonglong)lVar3 >> 0x20) + uVar7 + (uint)CARRY4(uVar11,uVar10)) <
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:126: return CONCAT44((uVar7 & 0x1fffffff) >> 9 | iVar13 * 0x100000 | uVar14,
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:129: return (ulonglong)(uVar14 | 0x7ff00000) << 0x20;
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:131: return (ulonglong)uVar14 << 0x20;
294_runtime_lib_fatfs_lens_update/multiply_fixed_point_values_105445a2.c:138: return (ulonglong)uVar14 << 0x20;
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:30: return (ulonglong)uVar11 << 0x20;
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:43: return CONCAT44(param_1 & 0x7fffffff | uVar11,param_2);
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:53: uVar8 = (uint)((ulonglong)lVar3 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:59: uVar5 = (ulonglong)uVar2 * (ulonglong)uVar1 + (uVar4 >> 0x20);
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:70: uVar6 = CONCAT44((int)(uVar6 >> 0x20),(uint)uVar6 + uVar1);
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:73: uVar7 = (int)(uVar6 >> 0x20) + (uVar7 + uVar10 + -0x3ff) * 0x100000 + (uint)bVar12;
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:75: return CONCAT44(uVar7 | uVar11,(int)uVar6);
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:78: return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:80: return (ulonglong)uVar11 << 0x20;
294_runtime_lib_fatfs_lens_update/multiply_two_floats.c:84: return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
294_runtime_lib_fatfs_lens_update/normalize_fixed_point_value_10546d6a.c:47: uVar6 = CONCAT44(extraout_r4_00,extraout_r5_00);
294_runtime_lib_fatfs_lens_update/normalize_fixed_point_value_10546d6a.c:52: uStack_20 = (uStack_20 & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)((ushort)((ulonglong)uVar6 >> 0x30))) & ((uint64_t)0xffff)) << 0);
294_runtime_lib_fatfs_lens_update/normalize_fixed_point_value_10546d6a.c:56: multiply_two_floats((uint)((ulonglong)uVar6 >> 0x20),(uint)uVar6,0x40240000,0);
294_runtime_lib_fatfs_lens_update/normalize_fixed_point_value_10546d6a.c:57: uVar6 = CONCAT44(extraout_r4_01,extraout_r5_01);
294_runtime_lib_fatfs_lens_update/normalize_fixed_point_value_10546d6a.c:64: uStack_20 = (uint)((ulonglong)uVar6 >> 0x20);
294_runtime_lib_fatfs_lens_update/normalize_fixed_point_value_10546d6a.c:67: uStack_20 = (uStack_20 & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)((ushort)((ulonglong)uVar6 >> 0x30))) & ((uint64_t)0xffff)) << 0);
294_runtime_lib_fatfs_lens_update/normalize_fixed_point_value_10546d6a.c:71: uStack_20 = (uint)((ulonglong)uVar6 >> 0x20);
294_runtime_lib_fatfs_lens_update/pack_lens_fw_update_word.c:37: return CONCAT44(param_1 << 1,uVar2);
294_runtime_lib_fatfs_lens_update/pack_lens_fw_update_word.c:40: return CONCAT44(iVar1,uVar2);
294_runtime_lib_fatfs_lens_update/parse_float_string_to_fixed.c:225: return CONCAT44(uStack_28,uStack_24);
294_runtime_lib_fatfs_lens_update/poll_transfer_state.c:54: if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
294_runtime_lib_fatfs_lens_update/process_buffer_with_status_check.c:79: return CONCAT44(iVar3,iVar2);
294_runtime_lib_fatfs_lens_update/softfloat_poly.c:100: uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
294_runtime_lib_fatfs_lens_update/softfloat_poly.c:104: uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
```

## 4 kernel (traps run stock bytes at origVA) (9 sites)

Kernel syscalls are reached via `int #0x40` with the stock routine address, so the stock bytes run; confirm no direct by-name C callers before ignoring.

```
000_rtos_kernel/dispatch_task_event_state.c:81: uVar16 = CONCAT44(uVar4,extraout_r5);
000_rtos_kernel/dispatch_task_event_state.c:140: uVar16 = CONCAT44(extraout_r4_02,extraout_r5_05);
000_rtos_kernel/dispatch_task_event_state.c:145: uVar16 = CONCAT44(extraout_r4_03,extraout_r5_06);
000_rtos_kernel/dispatch_task_event_state.c:153: uVar16 = CONCAT44(uVar4,extraout_r5_07);
000_rtos_kernel/dispatch_task_event_state.c:160: uVar16 = CONCAT44(extraout_r4,extraout_r5_00);
000_rtos_kernel/dispatch_task_event_state.c:168: uVar16 = CONCAT44(extraout_r4_00,extraout_r5_01);
000_rtos_kernel/dispatch_task_event_state.c:179: uVar16 = CONCAT44(uVar4,extraout_r5_03);
000_rtos_kernel/dispatch_task_event_state.c:183: insert_into_timeout_queue_1000e780((int)(uVar16 >> 0x20));
000_rtos_kernel/dispatch_task_event_state.c:184: uVar16 = CONCAT44(extraout_r4_01,extraout_r5_04);
```

## 5 64-bit bitfield-insert macros (global doubles, uRam8000435x) (8 sites)

64-bit global field inserts (`<< 32` masks). Same width question as bucket 2.

```
014_io_settings_control/compute_exposure_compensation.c:112: uRam80004350 = (uRam80004350 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)(0)) & ((uint64_t)0xffffffff)) << 32);
014_io_settings_control/compute_exposure_compensation.c:115: uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)(0)) & ((uint64_t)0xffffffff)) << 32);
014_io_settings_control/compute_exposure_compensation.c:203: uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 0)) | ((((uint64_t)((uint)((ulonglong)uVar18 >> 0x20))) & ((uint64_t)0xffffffff))
014_io_settings_control/compute_exposure_compensation.c:204: uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)((uint)uVar18)) & ((uint64_t)0xffffffff)) << 32);
014_io_settings_control/compute_exposure_compensation.c:259: uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 0)) | ((((uint64_t)((uint)((ulonglong)uVar17 >> 0x20))) & ((uint64_t)0xffffffff))
014_io_settings_control/compute_exposure_compensation.c:260: uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)((uint)uVar17)) & ((uint64_t)0xffffffff)) << 32);
014_io_settings_control/compute_exposure_compensation.c:261: uRam80004350 = (uRam80004350 & ~(((uint64_t)0xffffffff) << 0)) | ((((uint64_t)((uint)((ulonglong)uVar18 >> 0x20))) & ((uint64_t)0xffffffff))
014_io_settings_control/compute_exposure_compensation.c:262: uRam80004350 = (uRam80004350 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)((uint)uVar18)) & ((uint64_t)0xffffffff)) << 32);
```

## Top suspects (real B-10 shape, not yet stock-checked)

- `035_menu_item_manager/register_menu_item_with_status_1038a260.c:53/79` and `_1038a88e.c:52/73`: `CONCAT44(x,y)` of two live values, then `>> 0x20` passed as a pointer to `format_string_to_buffer_10545140` -> `x|y` under masked shifts.
- `050_debug_settings_menu/format_and_register_menu_item_103b22a2.c:50` (same family).
- `199_settings_menu_manager/app_obj_factory.c:68`: a second `>> 0x20` pointer extraction remains in the upstream B-10 root function; check it is not on the CONCAT path.
- `049_settings_menu_init/initialize_object_with_subsystem_hooks.c:42`: `(uint5)` 40-bit value `>> 0x20` stored to a byte field.

## Probe to settle the `long long` width

Compile `int f(void){return sizeof(long long);}` with the build flags and check for `ldi #8` vs `ldi #4`.

## Stock-checked so far

- `196_settings_event_handler/process_object_event_with_semaphores.c` (0x10492c36, on the blocker-#3 task path: slot 3 of vtable 0x105b435c): stock `cmp r4,r10` on the plain r4 return of 0x10491edc -> harmless; cleaned.
- `198_event_dispatch/process_object_list_and_dispatch.c` (0x10494018): shift harmless (plain r4 return), cleaned. **But** the call passed `__frv_reg_unset(4)` (= 0) where stock passes incoming r4 = `param_1` -> B-3 null-deref, fixed. Same B-3 fixed in `attach_object_and_invoke_slot.c` (0x10493fe0).
- `199_settings_menu_manager/app_obj_factory.c` - upstream B-10 root instance (already fixed).

## B-3 sweep: `scripts/find_unset_r4_passthrough.py` (gated)

This scans the stock caller (small FR decoder) up to each `callee(__frv_reg_unset(4), ...)` call. Validation: on master it flags exactly the two hand-fixed `find_matching_list_entry` sites; random rewrites were re-checked against stock bytes.

**Gated per the B-11 rule.** A stock 1.31 boot in qemu-frn (`FRN_HIST=1 FRN_HIST_ALL=1 FRN_SNAP_AT=20,100,400`, cumulative 16-byte PC buckets) was used with `--hist`. Of 144 strict PARAM1 sites, **25 have their stock call instruction executed** within 400 M instructions (3 already by 20 M). Only those were rewritten; see `docs/data/unset_r4_applied.tsv`. The remaining 119 are `PARAM1-OFFPATH` in `docs/data/unset_r4_review.tsv`, to be applied as the boot frontier reaches them (re-run with a longer or later trace).

Still open in the review list:
- **CLOBBERED, "r4 = return of call @X" (~249):** stock passes the *previous call's return*, e.g. `map_mode_code_to_index_104bb5c4(read_struct_field_at_index_104c2890(...))`. Same bug family, but not auto-applied.
- **PARAM1? (29):** a branch precedes the call.
- **NOPARAM (30):** the caller itself has the wrong arity.
- **NOCALL (64):** the target is indirect or far.
- `__frv_reg_unset(5)` in the second-argument position is not scanned yet.

## B-3 backlog note

`__frv_reg_unset(N)` returns **0** (`cpu/src/__frv_stub.c`), not the caller's register. ~521 files use `__frv_reg_unset(4)`; where stock leaves the incoming r4 untouched (typical `call:d ...; mov r4,rX`), the real value is `param_1`. Worth a scripted check: call sites where `__frv_reg_unset(4)` is the first arg and the stock caller does not write r4 before the call.
