#ifndef DADOS_H
#define DADOS_H

#define B_KBC 1024.0        
#define B_MBC 1048576.0      
#define B_GBC 1073741824.0

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
    return kilo_byte / B_KBC;
}

double kb_gb(double kilo_byte) {
    return kilo_byte / B_MBC;
}

double mb_b(double mega_byte) {
    return mega_byte * B_MBC;
}

double mb_kb(double mega_byte) {
    return mega_byte * B_KBC;
}

double mb_gb(double mega_byte) {
    return mega_byte / B_KBC;
}

double gb_b(double giga_byte) {
    return giga_byte * B_GBC;
}

double gb_kb(double giga_byte) {
    return giga_byte * B_MBC;
}

double gb_mb(double giga_byte) {
    return giga_byte * B_KBC;
}

#endif