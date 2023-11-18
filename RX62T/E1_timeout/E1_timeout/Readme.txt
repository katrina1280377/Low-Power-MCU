-------- PROJECT GENERATOR --------
PROJECT NAME :	E1_timeout
PROJECT DIRECTORY :	C:\WorkSpace\E1_timeout\E1_timeout
CPU SERIES :	RX600
CPU TYPE :	RX62T
TOOLCHAIN NAME :	Renesas RX Standard Toolchain
TOOLCHAIN VERSION :	1.0.1.0
GENERATION FILES :
    C:\WorkSpace\E1_timeout\E1_timeout\dbsct.c
        Setting of B,R Section
    C:\WorkSpace\E1_timeout\E1_timeout\typedefine.h
        Aliases of Integer Type
    C:\WorkSpace\E1_timeout\E1_timeout\sbrk.c
        Program of sbrk
    C:\WorkSpace\E1_timeout\E1_timeout\iodefine.h
        Definition of I/O Register
    C:\WorkSpace\E1_timeout\E1_timeout\intprg.c
        Interrupt Program
    C:\WorkSpace\E1_timeout\E1_timeout\vecttbl.c
        Initialize of Vector Table
    C:\WorkSpace\E1_timeout\E1_timeout\vect.h
        Definition of Vector
    C:\WorkSpace\E1_timeout\E1_timeout\resetprg.c
        Reset Program
    C:\WorkSpace\E1_timeout\E1_timeout\E1_timeout.c
        Main Program
    C:\WorkSpace\E1_timeout\E1_timeout\sbrk.h
        Header file of sbrk file
    C:\WorkSpace\E1_timeout\E1_timeout\stacksct.h
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
    RX600 E1/E20 SYSTEM
    RX600 Segger J-Link
    RX600 Simulator
DATE & TIME : 2018/3/15 ¤U¤È 07:55:53
