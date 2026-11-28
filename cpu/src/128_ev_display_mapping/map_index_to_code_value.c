/* @k10d map_index_to_code_value @ 0x1045b062
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
uint32_t map_index_to_code_value(uint32_t unused, uint32_t index)
{
  uint32_t code_value;

  switch (index) {
    case 0:
      code_value = 0xf0;
      break;
    case 1:
      code_value = 0xf3;
      break;
    case 2:
      code_value = 0xf4;
      break;
    case 3:
      code_value = 0xf5;
      break;
    case 4:
      code_value = 0xf8;
      break;
    case 5:
      code_value = 0xfb;
      break;
    case 6:
      code_value = 0xfc;
      break;
    case 7:
      code_value = 0xfd;
      break;
    case 8:
      code_value = 0;
      break;
    case 9:
      code_value = 3;
      break;
    case 10:
      code_value = 4;
      break;
    case 0xb:
      code_value = 5;
      break;
    case 0xc:
      code_value = 8;
      break;
    default:
      code_value = 0;
  }

  return code_value;
}
