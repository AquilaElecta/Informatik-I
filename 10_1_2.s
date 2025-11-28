li x31 100
li x1 0x10000000
li x2 0
loop:
    beq x0 x31 end
    sb x2 0(x1)
    addi x1 x1 1
    addi x2 x2 1
    addi x31 x31 -1
    jal x0 loop
end:
    jal x0 end
    