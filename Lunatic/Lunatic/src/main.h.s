;; 
;; Declare all function entry points as global symbols for the compiler.
;; (The linker will know what to do with them)
;; WARNING: Every global symbol declared will be linked, so DO NOT declare 
;; symbols for functions you do not use.
;;
.globl cpct_disableFirmware_asm
.globl cpct_drawSolidBox_asm
.globl cpct_getScreenPtr_asm
.globl cpct_waitVSYNC_asm
.globl cpct_scanKeyboard_asm
.globl cpct_isKeyPressed_asm
.globl cpct_setVideoMode_asm
.globl cpct_drawSprite_asm
.globl cpct_setPalette_asm
.globl cpct_setPALColour_asm
.globl cpct_drawSpriteMasked_asm 
.globl cpct_drawStringM0_asm
.globl cpct_setDrawCharM0_asm 