#define DIM 32
#define SBOX_SIZE 8
#define NUM_SBOXES (DIM/SBOX_SIZE)

uint64_t mds[] = {
    0x80401040,
    0x4020c020,
    0x20106010,
    0x10c030c0,
    0x08040104,
    0x04020c02,
    0x02010601,
    0x010c030c,
    0x40804010,
    0x204020c0,
    0x10201060,
    0xc010c030,
    0x04080401,
    0x0204020c,
    0x01020106,
    0x0c010c03,
    0x20808040,
    0x10404020,
    0xc0202010,
    0x601010c0,
    0x02080804,
    0x01040402,
    0x0c020201,
    0x0601010c,
    0x80204080,
    0x40102040,
    0x20c01020,
    0x1060c010,
    0x08020408,
    0x04010204,
    0x020c0102,
    0x01060c01
};