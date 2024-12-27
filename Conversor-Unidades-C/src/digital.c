#include "digital.h"

double b_kb(double byte) {
    return byte / B_KBC;
}

double b_mb(double byte) {
    return byte / B_MBC;
}

double b_gb(double byte) {
    return byte / B_GBC;
}

double kb_b(double kilo_byte) {
    return kilo_byte * B_KBC;
}

double kb_mb(double kilo_byte) {
    return kilo_byte / (B_MBC / B_KBC);
}

double kb_gb(double kilo_byte) {
    return kilo_byte / (B_GBC / B_KBC);
}

double mb_b(double mega_byte) {
    return mega_byte * B_MBC;
}

double mb_kb(double mega_byte) {
    return mega_byte * (B_MBC / B_KBC);
}

double mb_gb(double mega_byte) {
    return mega_byte / (B_GBC / B_MBC);
}

double gb_b(double giga_byte) {
    return giga_byte * B_GBC;
}

double gb_kb(double giga_byte) {
    return giga_byte * (B_GBC / B_KBC);
}

double gb_mb(double giga_byte) {
    return giga_byte * (B_GBC / B_MBC);
}
