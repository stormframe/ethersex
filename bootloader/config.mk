SERIAL_DEV=/dev/ttyUSB0
ISP_DEV=/dev/ttyUSB0
ISP_PROG=avr109
AVRDUDE_BAUDRATE=115200
MCU=atmega644
F_CPU=20000000
DEBUG=1
CFLAGS += -DBOOTLOADER_DDR=DDRD
CFLAGS += -DBOOTLOADER_PORT=PORTD
CFLAGS += -DBOOTLOADER_PIN=PIND
CFLAGS += -DBOOTLOADER_PINNUM=PIND7
CFLAGS += -DSEND_BOOT_MESSAGE=1