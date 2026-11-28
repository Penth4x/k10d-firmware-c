/* @k10d update_camera_state_flags @ 0x1051d440
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a new value to a state array index and triggers subsystem updates for specific
 *   indices.
 * summary:
 *   The function checks if the value at param_1 + param_2*4 differs from param_3 and
 *   updates it if so. For index 0x19, it extracts a byte and short from param_3, updates
 *   fields at offsets 0x68 and 0x6a, and calls a series of functions (0x104bb1da,
 *   0x104bb1e4, etc.) to configure a subsystem. For index 0, it calls
 *   write_object_field_byte with flags 0x15 and 8 based on bits in param_3. For index 0x18,
 *   it calls write_object_field_byte with flags 0x17, 0xd, 0xc, and 0xb based on bits in
 *   param_3. The specific subsystems are not identified by the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1051d458) overlaps instruction at (ram,0x1051d456)
    */

void update_camera_state_flags(void *state_array,int index,uint new_value)

{
  uint extracted_byte;
  int singleton_ptr;
  uint32_t flag_val;
  bool bit_clear;
  uint8_t local_buf [10];

  if ((index < 0x1a) && (*(uint *)((int)state_array + index * 4) != new_value)) {
    *(uint *)((int)state_array + index * 4) = new_value;
    if (index == 0x19) {
      extracted_byte = (new_value & 0x7fff0000) >> 0x10;  /* extract bits 16-30 (15-bit packed field) */
      if (extracted_byte < 0xc9) {
        extracted_byte = extracted_byte & 0xff;
      }
      else {
        extracted_byte = 200;
      }
      if ((*(byte *)((int)state_array + 0x6a) != extracted_byte) ||
         ((uint)*(ushort *)((int)state_array + 0x68) != (new_value & 0xffff))) {
        *(char *)((int)state_array + 0x6a) = (char)extracted_byte;
        *(short *)((int)state_array + 0x68) = (short)new_value;
        alloc_and_zero_small_struct_104bb18e(local_buf);
        (*(code *)0x104bb1da/*ROM*/)(local_buf,*(uint16_t *)((int)state_array + 0x68));
        flag_val = 2;
        if ((new_value & 0x80000000/*SDRAM*/) == 0) {
          flag_val = 1;
        }
        (*(code *)0x104bb1e4/*ROM*/)(local_buf,flag_val);
        (*(code *)0x104bb1ea/*ROM*/)(local_buf,0);
        (*(code *)0x104bb1f0/*ROM*/)(local_buf,1);
        (*(code *)0x104bb1f6/*ROM*/)(local_buf,1);
        (*(code *)0x104bb1fc/*ROM*/)(local_buf,2);
        singleton_ptr = get_or_create_singleton_object_104bb22a();
        configure_sensor_readout_params_104b814e(*(int *)(singleton_ptr + 4),(uint)*(byte *)((int)state_array + 0x6a),local_buf,0);
        free_if_flag_set_104bb1c2(local_buf,2);
      }
    }
    if (index == 0) {
      bit_clear = (new_value & 2) == 0;
      if (bit_clear) {
        singleton_ptr = initialize_singleton_object_1045d6a0();
      }
      else {
        singleton_ptr = initialize_singleton_object_1045d6a0();
      }
      write_object_field_byte((int *)(*(uint32_t *)(singleton_ptr + 8)),(int)(0x15),(uint)(!bit_clear));
      if ((new_value & 4) == 0) {
        singleton_ptr = initialize_singleton_object_1045d6a0();
        write_object_field_byte((int *)(*(uint32_t *)(singleton_ptr + 8)),(int)(8),(uint)(0));
      }
      else {
        singleton_ptr = initialize_singleton_object_1045d6a0();
        write_object_field_byte((int *)(*(uint32_t *)(singleton_ptr + 8)),(int)(8),(uint)(1));
      }
    }
    if (index == 0x18) {
      if ((new_value & 3) == 3) {
        singleton_ptr = initialize_singleton_object_1045d6a0();
        flag_val = 2;
      }
      else if ((new_value & 1) == 0) {
        singleton_ptr = initialize_singleton_object_1045d6a0();
        flag_val = 0;
      }
      else {
        singleton_ptr = initialize_singleton_object_1045d6a0();
        flag_val = 1;
      }
      write_object_field_byte((int *)(*(uint32_t *)(singleton_ptr + 8)),(int)(0x17),(uint)(flag_val));
      bit_clear = (new_value & 4) == 0;
      if (bit_clear) {
        singleton_ptr = initialize_singleton_object_1045d6a0();
      }
      else {
        singleton_ptr = initialize_singleton_object_1045d6a0();
      }
      write_object_field_byte((int *)(*(uint32_t *)(singleton_ptr + 8)),(int)(0xd),(uint)(!bit_clear));
      bit_clear = (new_value & 8) == 0;
      if (bit_clear) {
        singleton_ptr = initialize_singleton_object_1045d6a0();
      }
      else {
        singleton_ptr = initialize_singleton_object_1045d6a0();
      }
      write_object_field_byte((int *)(*(uint32_t *)(singleton_ptr + 8)),(int)(0xc),(uint)(!bit_clear));
      if ((new_value & 0x10) == 0) {
        singleton_ptr = initialize_singleton_object_1045d6a0();
        write_object_field_byte((int *)(*(uint32_t *)(singleton_ptr + 8)),(int)(0xb),(uint)(0));
      }
      else {
        singleton_ptr = initialize_singleton_object_1045d6a0();
        write_object_field_byte((int *)(*(uint32_t *)(singleton_ptr + 8)),(int)(0xb),(uint)(1));
      }
    }
  }
  return;
}
