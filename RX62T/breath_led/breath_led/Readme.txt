-------- PROJECT GENERATOR --------
PROJECT NAME :	breath_led
PROJECT DIRECTORY :	C:\WorkSpace\breath_led\breath_led
CPU SERIES :	RX600
CPU TYPE :	RX62T
TOOLCHAIN NAME :	Renesas RX Standard Toolchain
TOOLCHAIN VERSION :	1.0.1.0
GENERATION FILES :
    C:\WorkSpace\breath_led\breath_led\dbsct.c
        Setting of B,R Section
    C:\WorkSpace\breath_led\breath_led\typedefine.h
        Aliases of Integer Type
    C:\WorkSpace\breath_led\breath_led\sbrk.c
        Program of sbrk
    C:\WorkSpace\breath_led\breath_led\iodefine.h
        Definition of I/O Register
    C:\WorkSpace\breath_led\breath_led\intprg.c
        Interrupt Program
    C:\WorkSpace\breath_led\breath_led\vecttbl.c
        Initialize of Vector Table
    C:\WorkSpace\breath_led\breath_led\vect.h
        Definition of Vector
    C:\WorkSpace\breath_led\breath_led\resetprg.c
        Reset Program
    C:\WorkSpace\breath_led\breath_led\breath_led.c
        Main Program
    C:\WorkSpace\breath_led\breath_led\sbrk.h
        Header file of sbrk file
    C:\WorkSpace\breath_led\breath_led\stacksct.h
        Setting of Stack area
START ADDRESS OF SECTION :
 H'1000	B_1,R_1,B_2,R_2,B,R,SU,SI
 H'FFFF8000	PResetPRG
 H'FFFF8100	C_1,C_2,C,C$*,D*,P,PIntPRG,W*
 H'FFFFFFD0	FIXEDVECT

* When the user program is executed,
* the interrupt mask has been masked.
* 
* Program start 0xFFFF8000.
* RAM start 0x1000.

SELECT TARGET :
    RX600 Segger J-Link
DATE & TIME : 2018/3/8 ¤U¤È 02:45:53
