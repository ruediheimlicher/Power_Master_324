/*
 * ----------------------------------------------------------------------------
 * defines
 */

#define TEST 1

#define OHNE_TEENSY 1

#define SPI_BUFFERSIZE 4
#define WHILEMAX 0xFFFF // Wartezeit in while-Schleife : 5 ms

#define UPDATE_COUNT  0x2F
#define ROT_HI  0x1FF

#define UPDATE_MEAS  0
#define UPDATE_DISP  1

#define UPDATE_SWITCH_SR 2
#define UPDATE_7SEG_SR 3

#define LOOPLED_PORT	PORTD
#define LOOPLED_DDR	DDRD
#define LOOPLED_PIN	7


#define TASTATUR_ON            0

#define ROTARY_PORT          PORTD
#define ROTARY_DDR           DDRD
#define ROTARY_PIN            PIND
#define ROTARY_A_PIN0         2
#define ROTARY_A_PIN1          0
#define ROTARY_B_PIN0         3
#define ROTARY_B_PIN1          1



#define ROTARY_A_MIN            200 // Spannung
#define ROTARY_B_MIN             100 // Strom

// admin
#define ADMIN_PORT          PORTA
#define ADMIN_DDR           DDRA
#define ADMIN_PIN           PINA
#define TEENSY_DETECTED          0           // Anzeige, dass Teensy vorhanden. Active LO
//#define TEENSY_LED          6

// switch in
#define SWITCH_PORT          PORTC
#define SWITCH_DDR           DDRC
#define SWITCH_PIN           PINC

// !!! Anschluesse von PORTC vertauscht !!!
#define SWITCH_0              2
#define SWITCH_1              1
#define SWITCH_2              0

// code SPI

#define WRITE_SPANNUNG        0x01
#define WRITE_STROM           0x02
#define READ_SPANNUNG         0x03
#define READ_STROM            0x04


#define SPI_RUN_BIT            7   // MASTER soll SPI abfragen

// OSZI
#define OSZIPORT           PORTA
#define OSZIPORTDDR        DDRA
#define OSZIPORTPIN        PINA
#define OSZI_PULS_A        1
#define OSZI_PULS_B        2

#define OSZI_A_LO OSZIPORT &= ~(1<<OSZI_PULS_A)
#define OSZI_A_HI OSZIPORT |= (1<<OSZI_PULS_A)
#define OSZI_A_TOGG OSZIPORT ^= (1<<OSZI_PULS_A)


#define OSZI_B_LO OSZIPORT &= ~(1<<OSZI_PULS_B)
#define OSZI_B_HI OSZIPORT |= (1<<OSZI_PULS_B)
#define OSZI_B_TOGG OSZIPORT ^= (1<<OSZI_PULS_B)

/*
 code-tabelle
 .db  0b11000000     ; 0: a, b, c, d, e, f
 .db  0b11111001     ; 1: b, c
 .db  0b10100100     ; 2: a, b, d, e, g
 .db  0b10110000     ; 3: a, b, c, d, g
 .db  0b10011001     ; 4: b, c, f, g
 .db  0b10010010     ; 5: a, c, d, f, g
 .db  0b10000010     ; 6: a, c, d, e, f, g
 .db  0b11111000     ; 7: a, b, c
 .db  0b10000000     ; 8: a, b, c, d, e, f, g
 .db  0b10010000     ; 9: a, b, c, d, f, g
 */


