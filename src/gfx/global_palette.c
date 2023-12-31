unsigned char global_palette[512] =
{
    0x00, 0x00, /*   0: rgb(  0,   0,   0) */
    0xff, 0xff, /*   1: rgb(255, 255, 255) */
    0xe7, 0x9c, /*   2: rgb( 58,  61,  58) */
    0x52, 0xca, /*   3: rgb(148, 150, 148) */
    0x18, 0xe3, /*   4: rgb(197, 198, 197) */
    0x01, 0x80, /*   5: rgb(  0,   4,   8) */
    0x21, 0x00, /*   6: rgb(  0,   8,   8) */
    0xdf, 0x02, /*   7: rgb(  0, 178, 255) */
    0x21, 0x04, /*   8: rgb(  8,   8,   8) */
    0x21, 0x84, /*   9: rgb(  8,  12,   8) */
    0x22, 0x84, /*  10: rgb(  8,  12,  16) */
    0x30, 0x84, /*  11: rgb(  8,  12, 132) */
    0x42, 0x04, /*  12: rgb(  8,  16,  16) */
    0x43, 0x04, /*  13: rgb(  8,  16,  25) */
    0x43, 0x84, /*  14: rgb(  8,  20,  25) */
    0x63, 0x04, /*  15: rgb(  8,  24,  25) */
    0x9c, 0x06, /*  16: rgb(  8, 162, 230) */
    0xbe, 0x06, /*  17: rgb(  8, 170, 247) */
    0x22, 0x88, /*  18: rgb( 16,  12,  16) */
    0x42, 0x08, /*  19: rgb( 16,  16,  16) */
    0x42, 0x88, /*  20: rgb( 16,  20,  16) */
    0x64, 0x08, /*  21: rgb( 16,  24,  33) */
    0x85, 0x08, /*  22: rgb( 16,  32,  41) */
    0x85, 0x88, /*  23: rgb( 16,  36,  41) */
    0x59, 0x0a, /*  24: rgb( 16, 146, 206) */
    0xdf, 0x0a, /*  25: rgb( 16, 178, 255) */
    0x24, 0x0c, /*  26: rgb( 25,   8,  33) */
    0x24, 0x8c, /*  27: rgb( 25,  12,  33) */
    0x42, 0x0c, /*  28: rgb( 25,  16,  16) */
    0x43, 0x8c, /*  29: rgb( 25,  20,  25) */
    0x63, 0x0c, /*  30: rgb( 25,  24,  25) */
    0x63, 0x8c, /*  31: rgb( 25,  28,  25) */
    0xa6, 0x0c, /*  32: rgb( 25,  40,  49) */
    0xa7, 0x8c, /*  33: rgb( 25,  45,  58) */
    0xc8, 0x8c, /*  34: rgb( 25,  53,  66) */
    0xd3, 0x8d, /*  35: rgb( 25, 117, 156) */
    0x15, 0x0e, /*  36: rgb( 25, 130, 173) */
    0x21, 0x90, /*  37: rgb( 33,  12,   8) */
    0x22, 0x90, /*  38: rgb( 33,  12,  16) */
    0x24, 0x90, /*  39: rgb( 33,  12,  33) */
    0x25, 0x90, /*  40: rgb( 33,  12,  41) */
    0x26, 0x90, /*  41: rgb( 33,  12,  49) */
    0x45, 0x10, /*  42: rgb( 33,  16,  41) */
    0x46, 0x10, /*  43: rgb( 33,  16,  49) */
    0x63, 0x10, /*  44: rgb( 33,  24,  25) */
    0x64, 0x10, /*  45: rgb( 33,  24,  33) */
    0x64, 0x90, /*  46: rgb( 33,  28,  33) */
    0x84, 0x10, /*  47: rgb( 33,  32,  33) */
    0x84, 0x90, /*  48: rgb( 33,  36,  33) */
    0xe9, 0x90, /*  49: rgb( 33,  61,  74) */
    0x0a, 0x11, /*  50: rgb( 33,  65,  82) */
    0x0a, 0x91, /*  51: rgb( 33,  69,  82) */
    0xb1, 0x91, /*  52: rgb( 33, 109, 140) */
    0x22, 0x94, /*  53: rgb( 41,  12,  16) */
    0x25, 0x94, /*  54: rgb( 41,  12,  41) */
    0x42, 0x14, /*  55: rgb( 41,  16,  16) */
    0x46, 0x14, /*  56: rgb( 41,  16,  49) */
    0x47, 0x14, /*  57: rgb( 41,  16,  58) */
    0x47, 0x94, /*  58: rgb( 41,  20,  58) */
    0x64, 0x94, /*  59: rgb( 41,  28,  33) */
    0x84, 0x14, /*  60: rgb( 41,  32,  33) */
    0x85, 0x94, /*  61: rgb( 41,  36,  41) */
    0xa5, 0x14, /*  62: rgb( 41,  40,  41) */
    0xa5, 0x94, /*  63: rgb( 41,  45,  41) */
    0x2b, 0x15, /*  64: rgb( 41,  73,  90) */
    0x2b, 0x95, /*  65: rgb( 41,  77,  90) */
    0x4d, 0x95, /*  66: rgb( 41,  85, 107) */
    0x6e, 0x95, /*  67: rgb( 41,  93, 115) */
    0x21, 0x98, /*  68: rgb( 49,  12,   8) */
    0x22, 0x98, /*  69: rgb( 49,  12,  16) */
    0x42, 0x18, /*  70: rgb( 49,  16,  16) */
    0x47, 0x18, /*  71: rgb( 49,  16,  58) */
    0x42, 0x98, /*  72: rgb( 49,  20,  16) */
    0x47, 0x98, /*  73: rgb( 49,  20,  58) */
    0x48, 0x98, /*  74: rgb( 49,  20,  66) */
    0x85, 0x98, /*  75: rgb( 49,  36,  41) */
    0x1f, 0x1b, /*  76: rgb( 49, 194, 255) */
    0x21, 0x1c, /*  77: rgb( 58,   8,   8) */
    0x42, 0x1c, /*  78: rgb( 58,  16,  16) */
    0x42, 0x9c, /*  79: rgb( 58,  20,  16) */
    0x43, 0x9c, /*  80: rgb( 58,  20,  25) */
    0x48, 0x9c, /*  81: rgb( 58,  20,  66) */
    0x49, 0x9c, /*  82: rgb( 58,  20,  74) */
    0x63, 0x1c, /*  83: rgb( 58,  24,  25) */
    0x69, 0x1c, /*  84: rgb( 58,  24,  74) */
    0x69, 0x9c, /*  85: rgb( 58,  28,  74) */
    0x84, 0x9c, /*  86: rgb( 58,  36,  33) */
    0x88, 0x9c, /*  87: rgb( 58,  36,  66) */
    0xa6, 0x1c, /*  88: rgb( 58,  40,  49) */
    0xa6, 0x9c, /*  89: rgb( 58,  45,  49) */
    0x21, 0xa0, /*  90: rgb( 66,  12,   8) */
    0x42, 0x20, /*  91: rgb( 66,  16,  16) */
    0x42, 0xa0, /*  92: rgb( 66,  20,  16) */
    0x43, 0xa0, /*  93: rgb( 66,  20,  25) */
    0x63, 0x20, /*  94: rgb( 66,  24,  25) */
    0x69, 0x20, /*  95: rgb( 66,  24,  74) */
    0x6a, 0x20, /*  96: rgb( 66,  24,  82) */
    0x6a, 0xa0, /*  97: rgb( 66,  28,  82) */
    0x85, 0xa0, /*  98: rgb( 66,  36,  41) */
    0x89, 0xa0, /*  99: rgb( 66,  36,  74) */
    0xa9, 0x20, /* 100: rgb( 66,  40,  74) */
    0xc7, 0x20, /* 101: rgb( 66,  49,  58) */
    0x21, 0xa4, /* 102: rgb( 74,  12,   8) */
    0x42, 0x24, /* 103: rgb( 74,  16,  16) */
    0x42, 0xa4, /* 104: rgb( 74,  20,  16) */
    0x43, 0xa4, /* 105: rgb( 74,  20,  25) */
    0x63, 0x24, /* 106: rgb( 74,  24,  25) */
    0x63, 0xa4, /* 107: rgb( 74,  28,  25) */
    0x64, 0xa4, /* 108: rgb( 74,  28,  33) */
    0x6a, 0xa4, /* 109: rgb( 74,  28,  82) */
    0x6b, 0xa4, /* 110: rgb( 74,  28,  90) */
    0xa5, 0x24, /* 111: rgb( 74,  40,  41) */
    0xaa, 0x24, /* 112: rgb( 74,  40,  82) */
    0xa5, 0xa4, /* 113: rgb( 74,  45,  41) */
    0xaa, 0xa4, /* 114: rgb( 74,  45,  82) */
    0xab, 0xa4, /* 115: rgb( 74,  45,  90) */
    0xc8, 0xa4, /* 116: rgb( 74,  53,  66) */
    0xe8, 0x24, /* 117: rgb( 74,  57,  66) */
    0x29, 0x25, /* 118: rgb( 74,  73,  74) */
    0x1f, 0xa7, /* 119: rgb( 74, 198, 255) */
    0x22, 0xa8, /* 120: rgb( 82,  12,  16) */
    0x42, 0x28, /* 121: rgb( 82,  16,  16) */
    0x63, 0x28, /* 122: rgb( 82,  24,  25) */
    0x64, 0xa8, /* 123: rgb( 82,  28,  33) */
    0x6b, 0xa8, /* 124: rgb( 82,  28,  90) */
    0x6c, 0xa8, /* 125: rgb( 82,  28,  99) */
    0xa5, 0x28, /* 126: rgb( 82,  40,  41) */
    0xe9, 0xa8, /* 127: rgb( 82,  61,  74) */
    0x08, 0x29, /* 128: rgb( 82,  65,  66) */
    0x09, 0x29, /* 129: rgb( 82,  65,  74) */
    0x08, 0xa9, /* 130: rgb( 82,  69,  66) */
    0x0b, 0xa9, /* 131: rgb( 82,  69,  90) */
    0x4a, 0x29, /* 132: rgb( 82,  81,  82) */
    0x64, 0x2b, /* 133: rgb( 82, 219,  33) */
    0x42, 0x2c, /* 134: rgb( 90,  16,  16) */
    0x63, 0x2c, /* 135: rgb( 90,  24,  25) */
    0x64, 0xac, /* 136: rgb( 90,  28,  33) */
    0x85, 0xac, /* 137: rgb( 90,  36,  41) */
    0xcc, 0x2c, /* 138: rgb( 90,  49,  99) */
    0x08, 0x2d, /* 139: rgb( 90,  65,  66) */
    0x09, 0x2d, /* 140: rgb( 90,  65,  74) */
    0x08, 0xad, /* 141: rgb( 90,  69,  66) */
    0x09, 0xad, /* 142: rgb( 90,  69,  74) */
    0x0a, 0xad, /* 143: rgb( 90,  69,  82) */
    0x0c, 0xad, /* 144: rgb( 90,  69,  99) */
    0x0d, 0xad, /* 145: rgb( 90,  69, 107) */
    0x29, 0x2d, /* 146: rgb( 90,  73,  74) */
    0x2c, 0x2d, /* 147: rgb( 90,  73,  99) */
    0x2d, 0x2d, /* 148: rgb( 90,  73, 107) */
    0x55, 0xad, /* 149: rgb( 90,  85, 173) */
    0x6b, 0x2d, /* 150: rgb( 90,  89,  90) */
    0x42, 0x30, /* 151: rgb( 99,  16,  16) */
    0x43, 0xb0, /* 152: rgb( 99,  20,  25) */
    0x63, 0xb0, /* 153: rgb( 99,  28,  25) */
    0x85, 0xb0, /* 154: rgb( 99,  36,  41) */
    0x08, 0x31, /* 155: rgb( 99,  65,  66) */
    0x08, 0xb1, /* 156: rgb( 99,  69,  66) */
    0x09, 0xb1, /* 157: rgb( 99,  69,  74) */
    0x0a, 0xb1, /* 158: rgb( 99,  69,  82) */
    0x29, 0x31, /* 159: rgb( 99,  73,  74) */
    0x2d, 0x31, /* 160: rgb( 99,  73, 107) */
    0x2e, 0x31, /* 161: rgb( 99,  73, 115) */
    0x4a, 0x31, /* 162: rgb( 99,  81,  82) */
    0x4d, 0x31, /* 163: rgb( 99,  81, 107) */
    0x4a, 0xb1, /* 164: rgb( 99,  85,  82) */
    0x4d, 0xb1, /* 165: rgb( 99,  85, 107) */
    0x8c, 0x31, /* 166: rgb( 99,  97,  99) */
    0x3f, 0xb3, /* 167: rgb( 99, 206, 255) */
    0x42, 0x34, /* 168: rgb(107,  16,  16) */
    0x43, 0xb4, /* 169: rgb(107,  20,  25) */
    0x63, 0x34, /* 170: rgb(107,  24,  25) */
    0x63, 0xb4, /* 171: rgb(107,  28,  25) */
    0x08, 0x35, /* 172: rgb(107,  65,  66) */
    0x0b, 0x35, /* 173: rgb(107,  65,  90) */
    0x08, 0xb5, /* 174: rgb(107,  69,  66) */
    0x09, 0xb5, /* 175: rgb(107,  69,  74) */
    0x29, 0x35, /* 176: rgb(107,  73,  74) */
    0x2e, 0xb5, /* 177: rgb(107,  77, 115) */
    0x4a, 0xb5, /* 178: rgb(107,  85,  82) */
    0x4b, 0xb5, /* 179: rgb(107,  85,  90) */
    0x4d, 0xb5, /* 180: rgb(107,  85, 107) */
    0x4e, 0xb5, /* 181: rgb(107,  85, 115) */
    0x6b, 0x35, /* 182: rgb(107,  89,  90) */
    0x6e, 0x35, /* 183: rgb(107,  89, 115) */
    0xad, 0x35, /* 184: rgb(107, 105, 107) */
    0x42, 0x38, /* 185: rgb(115,  16,  16) */
    0x63, 0x38, /* 186: rgb(115,  24,  25) */
    0x08, 0xb9, /* 187: rgb(115,  69,  66) */
    0x29, 0x39, /* 188: rgb(115,  73,  74) */
    0x6b, 0x39, /* 189: rgb(115,  89,  90) */
    0x6f, 0x39, /* 190: rgb(115,  89, 123) */
    0xce, 0x39, /* 191: rgb(115, 113, 115) */
    0x43, 0xbc, /* 192: rgb(123,  20,  25) */
    0x08, 0xbd, /* 193: rgb(123,  69,  66) */
    0x70, 0xbd, /* 194: rgb(123,  93, 132) */
    0x7f, 0x3f, /* 195: rgb(123, 219, 255) */
    0x43, 0xc0, /* 196: rgb(132,  20,  25) */
    0xce, 0xc0, /* 197: rgb(132,  53, 115) */
    0x0f, 0xc1, /* 198: rgb(132,  69, 123) */
    0x4a, 0xc1, /* 199: rgb(132,  85,  82) */
    0xab, 0x41, /* 200: rgb(132, 105,  90) */
    0xef, 0xc1, /* 201: rgb(132, 125, 123) */
    0x10, 0xc2, /* 202: rgb(132, 134, 132) */
    0x63, 0x44, /* 203: rgb(140,  24,  25) */
    0x68, 0xcd, /* 204: rgb(156,  93,  66) */
    0xd3, 0x50, /* 205: rgb(165,  49, 156) */
    0x53, 0xd1, /* 206: rgb(165,  85, 156) */
    0x94, 0xd2, /* 207: rgb(165, 166, 165) */
    0x9f, 0xd3, /* 208: rgb(165, 231, 255) */
    0x2c, 0x55, /* 209: rgb(173,  73,  99) */
    0x70, 0xd6, /* 210: rgb(173, 158, 132) */
    0xb6, 0x59, /* 211: rgb(181, 105, 181) */
    0x07, 0x5a, /* 212: rgb(181, 130,  58) */
    0xd6, 0x5a, /* 213: rgb(181, 178, 181) */
    0x34, 0x5d, /* 214: rgb(189,  73, 165) */
    0x18, 0x63, /* 215: rgb(197, 194, 197) */
    0x1f, 0x64, /* 216: rgb(206,   0, 255) */
    0xd9, 0x64, /* 217: rgb(206,  49, 206) */
    0x6a, 0xe6, /* 218: rgb(206, 158,  82) */
    0x14, 0x67, /* 219: rgb(206, 194, 165) */
    0x3f, 0x68, /* 220: rgb(214,   8, 255) */
    0xd9, 0xe9, /* 221: rgb(214, 117, 206) */
    0x5a, 0x6b, /* 222: rgb(214, 210, 214) */
    0x8c, 0xed, /* 223: rgb(222, 101,  99) */
    0x7b, 0xef, /* 224: rgb(222, 223, 222) */
    0x9b, 0x6f, /* 225: rgb(222, 227, 222) */
    0x7f, 0xf0, /* 226: rgb(230,  28, 255) */
    0xbc, 0xf0, /* 227: rgb(230,  45, 230) */
    0xf1, 0xf0, /* 228: rgb(230,  61, 140) */
    0x76, 0x73, /* 229: rgb(230, 219, 181) */
    0x3e, 0xf5, /* 230: rgb(239,  77, 247) */
    0x28, 0xf6, /* 231: rgb(239, 142,  66) */
    0xed, 0x76, /* 232: rgb(239, 186, 107) */
    0xbd, 0xf7, /* 233: rgb(239, 239, 239) */
    0xbf, 0x78, /* 234: rgb(247,  40, 255) */
    0xde, 0x78, /* 235: rgb(247,  49, 247) */
    0x4d, 0x79, /* 236: rgb(247,  81, 107) */
    0x7a, 0xf9, /* 237: rgb(247,  93, 214) */
    0x7e, 0xf9, /* 238: rgb(247,  93, 247) */
    0x1e, 0x7a, /* 239: rgb(247, 130, 247) */
    0xa8, 0x7a, /* 240: rgb(247, 170,  66) */
    0x4d, 0x7c, /* 241: rgb(255,  16, 107) */
    0x91, 0xfc, /* 242: rgb(255,  36, 140) */
    0xca, 0x7c, /* 243: rgb(255,  49,  82) */
    0xf4, 0x7c, /* 244: rgb(255,  57, 165) */
    0x37, 0xfd, /* 245: rgb(255,  77, 189) */
    0x46, 0xfd, /* 246: rgb(255,  85,  49) */
    0xbd, 0xfd, /* 247: rgb(255, 109, 239) */
    0xc5, 0xfd, /* 248: rgb(255, 117,  41) */
    0x44, 0xfe, /* 249: rgb(255, 150,  33) */
    0x7f, 0xfe, /* 250: rgb(255, 158, 255) */
    0x12, 0x7f, /* 251: rgb(255, 194, 148) */
    0x33, 0x7f, /* 252: rgb(255, 202, 156) */
    0x55, 0xff, /* 253: rgb(255, 215, 173) */
    0x75, 0xff, /* 254: rgb(255, 223, 173) */
    0xb7, 0x7f, /* 255: rgb(255, 235, 189) */
};
