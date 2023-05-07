/*******************************
Project : LCD " Welcome! Microcontrollers"
type : pic16f877A
crystal : 8MHz
*******************************/
//LCD Module Connections

  //LCD Pinout Settings
  sbit LCD_RS at RB4_bit;
  sbit LCD_EN at RB5_bit;
  sbit LCD_D4 at RB0_bit;
  sbit LCD_D5 at RB1_bit;
  sbit LCD_D6 at RB2_bit;
  sbit LCD_D7 at RB3_bit;

    //Pin Direction
  sbit LCD_RS_DIRECTION at TRISB4_bit;
  sbit LCD_EN_DIRECTION at TRISB5_bit;
  sbit LCD_D4_DIRECTION at TRISB0_bit;
  sbit LCD_D5_DIRECTION at TRISB1_bit;
  sbit LCD_D6_DIRECTION at TRISB2_bit;
  sbit LCD_D7_DIRECTION at TRISB3_bit;

//End LCD Module
/*******************************/

#define Start portb.B0

void main() {
  adcon1=0x07;
  lcd_init();
  loop:
    lcd_cmd(_lcd_clear);
    lcd_cmd(_lcd_cursor_off);
    delay_ms(500);
    lcd_out(1, 6, "Welcome!");
    delay_ms(500);
    lcd_out(2, 1, "Microcontrollers");
    delay_ms(500);
      goto loop;
}