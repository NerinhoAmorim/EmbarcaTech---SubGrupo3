#ifndef DIGITAL_H
#define DIGITAL_H

#define B_KBC 1024.0        
#define B_MBC 1048576.0      
#define B_GBC 1073741824.0

double b_kb(double byte);
double b_mb(double byte);
double b_gb(double byte);

double kb_b(double kilo_byte);
double kb_mb(double kilo_byte);
double kb_gb(double kilo_byte);

double mb_b(double mega_byte);
double mb_kb(double mega_byte);
double mb_gb(double mega_byte);

double gb_b(double giga_byte);
double gb_kb(double giga_byte);
double gb_mb(double giga_byte);

#endif
