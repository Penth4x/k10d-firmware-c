/* @k10d lookup_aperture_value_index @ 0x1045ab64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
uint lookup_aperture_value_index(uint32_t unused_first_arg,
                                 uint aperture_value,
                                 int aperture_divisor,
                                 uint aperture_mode,
                                 char aperture_flag,
                                 byte aperture_override)
{
  uint scaled_value;
  uint result_index;
  uint mode_low_nibble;
  uint version_compare_result;
  uint64_t fixed_point_product;
  uint extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;

  scaled_value = (uint)((aperture_value & 0xffff) * 10) / aperture_divisor & 0xffff;

  if (aperture_flag == '\x01')
  {
    result_index = (uint)aperture_override;
    return result_index;
  }

  if (aperture_mode == 2)
  {
    result_index = 0x43;
    do
    {
      if (scaled_value == *(ushort *)(result_index * 2 + 0x105a388e/*ROM*/))
        return result_index;
      result_index = result_index + 1 & 0xff;
    } while (result_index < 0x77);
  }
  else
  {
    result_index = 0x44;

    if (aperture_mode == 1)
    {
      do
      {
        mode_low_nibble = result_index & 0xf;
        if (((((mode_low_nibble == 1) || (mode_low_nibble == 4)) ||
              (mode_low_nibble == 7)) ||
             (((mode_low_nibble == 9) || (mode_low_nibble == 0xc)) ||
              (mode_low_nibble == 0xf))) &&
            (scaled_value == *(ushort *)(result_index * 2 + 0x105a37b6/*ROM*/)))
        {
          return result_index;
        }
        result_index = result_index + 1 & 0xff;
      } while (result_index < 0xad);
    }
    else
    {
      do
      {
        if (scaled_value ==
            *(ushort *)((aperture_mode & 0xffff) * 0xd8 + 0x105a36de/*ROM*/ + result_index * 2))
        {
          return result_index;
        }
        result_index = result_index + 4 & 0xff;
      } while (result_index < 0xad);
    }
  }

  scaled_value = negate_signed_integer(aperture_value);
  result_index = negate_signed_integer(aperture_divisor);
  version_compare_result = compare_version_fields(scaled_value, result_index);
  scaled_value = compute_float_division(version_compare_result, version_compare_result);
  convert_signed_byte_to_unsigned(scaled_value);
  scaled_value = build_lens_update_packet_10544cd0((uint)(extraout_r4), (void *)(extraout_r5));
  result_index = build_lens_update_packet_10544cd0(0x40000000, 0);
  fixed_point_product =
      multiply_fixed_point_values_105445a2(scaled_value, extraout_r5_00, result_index, extraout_r5_01);
  scaled_value = encode_float32_to_fixed_point((uint)((ulonglong)fixed_point_product >> 0x20),
                                               (uint)fixed_point_product);
  version_compare_result = compute_float_division(scaled_value, 0x41000000);
  scaled_value = multiply_fixed_point_values_10544412(version_compare_result, 0x42880000);
  convert_signed_byte_to_unsigned(scaled_value);
  add_two_64_bit_integers(extraout_r4_00, extraout_r5_02, 0x3fe00000, 0);
  scaled_value = normalize_fixed_point_value_105448ac(extraout_r4_01, extraout_r5_03);
  result_index = scaled_value & 0xff;

  if (result_index < 0x44)
  {
    result_index = 0x44;
  }
  else if (result_index < 0xad)
  {
    if (aperture_mode == 1)
    {
      result_index = scaled_value & 7;
      switch (result_index)
      {
        case 0:
        case 1:
        case 2:
          result_index = 1;
          break;
        case 3:
        case 4:
        case 5:
          result_index = 4;
          break;
        case 6:
        case 7:
          result_index = 7;
          break;
      }
      result_index = (scaled_value & 0xf8) + result_index;
    }
    else
    {
      result_index = result_index + 1 & 0xfc;
    }
  }
  else
  {
    result_index = 0xac;
  }

  return result_index;
}
