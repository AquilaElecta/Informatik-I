main:
 li x3, 2
 li x4, 3
 li x5, 4
 jal x1 myfunction
 endlos:
 # Hier m¨usste jetzt in Register x5 in diesem Beispiel
 # 2+3*4 = 14 stehen (in Hexadezimal: 0x0E)
 jal x0, endlos
 # Multiplikationsfunktion f¨ur vorzeichenlose Zahlen
 # Multipliziert x3 mit x4 und speichert das Ergebnis in x5.
 # Modifiert x3, x4, x5, x6
 # Springt an die Adresse zur¨uck, die in x1 steht-- muss also mit "jal x1, mul"
 # aufgerufen werden.
 mul:
 li x5, 0
 mulloop:
 beq x3, x0, mulend
 andi x6, x3, 1
 beq x6, x0, mulnoadd
 add x5, x5, x4
 mulnoadd:
 slli x4, x4, 1
 srli x3, x3, 1
 jal x0, mulloop
 mulend:
 jalr x0, x1, 0
myfunction:
    addi sp sp -16
    sw x3 0(sp)
    sw x4 4(sp)
    sw x5 8(sp)
    sw x1 12(sp)
    lw x3 4(sp)
    lw x4 8(sp)
    jal x1 mul
    lw x3 0(sp)
    add x5 x5 x3
    lw x1 12(sp)
    jalr x0 x1 0