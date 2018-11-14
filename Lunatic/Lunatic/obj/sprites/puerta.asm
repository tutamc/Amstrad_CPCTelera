;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.6.8 #9946 (Mac OS X x86_64)
;--------------------------------------------------------
	.module puerta
	.optsdcc -mz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _puerta_sp
	.globl _puerta_pal
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _DATA
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _INITIALIZED
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area _DABS (ABS)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area _HOME
	.area _GSINIT
	.area _GSFINAL
	.area _GSINIT
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area _HOME
	.area _HOME
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area _CODE
	.area _CODE
_puerta_pal:
	.db #0x54	; 84	'T'
	.db #0x44	; 68	'D'
	.db #0x55	; 85	'U'
	.db #0x5c	; 92
	.db #0x58	; 88	'X'
	.db #0x5d	; 93
	.db #0x4c	; 76	'L'
	.db #0x45	; 69	'E'
	.db #0x4d	; 77	'M'
	.db #0x5e	; 94
	.db #0x40	; 64
	.db #0x5f	; 95
	.db #0x4e	; 78	'N'
	.db #0x47	; 71	'G'
	.db #0x4f	; 79	'O'
	.db #0x53	; 83	'S'
_puerta_sp:
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x05	; 5
	.db #0x0f	; 15
	.db #0x0f	; 15
	.db #0x0a	; 10
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x05	; 5
	.db #0x4e	; 78	'N'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x27	; 39
	.db #0x0a	; 10
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x1b	; 27
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x27	; 39
	.db #0x00	; 0
	.db #0x05	; 5
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x0a	; 10
	.db #0x05	; 5
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x0a	; 10
	.db #0x1b	; 27
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x33	; 51	'3'
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x33	; 51	'3'
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x33	; 51	'3'
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.db #0x1b	; 27
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x99	; 153
	.db #0x66	; 102	'f'
	.db #0x33	; 51	'3'
	.db #0x8d	; 141
	.area _INITIALIZER
	.area _CABS (ABS)