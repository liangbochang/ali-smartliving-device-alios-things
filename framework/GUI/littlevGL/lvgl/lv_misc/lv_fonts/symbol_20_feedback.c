#include "../../../lv_conf.h"
#if USE_LV_FONT_SYMBOL_20_FEEDBACK

#include <stdint.h>
#include "../lv_font.h"

/*Store the image of the letters (glyph) */
static const uint8_t symbol_20_feedback_bitmap[] = 
{
    // ASCII: 57408, char width: 9
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......
    0x01, 0x00,  // -------O-.......
    0x03, 0x80,  // ------OOO.......
    0x07, 0x80,  // -----OOOO.......
    0x0f, 0x80,  // ----OOOOO.......
    0xff, 0x80,  // OOOOOOOOO.......
    0xff, 0x80,  // OOOOOOOOO.......
    0xff, 0x80,  // OOOOOOOOO.......
    0xff, 0x80,  // OOOOOOOOO.......
    0xff, 0x80,  // OOOOOOOOO.......
    0xff, 0x80,  // OOOOOOOOO.......
    0x0f, 0x80,  // ----OOOOO.......
    0x07, 0x80,  // -----OOOO.......
    0x03, 0x80,  // ------OOO.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......

    // ASCII: 57409, char width: 13
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x01, 0x00,  // -------O-----...
    0x03, 0x80,  // ------OOO----...
    0x07, 0x80,  // -----OOOO----...
    0x0f, 0x80,  // ----OOOOO----...
    0xff, 0xb0,  // OOOOOOOOO-OO-...
    0xff, 0x98,  // OOOOOOOOO--OO...
    0xff, 0x98,  // OOOOOOOOO--OO...
    0xff, 0x98,  // OOOOOOOOO--OO...
    0xff, 0xb0,  // OOOOOOOOO-OO-...
    0xff, 0x80,  // OOOOOOOOO----...
    0x0f, 0x80,  // ----OOOOO----...
    0x07, 0x80,  // -----OOOO----...
    0x03, 0x80,  // ------OOO----...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...

    // ASCII: 57410, char width: 19
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x04, 0x00,  // -------------O-----.....
    0x01, 0x07, 0x00,  // -------O-----OOO---.....
    0x03, 0x81, 0x80,  // ------OOO------OO--.....
    0x07, 0x9c, 0x80,  // -----OOOO--OOO--O--.....
    0x0f, 0x8c, 0xc0,  // ----OOOOO---OO--OO-.....
    0xff, 0xa6, 0x40,  // OOOOOOOOO-O--OO--O-.....
    0xff, 0xba, 0x40,  // OOOOOOOOO-OOO-O--O-.....
    0xff, 0x9a, 0x40,  // OOOOOOOOO--OO-O--O-.....
    0xff, 0x9a, 0x40,  // OOOOOOOOO--OO-O--O-.....
    0xff, 0xb2, 0x40,  // OOOOOOOOO-OO--O--O-.....
    0xff, 0x86, 0x40,  // OOOOOOOOO----OO--O-.....
    0x0f, 0x8c, 0xc0,  // ----OOOOO---OO--OO-.....
    0x07, 0x99, 0x80,  // -----OOOO--OO--OO--.....
    0x03, 0x83, 0x00,  // ------OOO-----OO---.....
    0x01, 0x07, 0x00,  // -------O-----OOO---.....
    0x00, 0x04, 0x00,  // -------------O-----.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....

    // ASCII: 57411, char width: 20
    0x00, 0x60, 0x00,  // ---------OO---------....
    0x00, 0xf0, 0x00,  // --------OOOO--------....
    0x00, 0xf0, 0x00,  // --------OOOO--------....
    0x01, 0xf8, 0x00,  // -------OOOOOO-------....
    0x01, 0xf8, 0x00,  // -------OOOOOO-------....
    0x03, 0xfc, 0x00,  // ------OOOOOOOO------....
    0x07, 0x0e, 0x00,  // -----OOO----OOO-----....
    0x07, 0x0e, 0x00,  // -----OOO----OOO-----....
    0x0f, 0x9f, 0x00,  // ----OOOOO--OOOOO----....
    0x0f, 0x9f, 0x00,  // ----OOOOO--OOOOO----....
    0x1f, 0x9f, 0x80,  // ---OOOOOO--OOOOOO---....
    0x1f, 0x9f, 0x80,  // ---OOOOOO--OOOOOO---....
    0x3f, 0xff, 0xc0,  // --OOOOOOOOOOOOOOOO--....
    0x3f, 0x9f, 0xc0,  // --OOOOOOO--OOOOOOO--....
    0x7f, 0x9f, 0xe0,  // -OOOOOOOO--OOOOOOOO-....
    0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOO....
    0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOO....
    0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOO....
    0x00, 0x00, 0x00,  // --------------------....
    0x00, 0x00, 0x00,  // --------------------....

    // ASCII: 57412, char width: 16
    0x00, 0x00,  // ----------------
    0x30, 0x00,  // --OO------------
    0x70, 0x00,  // -OOO------------
    0xf8, 0x00,  // OOOOO-----------
    0xfc, 0x00,  // OOOOOO----------
    0xf8, 0x00,  // OOOOO-----------
    0xf0, 0x00,  // OOOO------------
    0x70, 0x00,  // -OOO------------
    0x70, 0x00,  // -OOO------------
    0x78, 0x00,  // -OOOO-----------
    0x3c, 0x00,  // --OOOO----------
    0x1e, 0x00,  // ---OOOO---------
    0x0f, 0x1c,  // ----OOOO---OOO--
    0x07, 0xff,  // -----OOOOOOOOOOO
    0x03, 0xff,  // ------OOOOOOOOOO
    0x01, 0xfe,  // -------OOOOOOOO-
    0x00, 0x3c,  // ----------OOOO--
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------

    // ASCII: 57413, char width: 10
    0x00, 0x00,  // ----------......
    0x1c, 0x00,  // ---OOO----......
    0x3e, 0x00,  // --OOOOO---......
    0x3c, 0x00,  // --OOOO----......
    0x3c, 0x00,  // --OOOO----......
    0x7c, 0x00,  // -OOOOO----......
    0x78, 0xc0,  // -OOOO---OO......
    0x7f, 0xc0,  // -OOOOOOOOO......
    0x7f, 0x80,  // -OOOOOOOO-......
    0xff, 0x80,  // OOOOOOOOO-......
    0xff, 0x00,  // OOOOOOOO--......
    0x07, 0x00,  // -----OOO--......
    0x06, 0x00,  // -----OO---......
    0x0e, 0x00,  // ----OOO---......
    0x0c, 0x00,  // ----OO----......
    0x0c, 0x00,  // ----OO----......
    0x08, 0x00,  // ----O-----......
    0x18, 0x00,  // ---OO-----......
    0x18, 0x00,  // ---OO-----......
    0x10, 0x00,  // ---O------......

    // ASCII: 57414, char width: 20
    0x00, 0x60, 0x00,  // ---------OO---------....
    0x00, 0x70, 0x00,  // ---------OOO--------....
    0x01, 0xfc, 0x00,  // -------OOOOOOO------....
    0x03, 0xfe, 0x00,  // ------OOOOOOOOO-----....
    0x07, 0xff, 0x00,  // -----OOOOOOOOOOO----....
    0x07, 0xff, 0x00,  // -----OOOOOOOOOOO----....
    0x07, 0xff, 0x00,  // -----OOOOOOOOOOO----....
    0x0f, 0xff, 0x00,  // ----OOOOOOOOOOOO----....
    0x0f, 0xff, 0x00,  // ----OOOOOOOOOOOO----....
    0x0f, 0xff, 0x00,  // ----OOOOOOOOOOOO----....
    0x0f, 0xff, 0x80,  // ----OOOOOOOOOOOOO---....
    0x0f, 0xff, 0x80,  // ----OOOOOOOOOOOOO---....
    0x1f, 0xff, 0x80,  // ---OOOOOOOOOOOOOO---....
    0x1f, 0xff, 0xc0,  // ---OOOOOOOOOOOOOOO--....
    0x3f, 0xff, 0xc0,  // --OOOOOOOOOOOOOOOO--....
    0x7f, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOO-....
    0x7f, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOO-....
    0x01, 0xf8, 0x00,  // -------OOOOOO-------....
    0x00, 0xf8, 0x00,  // --------OOOOO-------....
    0x00, 0x70, 0x00,  // ---------OOO--------....

    // ASCII: 57415, char width: 16
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------
    0x00, 0x07,  // -------------OOO
    0x00, 0x1e,  // -----------OOOO-
    0x00, 0x7e,  // ---------OOOOOO-
    0x01, 0xfc,  // -------OOOOOOO--
    0x07, 0xfc,  // -----OOOOOOOOO--
    0x1f, 0xf8,  // ---OOOOOOOOOO---
    0x7f, 0xf8,  // -OOOOOOOOOOOO---
    0xff, 0xf0,  // OOOOOOOOOOOO----
    0x01, 0xf0,  // -------OOOOO----
    0x01, 0xe0,  // -------OOOO-----
    0x01, 0xe0,  // -------OOOO-----
    0x01, 0xc0,  // -------OOO------
    0x01, 0xc0,  // -------OOO------
    0x01, 0x80,  // -------OO-------
    0x01, 0x80,  // -------OO-------
    0x00, 0x00,  // ----------------
    0x00, 0x00,  // ----------------

    // ASCII: 57416, char width: 23
    0x00, 0x00, 0x00,  // -----------------------.
    0x00, 0xfc, 0x00,  // --------OOOOOO---------.
    0x0f, 0xff, 0xc0,  // ----OOOOOOOOOOOOOO-----.
    0x3f, 0xff, 0xf0,  // --OOOOOOOOOOOOOOOOOO---.
    0x7f, 0x01, 0xf8,  // -OOOOOOO-------OOOOOO--.
    0xf8, 0xfc, 0x7c,  // OOOOO---OOOOOO---OOOOO-.
    0x63, 0xff, 0x18,  // -OO---OOOOOOOOOO---OO--.
    0x0f, 0xff, 0xc0,  // ----OOOOOOOOOOOOOO-----.
    0x1f, 0x87, 0xe0,  // ---OOOOOO----OOOOOO----.
    0x0e, 0x01, 0xe0,  // ----OOO--------OOOO----.
    0x08, 0xfc, 0xc0,  // ----O---OOOOOO--OO-----.
    0x01, 0xfe, 0x00,  // -------OOOOOOOO--------.
    0x03, 0xff, 0x00,  // ------OOOOOOOOOO-------.
    0x01, 0x86, 0x00,  // -------OO----OO--------.
    0x00, 0x30, 0x00,  // ----------OO-----------.
    0x00, 0x78, 0x00,  // ---------OOOO----------.
    0x00, 0x30, 0x00,  // ----------OO-----------.
    0x00, 0x00, 0x00,  // -----------------------.
    0x00, 0x00, 0x00,  // -----------------------.
    0x00, 0x00, 0x00,  // -----------------------.

    // ASCII: 57417, char width: 26
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0xff, 0xff, 0xff, 0x00,  // OOOOOOOOOOOOOOOOOOOOOOOO--......
    0xc0, 0x00, 0x01, 0x00,  // OO---------------------O--......
    0x9f, 0xff, 0xf9, 0x00,  // O--OOOOOOOOOOOOOOOOOO--O--......
    0x9f, 0xff, 0xfd, 0x80,  // O--OOOOOOOOOOOOOOOOOOO-OO-......
    0x9f, 0xff, 0xfd, 0xc0,  // O--OOOOOOOOOOOOOOOOOOO-OOO......
    0x9f, 0xff, 0xfc, 0xc0,  // O--OOOOOOOOOOOOOOOOOOO--OO......
    0x9f, 0xff, 0xfc, 0xc0,  // O--OOOOOOOOOOOOOOOOOOO--OO......
    0x9f, 0xff, 0xfc, 0xc0,  // O--OOOOOOOOOOOOOOOOOOO--OO......
    0x9f, 0xff, 0xfc, 0xc0,  // O--OOOOOOOOOOOOOOOOOOO--OO......
    0x9f, 0xff, 0xfd, 0xc0,  // O--OOOOOOOOOOOOOOOOOOO-OOO......
    0x9f, 0xff, 0xfd, 0x00,  // O--OOOOOOOOOOOOOOOOOOO-O--......
    0x80, 0x00, 0x01, 0x00,  // O----------------------O--......
    0xc0, 0x00, 0x03, 0x00,  // OO--------------------OO--......
    0x7f, 0xff, 0xff, 0x00,  // -OOOOOOOOOOOOOOOOOOOOOOO--......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......

    // ASCII: 57418, char width: 26
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0xff, 0xff, 0xff, 0x00,  // OOOOOOOOOOOOOOOOOOOOOOOO--......
    0xc0, 0x00, 0x01, 0x00,  // OO---------------------O--......
    0x9f, 0xff, 0x81, 0x00,  // O--OOOOOOOOOOOOOO------O--......
    0x9f, 0xff, 0x81, 0x80,  // O--OOOOOOOOOOOOOO------OO-......
    0x9f, 0xff, 0x81, 0xc0,  // O--OOOOOOOOOOOOOO------OOO......
    0x9f, 0xff, 0x80, 0xc0,  // O--OOOOOOOOOOOOOO-------OO......
    0x9f, 0xff, 0x80, 0xc0,  // O--OOOOOOOOOOOOOO-------OO......
    0x9f, 0xff, 0x80, 0xc0,  // O--OOOOOOOOOOOOOO-------OO......
    0x9f, 0xff, 0x80, 0xc0,  // O--OOOOOOOOOOOOOO-------OO......
    0x9f, 0xff, 0x81, 0xc0,  // O--OOOOOOOOOOOOOO------OOO......
    0x9f, 0xff, 0x81, 0x00,  // O--OOOOOOOOOOOOOO------O--......
    0x80, 0x00, 0x01, 0x00,  // O----------------------O--......
    0xc0, 0x00, 0x03, 0x00,  // OO--------------------OO--......
    0x7f, 0xff, 0xff, 0x00,  // -OOOOOOOOOOOOOOOOOOOOOOO--......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......

    // ASCII: 57419, char width: 26
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0xff, 0xff, 0xff, 0x00,  // OOOOOOOOOOOOOOOOOOOOOOOO--......
    0xc0, 0x00, 0x01, 0x00,  // OO---------------------O--......
    0x9f, 0xf8, 0x01, 0x00,  // O--OOOOOOOOOO----------O--......
    0x9f, 0xf8, 0x01, 0x80,  // O--OOOOOOOOOO----------OO-......
    0x9f, 0xf8, 0x01, 0xc0,  // O--OOOOOOOOOO----------OOO......
    0x9f, 0xf8, 0x00, 0xc0,  // O--OOOOOOOOOO-----------OO......
    0x9f, 0xf8, 0x00, 0xc0,  // O--OOOOOOOOOO-----------OO......
    0x9f, 0xf8, 0x00, 0xc0,  // O--OOOOOOOOOO-----------OO......
    0x9f, 0xf8, 0x00, 0xc0,  // O--OOOOOOOOOO-----------OO......
    0x9f, 0xf8, 0x01, 0xc0,  // O--OOOOOOOOOO----------OOO......
    0x9f, 0xf8, 0x01, 0x00,  // O--OOOOOOOOOO----------O--......
    0x80, 0x00, 0x01, 0x00,  // O----------------------O--......
    0xc0, 0x00, 0x03, 0x00,  // OO--------------------OO--......
    0x7f, 0xff, 0xff, 0x00,  // -OOOOOOOOOOOOOOOOOOOOOOO--......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......

    // ASCII: 57420, char width: 26
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0xff, 0xff, 0xff, 0x00,  // OOOOOOOOOOOOOOOOOOOOOOOO--......
    0xc0, 0x00, 0x01, 0x00,  // OO---------------------O--......
    0x9f, 0x00, 0x01, 0x00,  // O--OOOOO---------------O--......
    0x9f, 0x80, 0x01, 0x80,  // O--OOOOOO--------------OO-......
    0x9f, 0x80, 0x01, 0xc0,  // O--OOOOOO--------------OOO......
    0x9f, 0x80, 0x00, 0xc0,  // O--OOOOOO---------------OO......
    0x9f, 0x80, 0x00, 0xc0,  // O--OOOOOO---------------OO......
    0x9f, 0x80, 0x00, 0xc0,  // O--OOOOOO---------------OO......
    0x9f, 0x80, 0x00, 0xc0,  // O--OOOOOO---------------OO......
    0x9f, 0x80, 0x01, 0xc0,  // O--OOOOOO--------------OOO......
    0x9f, 0x80, 0x01, 0x00,  // O--OOOOOO--------------O--......
    0x80, 0x00, 0x01, 0x00,  // O----------------------O--......
    0xc0, 0x00, 0x03, 0x00,  // OO--------------------OO--......
    0x7f, 0xff, 0xff, 0x00,  // -OOOOOOOOOOOOOOOOOOOOOOO--......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......

    // ASCII: 57421, char width: 26
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0xff, 0xff, 0xff, 0x00,  // OOOOOOOOOOOOOOOOOOOOOOOO--......
    0xc0, 0x00, 0x01, 0x00,  // OO---------------------O--......
    0x80, 0x00, 0x01, 0x00,  // O----------------------O--......
    0x80, 0x00, 0x01, 0x80,  // O----------------------OO-......
    0x80, 0x00, 0x01, 0xc0,  // O----------------------OOO......
    0x80, 0x00, 0x00, 0xc0,  // O-----------------------OO......
    0x80, 0x00, 0x00, 0xc0,  // O-----------------------OO......
    0x80, 0x00, 0x00, 0xc0,  // O-----------------------OO......
    0x80, 0x00, 0x00, 0xc0,  // O-----------------------OO......
    0x80, 0x00, 0x01, 0x80,  // O----------------------OO-......
    0x80, 0x00, 0x01, 0x00,  // O----------------------O--......
    0x80, 0x00, 0x01, 0x00,  // O----------------------O--......
    0xc0, 0x00, 0x03, 0x00,  // OO--------------------OO--......
    0x7f, 0xff, 0xff, 0x00,  // -OOOOOOOOOOOOOOOOOOOOOOO--......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......

    // ASCII: 57422, char width: 17
    0x03, 0xf0, 0x00,  // ------OOOOOO-----.......
    0x0f, 0xf8, 0x00,  // ----OOOOOOOOO----.......
    0x1f, 0x7c, 0x00,  // ---OOOOO-OOOOO---.......
    0x3f, 0x3e, 0x00,  // --OOOOOO--OOOOO--.......
    0x3f, 0x1e, 0x00,  // --OOOOOO---OOOO--.......
    0x3f, 0x0f, 0x00,  // --OOOOOO----OOOO-.......
    0x73, 0x67, 0x00,  // -OOO--OO-OO--OOO-.......
    0x79, 0x0f, 0x00,  // -OOOO--O----OOOO-.......
    0x7c, 0x1f, 0x00,  // -OOOOO-----OOOOO-.......
    0x7e, 0x3f, 0x00,  // -OOOOOO---OOOOOO-.......
    0x7e, 0x3f, 0x00,  // -OOOOOO---OOOOOO-.......
    0x7c, 0x1f, 0x00,  // -OOOOO-----OOOOO-.......
    0x79, 0x0f, 0x00,  // -OOOO--O----OOOO-.......
    0x73, 0x67, 0x00,  // -OOO--OO-OO--OOO-.......
    0x3f, 0x0f, 0x00,  // --OOOOOO----OOOO-.......
    0x3f, 0x1e, 0x00,  // --OOOOOO---OOOO--.......
    0x3f, 0x3e, 0x00,  // --OOOOOO--OOOOO--.......
    0x1f, 0x7c, 0x00,  // ---OOOOO-OOOOO---.......
    0x0f, 0xf8, 0x00,  // ----OOOOOOOOO----.......
    0x03, 0xf0, 0x00,  // ------OOOOOO-----.......
};

/*Store the start index of the glyphs in the bitmap array*/
static const uint32_t symbol_20_feedback_map[] = 
{
     0, 40, 80, 140, 200, 240, 280, 340, 
    380, 440, 520, 600, 680, 760, 840, 
};

/*Store the width (column count) of each glyph*/
static const uint8_t symbol_20_feedback_width[] = 
{
     9, 13, 19, 20, 16, 10, 20, 16, 
    23, 26, 26, 26, 26, 26, 17, 
};

lv_font_t lv_font_symbol_20_feedback = 
{
#if LV_TXT_UTF8 == 0
    208,        /*First letter's unicode */
    223,        /*Last letter's unicode */
#else
    57408,        /*First letter's unicode */
    57423,        /*Last letter's unicode */
#endif
    20,        /*Letters height (rows) */
    symbol_20_feedback_bitmap,    /*Glyph's bitmap*/
    symbol_20_feedback_map,    /*Glyph start indexes in the bitmap*/
    symbol_20_feedback_width,    /*Glyph widths (columns)*/
    NULL         /*No next page by default*/
};

#endif /*USE_LV_FONT_SYMBOL_20_FEEDBACK*/
