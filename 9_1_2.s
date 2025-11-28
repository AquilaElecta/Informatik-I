.data
 quelle:
 .word 0x6f666e49
 .word 0x74616d72
 .word 0x00316b69
 .word 0xCAFE1337
 ziel:
 .word 0
 .word 0
 .word 0
 .word 0
 .text
 main:
 # Hier Programmcode
li x31 4
#Adresse loaden
lui x1 quelle/4096
addi x1 x1 (quelle-(quelle/4096)*4096)
lui x2 ziel/4096
addi x2 x1 (ziel-(ziel/4096)*4096)
loop:
    beq x31 x0 end
    lw x3 0(x1)
    sw x3 0(x2)
    addi x1 x1 4
    addi x2 x2 4
    addi x31 x31 -1
    jal x0 loop
end:
    add x0 x0 x0